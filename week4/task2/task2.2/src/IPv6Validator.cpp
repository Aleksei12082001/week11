#include "IPv6Validator.hpp"
#include <regex>

bool isValidIPv6(const std::string& ip) {
    // Регулярное выражение для проверки полного адреса IPv6
    std::regex ipv6_regex(
        "^([0-9a-fA-F]{1,4}:){7}([0-9a-fA-F]{1,4}|:)$" // Полный IPv6 адрес
    );

    return std::regex_match(ip, ipv6_regex);
}
