#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1, right = n;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (isBadVersion(mid)) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return left;
    }

    bool isBadVersion(int version) {
        if (version == 435){
            return true;
        }
        return isBadVersion(version - 1);
    }
};

int main(){
    Solution solution;
    int result = solution.firstBadVersion(1289);
    cout << result << endl;
}