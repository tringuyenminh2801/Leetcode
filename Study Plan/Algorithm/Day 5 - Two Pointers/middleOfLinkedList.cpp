#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        int count = 0;
        ListNode *current_node = head;
        while (current_node != nullptr)
        {
            count++;
            current_node = current_node->next;
        }
        int mid = count / 2;
        ListNode *result = head;
        for (int i = 0; i < mid; i++)
        {
            result = result->next;
        }
        return result;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    ListNode *result = s.middleNode(head);
    cout << result->val << endl;
    return 0;
}