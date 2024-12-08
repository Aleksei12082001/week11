#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include "../include/dictionary.hpp"

using namespace std;

int main() {
    int N;
    cout << "Введите количество слов в словаре: ";
    cin >> N;
    cin.ignore();  

   
    map<string, vector<string>> latin_to_english;

   
    for (int i = 0; i < N; ++i) {
        string english_word;
        cout << "Введите слова: ";
        cin >> english_word; 

        string delimiter;
        cin >> delimiter; 

        string latin_word;
        vector<string> latin_words;
        
        
        while (cin.peek() != '\n' && cin >> latin_word) {
            latin_words.push_back(latin_word);
            if (cin.peek() == ',') { 
                cin.ignore();
            }
        }

        
        addTranslation(latin_to_english, english_word, latin_words);
    }

    
    printLatinToEnglishDictionary(latin_to_english);

    return 0;
}




