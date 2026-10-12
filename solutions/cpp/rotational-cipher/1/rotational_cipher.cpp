#include "rotational_cipher.h"
using namespace std;
namespace rotational_cipher {
    string rotate(string text, short unsigned int rotation){
        string newtext{};
        for (long unsigned int i = 0; i < text.length(); i++){
            char c = text[i];
            if(!isalpha(c)) newtext += c;
            else if(c <= 'Z') newtext += (char)(((c - 'A') + rotation) % 26 + 'A');
            else newtext += (char)(((c - 'a') + rotation) % 26 + 'a');
        }
        return newtext;
    }
}  // namespace rotational_cipher
