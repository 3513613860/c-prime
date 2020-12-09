/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//快慢指针
typedef struct ListNode Node;  //自定义
struct ListNode* middleNode(struct ListNode* head){
    Node * slow = head;
    Node * fast = head;
    while(fast && fast->next)  //奇数个时，终止条件为fast->next == NULL,偶数个时，终止条件为           //fast ==NULL 
    {
        slow = slow->next; //slow后移一位
        fast = fast->next->next; //fast后移两位
    }
    return slow;  //slow为中间
}