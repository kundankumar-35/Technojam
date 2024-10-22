#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to detect the cycle
ListNode *detectCycle(ListNode *head)
{
    // write your code here


// base cases

if(!head || head->next==head)
    return head;



    // using fast and slow pointer
    ListNode *slow = head, *fast = head;


    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){  // cycle present

            slow = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }


    }
}


// Driver code to test the cycle detection
int main()
{
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Creating a cycle

    ListNode *cycleNode = detectCycle(head);

    if (cycleNode)
    {
        cout << "Cycle detected at node with value: " << cycleNode->val << endl;
    }
    else
    {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
