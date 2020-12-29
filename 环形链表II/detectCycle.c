/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode *detectCycle(struct ListNode *head) {
    ListNode * slow = head;
    ListNode * fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            break;
        }
    }
    if(fast==NULL || fast->next==NULL)
    {
        return NULL;
    }
    ListNode * meet = fast;
    while(head!=meet)
    {
        head = head->next;
        meet = meet->next;
    }
    return head;



}