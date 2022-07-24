#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        //Key is the number and value is its index in the vector.
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];
            //if numberToFind is found in map, return them
            if (hash.find(numberToFind) != hash.end()) {
                //+1 because indices are NOT zero based			
                return {hash[numberToFind], i};
            }
            //number was not found. Put it in the map.
            hash[nums[i]] = i;
        }
        return {0, 0};
    }
};

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> result = s.twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}