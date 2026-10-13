#include "trinary.h"
using namespace std;
namespace trinary {

int to_decimal(string text){
    int multi = 1;
    int num = 0;
    for(long int i = text.length() - 1; i >= 0; i--){
        char c = text[i];
        if(c < 48 || c > 50) return 0;
        
        num += (c - '0') * multi;
        multi *= 3;
    }
    return num;
}

}  // namespace trinary
