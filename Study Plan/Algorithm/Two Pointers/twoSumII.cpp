#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 1, right = numbers.size();
        while (left < right){
            if (numbers[left - 1] + numbers[right - 1] == target){
                return {left, right};
            }
            else if (numbers[left - 1] + numbers[right - 1] > target){
                right--;
            }
            else{
                left++;
            }
        }
        return {0, 0};
    }
};

int main(){
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(numbers, target);
    cout << result[0] << " " << result[1] << endl;
}