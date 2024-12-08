#include "duplicate.hpp"
#include <queue>
#include <unordered_set>

using namespace std;

vector<int> removeDuplicates(const vector<int>& input) {
    queue<int> q;
    unordered_set<int> uniqueElements;
    vector<int> result;

    for (int num : input) {
        if (uniqueElements.count(num) == 0) {
            uniqueElements.insert(num);
            q.push(num);
        }
    }

    while (!q.empty()) {
        result.push_back(q.front());
        q.pop();
    }

    return result;
}

