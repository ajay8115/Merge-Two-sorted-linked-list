// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
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

Node *sortedMerge(Node *head1, Node *head2)
{
    Node *h1 = head1;
    Node *h2 = head2;

    Node *dummyNode = new Node(-1);

    Node *h3 = dummyNode;

    while (h1 != NULL and h2 != NULL)
    {
        if (h1->data <= h2->data)
        {
            h3->next = h1;
            h1 = h1->next;
            h3 = h3->next;
        }
        else
        {
            h3->next = h2;
            h2 = h2->next;
            h3 = h3->next;
        }
    }
    while (h1 != NULL)
    {
        h3->next = h1;
        h1 = h1->next;
        h3 = h3->next;
    }

    while (h2 != NULL)
    {
        h3->next = h2;
        h2 = h2->next;
        h3 = h3->next;
    }
    return dummyNode->next;
}