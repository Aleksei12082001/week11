#include "../include/password.hpp"
#include <openssl/md5.h>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

string md5(const string &input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(digest, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << hex << setw(2) << setfill('0') << (int)digest[i];
    }
    return ss.str();
}

// Функция для генерации паролей
void generatePassword(string &password, int position, const string &targetHash, int length) {
    if (position == length) {
        if (md5(password) == targetHash) {
            cout << "Найден пароль: " << password << endl;
        }
        return;
    }

    for (char c = '0'; c <= '9'; ++c) {
        password[position] = c;
        generatePassword(password, position + 1, targetHash, length);
    }
}

void bruteForce(const string &targetHash, int length) {
    string password(length, '0');
    generatePassword(password, 0, targetHash, length);
}








