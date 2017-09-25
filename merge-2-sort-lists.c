#include<stdio.h>
#include<stdlib.h>
// Definition for singly-linked list.
 struct ListNode {
      int val;
      struct ListNode *next;
  };
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode dummy;
    struct ListNode *retlist = &dummy;
    dummy.next = NULL;
    struct ListNode* i1=l1;
     struct ListNode* i2=l2;
    while(i1!=NULL||i2!=NULL)
    {
        if(i1==NULL)
        {
            retlist->next = i2;
            retlist = retlist->next;
            i2 = i2->next;
            continue;
        }
        else if(i2==NULL)
        {
            retlist->next = i1;
            retlist = retlist->next;
            i1 = i1->next;
            continue;
        }
        if(i1->val<=i2->val)
        {
            retlist->next = i1;
            retlist = retlist->next;
            i1 = i1->next;
        }
        else
        {
            retlist->next = i2;
            retlist = retlist->next;
            i2 = i2->next;
        }
    }
    retlist->next = NULL;
    return dummy.next;
}

int main()
{
	struct ListNode* l1 = (struct ListNode*) malloc(sizeof(struct ListNode));
	struct ListNode* l2 = (struct ListNode*) malloc(sizeof(struct ListNode));
	l1->val = 2;
	l2->val = 1;
	l1->next = NULL;
	l2->next = NULL;
	struct ListNode* mer = mergeTwoLists(l1,l2);
	while(mer!=NULL)
	{
		printf("%d->",mer->val);
		mer = mer->next;
	}
	return 0;
	
}
