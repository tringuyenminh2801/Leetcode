#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//Approach: count the length of the list, the index of the
//target node = list_length - n, find the target node and delete it
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int list_length = 0;
        //When head is null or deleting head
        if (head == nullptr || (head->next == nullptr && n == 1)){
            return nullptr;
        }
        ListNode* current_node = head;
        while (current_node != nullptr){
            list_length++;
            current_node = current_node->next;
        }
        int target = list_length - n;
        //When deleting the head node
        if (target == 0){
            head = head->next;
            return head;
        }
        current_node = head;
        ListNode* prev_node = current_node;
        for (int i = 0; i < target; i++){
            prev_node = current_node;
            cout << current_node->val << "->";
            current_node = current_node->next;
        }
        prev_node->next = current_node->next;
        return head;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    ListNode* result = s.removeNthFromEnd(head, 2);
    while (result != nullptr){
        cout << result->val << "->";
        result = result->next;
    }
    return 0;
}