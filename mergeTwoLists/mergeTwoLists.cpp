/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <algorithm>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
  public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
        {
            return l2;
        }
        else if (l2 == NULL)
        {
            return l1;
        }
        else
        {
            ListNode *ln2, *ln1;
            ln1 = l1->next;
            ln2 = l2->next;

            if (l2->val < l1->val)
            {
                l2->next = l1;
                return mergeTwoLists(l2, ln2);
            }
            else
            {
                ListNode *now = l1;
                if (now->next == NULL)
                {
                    now->next = l2;
                    return l1;
                }
                while (now->val <= l2->val && now->next->val <= l2->val)
                {
                    now = now->next;
                    if (now->next == NULL)
                        break;
                }

                if (now->next == NULL)
                {
                    now->next = l2;
                    return l1;
                }
                else
                {
                    ListNode *tnext;
                    tnext = now->next;
                    now->next = l2;
                    l2->next = tnext;
                    return mergeTwoLists(l1, ln2);
                }
            }
        }
    }
};

