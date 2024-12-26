#ifndef PASSWORD_HPP
#define PASSWORD_HPP

#include <string>

std::string md5(const std::string &input);
void bruteForce(const std::string &targetHash, int length);

#endif 









