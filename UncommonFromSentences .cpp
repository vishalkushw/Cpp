#include <iostream>
#include <vector>
//#include <string>
#include <unordered_map>
//#include <sstream>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        istringstream iss1(s1), iss2(s2);
        string word;
        vector<string> result;

        while (iss1 >> word) count[word]++;
        while (iss2 >> word) count[word]++;

        for (const auto& pair : count) {
            if (pair.second == 1) result.push_back(pair.first);
        }

        return result;
    }
};

int main() {
    Solution solution;
    string s1 = "this apple is sweet";
    string s2 = "this apple is sour";

    vector<string> result = solution.uncommonFromSentences(s1, s2);
    for (const auto& word : result) {
        cout << word << " ";
    }
}

