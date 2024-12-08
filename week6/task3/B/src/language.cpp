#include "language.hpp"
#include <iostream>
#include <algorithm>


void processLanguages(int n, std::vector<std::vector<std::string>>& languages, 
                      std::set<std::string>& allLanguages, std::set<std::string>& commonLanguages) {
    
    for (const auto& lang : languages[0]) {
        commonLanguages.insert(lang);
    }

    
    for (int i = 0; i < n; ++i) {
        std::set<std::string> currentStudentLanguages(languages[i].begin(), languages[i].end());
        
       
        allLanguages.insert(currentStudentLanguages.begin(), currentStudentLanguages.end());
        
        
        std::set<std::string> intersection;
        for (const auto& lang : commonLanguages) {
            if (currentStudentLanguages.count(lang)) {
                intersection.insert(lang);
            }
        }
        commonLanguages.swap(intersection);
    }
}


void printLanguages(const std::set<std::string>& languages) {
    for (const auto& lang : languages) {
        std::cout << lang << std::endl;
    }
}





