#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head;
    struct ListNode* tail;
    /*ending condition*/
    if(l1 == NULL)return l2;
    else if(l2 == NULL) return l1;
    /*comparison between the first number of the two structs*/
    if(l1->val <= l2->val){
        head = l1;
        tail = mergeTwoLists(l1->next, l2);
    } 
    else{
        head = l2;
        tail = mergeTwoLists(l1, l2->next);
    }
    /*merge*/
    head->next = tail;
    return head;   
}

