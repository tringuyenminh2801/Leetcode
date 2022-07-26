#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode;
        ListNode* current = result;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry != 0){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return result->next;
    }
};

int main(){
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(4);
    l2->next = new ListNode(5);
    l2->next->next = new ListNode(6);
    Solution s;
    ListNode* result = s.addTwoNumbers(l1, l2);
    while (result != nullptr){
        cout << result->val << "->";
        result = result->next;
    }
    return 0;
}