/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     struct ListNode *next;

 * };

 */





struct ListNode* reverseList(struct ListNode* head){

    if(head == NULL || head->next == NULL)    //头结点为空或者只有一个结点

    {

        return head;

    }

    struct ListNode *n1 = NULL;     //定义结构体指针变量n1

    struct ListNode *n2 = head;     //定义结构体指针变量n2

    struct ListNode *n3 = head->next;    //定义结构体指针变量n3

    while(n2)                 //n2不为NULL为执行循环

    {
 
        n2->next = n1;     //指向反转，将n1指向n2改为n2指向n1

        n1 = n2;    //迭代

        n2 = n3;    //迭代

        if(n3)

        {

            n3 = n3->next;   //当n3不为空时，把n3后移

        }

    }

    return n1;

}


