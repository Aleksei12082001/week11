#ifndef LANGUAGE_HPP
#define LANGUAGE_HPP

#include <vector>
#include <set>
#include <string>

void processLanguages(int n, std::vector<std::vector<std::string>>& languages, 
                      std::set<std::string>& allLanguages, std::set<std::string>& commonLanguages);

void printLanguages(const std::set<std::string>& languages);

#endif 

