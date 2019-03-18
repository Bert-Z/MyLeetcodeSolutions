/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <cstddef>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
  public:
        ListNode *reverseList(ListNode *head)
        {
            if(head==NULL){
                return NULL;
            }
            else if (head->next == NULL)
            {
                return head;
            }
            else
            {
                ListNode *prev = NULL, *now, *nex;
                now = head;
                nex = head->next;

                while (nex != NULL)
                {
                    now->next = prev;
                    prev = now;
                    now = nex;
                    nex = nex->next;
                }

                now->next = prev;
                return now;
            }
        }
};