#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int i = 0; i < nums.size(); i++){
            if (uset.find(nums[i]) != uset.end()){
                return true;
            }
            uset.insert(nums[i]);
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}