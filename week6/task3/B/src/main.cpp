#include <iostream>
#include <vector>
#include <set>
#include "language.hpp"

using namespace std;

int main() {
    int n;
    cout << "Введите количество школьников: ";
    cin >> n;

    vector<vector<string>> languages(n);
    set<string> allLanguages;
    set<string> commonLanguages;

    
    for (int i = 0; i < n; ++i) {
        int m;
        cout << "Введите количество языков для школьника " << (i + 1) << ": ";
        cin >> m;
        languages[i].resize(m);
        cout << "Введите языки: ";
        for (int j = 0; j < m; ++j) {
            cin >> languages[i][j];
        }
    }

   
    processLanguages(n, languages, allLanguages, commonLanguages);

    
    cout << "\nВсе языки:\n";
    printLanguages(allLanguages);

   
    cout << "\nОбщие языки:\n";
    printLanguages(commonLanguages);

    return 0;
}


