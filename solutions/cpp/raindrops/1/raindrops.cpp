#include "raindrops.h"
using namespace std;
namespace raindrops {
string convert(int num){
    string text{""};
    if (num % 3 == 0) text += "Pling";
    if (num % 5 == 0) text += "Plang";
    if (num % 7 == 0) text += "Plong";
    if (text.length() == 0) return to_string(num);
    else return text;
}
}