#ifndef STRING_HPP
#define STRING_HPP

#include <iostream>

int countOccurrences(const char* searchString, char strings[][100], int n);
bool myStrCmp(const char* str1, const char* str2);
const char* myStrStr(const char* haystack, const char* needle);

#endif // STRING_HPP

