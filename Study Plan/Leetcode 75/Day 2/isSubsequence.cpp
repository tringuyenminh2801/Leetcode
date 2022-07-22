#include <iostream>
#include <string>

using namespace std;

//Approach: Since this is comparing problems between two strings
//we can use two pointers technique to compare the two strings iteratively.
//As long as the current character of string t is the same as string s,
//we can increase the pointer of string t and string s, else we only increase pointer of string t.
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr_s = 0, ptr_t = 0;
        while (ptr_s < s.length() && ptr_t < t.length()){
            if (s[ptr_s] == t[ptr_t]){
                ptr_s++;
            }
            ptr_t++;
        }
        return ptr_s == s.length() ? true : false;
    }
};

int main(){
    string s = "abc";
    string t = "ahbgdc";
    Solution solution;
    bool result = solution.isSubsequence(s, t);
    cout << result << endl;
}