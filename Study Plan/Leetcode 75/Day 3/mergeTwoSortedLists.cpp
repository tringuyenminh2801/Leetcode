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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //Edge case: where one of the list is null
        if (list1 == nullptr){
            return list2;
        }
        else if (list2 == nullptr){
            return list1;
        }
        //Step 1: Create a pointer points to either list1 or list2
        ListNode* result = list1;
        if (list1->val > list2->val){
            //Switch to list2
            result = list2;
            list2 = list2->next;
        }
        else{
            //Assume that we chose the right list
            list1 = list1->next;
        }
        //Step 2: Create a temporary pointer to iterate through the merged list
        ListNode* current = result;
        //Loop till either of them points to null
        while (list1 && list2){
            if (list1->val < list2->val){
                current->next = list1;
                list1 = list1->next;

            }
            else{
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        //Step 3: Add the remaining list that is longer
        current->next = list1 ? list1 : list2;
        return result;
        
    }
};

int main(){
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(3);
    list1->next->next->next = new ListNode(4);
    list1->next->next->next->next = new ListNode(7);

    ListNode *list2 = new ListNode(3);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(12);
    list2->next->next->next = new ListNode(44);
    list2->next->next->next->next = new ListNode(59);

    Solution s;
    ListNode *new_head = s.mergeTwoLists(list1, list2);
    while (new_head != nullptr)
    {
        cout << new_head->val << " ";
        new_head = new_head->next;
    }
    cout << endl;
    return 0;
}