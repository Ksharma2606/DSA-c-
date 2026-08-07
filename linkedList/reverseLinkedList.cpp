#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

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

void reverseList(ListNode *head, vector<int> &arr)
{
    ListNode *temp = head;

    while (temp != nullptr)
    {
        arr.push_back(temp->val);
        temp = temp->next;
    }
    int count = arr.size() - 1;

    temp = head;
    while (temp != nullptr)
    {
        temp->val = arr[count];
        temp = temp->next;
        count--;
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
    int len = length(head, 0);
    vector<int> arr;
    cout
        << "\n"
        << len << "\n";
    reverseList(head, arr);
    cout << "\n";
    travsere(head);
    return 0;
}
