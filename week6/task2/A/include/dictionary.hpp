#include <string>
#include <vector>
#include <map>


void addTranslation(std::map<std::string, std::vector<std::string>>& latin_to_english,
                    const std::string& english_word, 
                    const std::vector<std::string>& latin_words);


void printLatinToEnglishDictionary(const std::map<std::string, std::vector<std::string>>& latin_to_english);



