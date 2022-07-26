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
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr){
            return false;
        }
        unordered_set<ListNode*> hashset;
        ListNode* current_node = head;
        while (current_node != nullptr){
            //There is a node that is already in the hashset
            if (hashset.find(current_node) != hashset.end()){
                return true;
            }
            hashset.insert(current_node);
            current_node = current_node->next;
        }
        return false;
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
    bool result = s.hasCycle(head);
    if (result){
        cout << "Has cycle" << endl;
    }
    else{
        cout << "No cycle" << endl;
    }
    return 0;
}