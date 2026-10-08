#include "atbash_cipher.h"
using namespace std;
namespace atbash_cipher {

string encode(string text){
    string finaltext{};
    int char_count = 0;
    for(unsigned long int i = 0; i < text.length(); i++){
        char c = text[i];
        if (!isalnum(c)) continue;
        
        if (char_count > 0 && char_count % 5 == 0) {
            finaltext += ' ';
        }
        
        if (isalpha(c)) finaltext += (char)('z' - (tolower(c) - 'a'));
        else finaltext += c;
        
        char_count++;
    }
    return finaltext;
}

string decode(string text){
    string finaltext{};
    for(unsigned long int i = 0; i < text.length(); i++){
        char c = text[i];
        if (!isalnum(c)) continue;
        if (isalpha(c)) finaltext += (char)('z' - (c - 'a'));
        else finaltext += c;
    }
    return finaltext;
}

}  
