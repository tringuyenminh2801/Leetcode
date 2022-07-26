#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int string_length = s.size();
        int current = 0;
        while (current < string_length / 2){
            //Swap two characters
            char temp = s[current];
            s[current] = s[string_length - current - 1];
            s[string_length - current - 1] = temp;
            //Increment
            current++;
        }
    }
};

int main(){
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution solution;
    solution.reverseString(s);
    for (int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }
    cout << endl;
}