
#include <iostream>
using namespace std;

using namespace std;

char to_lower(const char s){
    char character = s;
    if(character >= 'A' && character <= 'Z') {
        character += 32;
    }
    return character;
}
void countChar( char character, int& vowelCount,
int& consonantCount){
   
    character = to_lower(character);
    if((character == 'a') || (character == 'e') || (character == 'i') || (character == 'o') || (character == 'u')) {
        vowelCount++;
    }
    else{
        consonantCount++;
    }
    
}

int main() {
    string str;
    int vowelCount = 0;
    int consonantCount = 0;
    cout<< "Insert the word:";
    cin >> str;
    for (char& character :str){
        if(character !=' '){
            countChar(character, vowelCount, consonantCount);
        }}
    
cout <<"Vowels: " << vowelCount <<endl;
    cout << "Consonants: " << consonantCount;
   

    return 0;
}
