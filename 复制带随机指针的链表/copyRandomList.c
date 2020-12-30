/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head) {
    if(head == NULL)
    {
        return head;
    }

    //1.复制此链表
    Node * cur = head;
    Node * back;
    while(cur)
    {
        back = cur->next;
        Node * newNode = (Node *)malloc(sizeof(Node));
        newNode->next = NULL;
        newNode->random = NULL;
        newNode->val = cur->val;

        cur->next = newNode;
        newNode->next = back;

        cur = back;
    }

    //2.处理复制链表后的random
    Node * pre = head;
    cur = head->next;
    Node *next = head->next->next;
    while(pre)
    {
        if(pre->random)
        {
            cur->random = pre->random->next;
        }
        else
        {
            cur->random = NULL;
        }

        pre = next;
        if(next)
        {
        cur = next->next;
        next = next->next->next;
        }
    }



    // cur = head;
    // Node *copyHead = head->next;
    // while(cur)
    // {
    //     Node * copy = cur->next;
    //     Node * next = copy->next;

    //     cur->next = next;
    //     if(next)
    //     {
    //         copy->next = next->next;
    //     }
    //     else
    //     {
    //         copy->next = NULL;
    //     }
    //     cur = next;
    // }
    // return copyHead;
    //3.拆分链表
    pre = head;
    Node * copyHead = head->next;
    cur = copyHead;
    next = head->next->next;
    while(pre)
    {
        if(next)
        {
        cur->next = next->next;
        }
        pre->next = next;
        pre = next;
        if(next)
        {
            cur = next->next;
            next = next->next->next;
        }
        else
        {
            cur->next = NULL;
        }
    }
    return copyHead;
}