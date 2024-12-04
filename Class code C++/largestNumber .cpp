#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> nums_str;
        for (int num : nums) {
            nums_str.push_back(to_string(num));
        }
        sort(nums_str.begin(), nums_str.end(),
		 [](const string &x, const string &y) {
            return x + y > y + x;
        });

        string largest_num = "";
        for (string &s : nums_str) {
            largest_num += s;
        }

        if (largest_num[0] == '0') {
            return "0";
        }

        return largest_num;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {10, 2};
    cout << "Largest Number: " << solution.largestNumber(nums1) << endl; 

    vector<int> nums2 = {3, 30, 34, 5, 9};
    cout << "Largest Number: " << solution.largestNumber(nums2) << endl;  

    return 0;
}

