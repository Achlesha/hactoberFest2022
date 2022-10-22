#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *BuildList()
{
    ListNode *head = NULL, *temp;
    int x;
    cout << "Enter the value (-1 to exit): ";
    cin >> x;
    while (x != -1)
    {
        ListNode *newnode = (ListNode *)malloc(sizeof(ListNode));
        newnode->val = x;
        newnode->next = 0;
        if (head == 0)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Enter the value (-1 to exit): ";
        cin >> x;
    }
    return head;
}
void N_th_Node_from_end(ListNode *head, int pos, int &cnt)
{
    if (head == NULL)
        return;
    N_th_Node_from_end(head->next, pos, cnt);
    cnt += 1;
    if (pos == cnt)
        cout << head->val;
}
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    cout << "Build List : \n";
    ListNode *head = BuildList();
    int pos;
    cout << "Enter N-th pos from end : ";
    cin >> pos;
    int cnt = 0;
    cout << "The N-th node from end is : ";
    N_th_Node_from_end(head, pos, cnt);
}
