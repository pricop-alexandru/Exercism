#include "hexadecimal.h"

namespace hexadecimal {

int convert(std::string text){
    int multiplier = 1;
    int decimal = 0;
    for(auto it = text.rbegin(); it != text.rend(); ++it){
        char c = *it;
        if(c < '0' || (c > '9' && c < 'a') || c > 'f') return 0;
        else if (c <= '9') decimal += (c - '0') * multiplier;
        else decimal += (c - 'a' + 10) * multiplier;
        multiplier *= 16;
    }
    return decimal;
}

}  // namespace hexadecimal
