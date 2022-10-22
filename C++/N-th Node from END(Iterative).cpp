#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(struct Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
Node *createList(int n)
{
    Node *dummy = new Node(-1);
    Node *head = dummy;
    while (n-- > 0)
    {
        int val;
        cin >> val;
        head->next = new Node(val);
        head = head->next;
    }
    return dummy->next;
}
int getNthFromLast(Node *head, int n)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != 0)
    {
        cnt++;
        temp = temp->next;
    }
    n = cnt - n + 1;
    temp = head;
    while (temp != 0)
    {
        n -= 1;
        if (n == 0)
            return temp->data;
        temp = temp->next;
    }
    return -1;
}
int main()
{
    int n, x;
    cout << "Enter the size of first Linked List ";
    cin >> n;
    cout << "Enter the List : \n";
    Node *h1 = createList(n);
    cout << "\nThe List is: ";
    printList(h1);
    cout << "\nEnter the nth node number from end you want to access : ";
    cin >> n;
    x = getNthFromLast(h1, n);
    if (x != -1)
        cout << "The " << n << "th value from end is " << x;
    else
        cout << "Not accessible !!";
}
