#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr){
            return nullptr;
        }
        unordered_set<ListNode*> hashset;
        ListNode* current_node = head;
        while (current_node != nullptr){
            //There is a node that is already in the hashset
            if (hashset.find(current_node) != hashset.end()){
                //Find that node using head
                while (head != current_node){
                    head = head->next;
                }
                return head;
            }
            hashset.insert(current_node);
            current_node = current_node->next;
        }
        return nullptr;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next->next;
    Solution s;
    ListNode* result = s.detectCycle(head);
    if (result == nullptr){
        cout << "No cycle" << endl;
    }
    else{
        cout << "Cycle at " << result->val << endl;
    }
    return 0;
}