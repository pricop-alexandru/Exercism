#include "luhn.h"
using namespace std;
namespace luhn {

bool valid(string text){
    int sum = 0, ok = 0, sumcount = 0;
    for(long int i = text.length() - 1; i >= 0; i--){
        char c = text[i];
        if(c == ' ') continue;
        else if(!isdigit(c)) return false;
        int val = c - '0';
        val *= 1 + ok;
        if(val > 9) val -= 9;
        sum += val;
        ok = 1 - ok;
        sumcount++;
    }
    if(sum == 0 && sumcount == 1) return false;
    else if(text.length() == 1) return false;
    else if(sum % 10 == 0) return true;
    else return false;
}

}  // namespace luhn
