#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode *assign(ListNode *head, int x)
{
    ListNode *newnode = new ListNode(x);
    ListNode *temp = head;

    if (head == nullptr)
    {

        return newnode;
    }
    while (temp->next != nullptr)
    {

        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    return head;
}

void travsere(ListNode *temp)
{
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int length(ListNode *temp, int length)
{
    while (temp != nullptr)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void reverseList(ListNode *temp)
{
    while (temp->next != nullptr)
    {

        temp = temp->next;
    }
    while (temp != nullptr)
    {

        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int main()
{
    int x;
    ListNode *head = nullptr;
    while (cin >> x)
    {
        head = assign(head, x);
    }

    travsere(head);
    cout << "\n"
         << length(head, 0) << "\n";
    reverseList(head);
    return 0;
}
