#include <set>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> window;
        int result = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++){
            //Erase the end of the window and all the duplicates
            while (window.find(s[right]) != window.end()){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            result = max(result, right - left + 1);
        }
        
        return result;
    }
};

int main(){
    string s = "abbbbbbefuegsdjcabcbb";
    Solution s;
    cout << s.lengthOfLongestSubstring(s) << endl;
    return 0;
}