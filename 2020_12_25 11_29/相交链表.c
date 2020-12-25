/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA==NULL || headB==NULL)  //如果headA等于null或者headB等于null就返回null
    {
        return NULL;
    } 
    Node * pA = headA;
    Node * pB = headB;
    int lenA = 0;
    int lenB = 0;
    int gap = 0;
    while(pA)   //计算链表A的长度
    {
        lenA++;
        pA=pA->next;
    }
    while(pB)  //计算链表B的长度
    {
        lenB++;
        pB=pB->next;
    } 
    gap = abs(lenA-lenB); //计算差值
    if(lenA < lenB)    //让headA一直是较长的链表
    {
        Node * big = headA;
        headA = headB;
        headB = big;
    }
    while(gap--)   //让headA后移gap个，使两个链表一样长
    {
        headA = headA->next;
    }
    while(headA)    //链表A与链表B同时比较，相同时返回地址，不相同时，继续比较，直至遍历结束
    {
        if(headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}