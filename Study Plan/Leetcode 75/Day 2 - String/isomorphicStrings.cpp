#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

// Approach: Use two hash maps to store the mapping of each string.
// then check if the two hash maps are the same.
// Time Complexity: O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mapping_s;
        unordered_map<char, int> mapping_t;
    
        for (int i = 0; i < s.length(); i++){
            mapping_s[s[i]] = i + 1;
            mapping_t[t[i]] = i + 1;
        }
        for (int i = 0; i < s.length(); i++){
            if (mapping_s[s[i]] != mapping_t[t[i]]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    string s = "egg";
    string t = "add";
    Solution solution;
    bool result = solution.isIsomorphic(s, t);
    cout << result << endl;
}