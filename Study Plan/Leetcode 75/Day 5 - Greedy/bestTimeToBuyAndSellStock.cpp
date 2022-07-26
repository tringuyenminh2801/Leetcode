#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            //Find the min price to buy stock
            minPrice = min(minPrice, prices[i]);
            //Find the max price to buy stock
            maxPro = max(maxPro, prices[i] - minPrice);
        }
        return maxPro;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout << s.maxProfit(prices) << endl;
    return 0;
}