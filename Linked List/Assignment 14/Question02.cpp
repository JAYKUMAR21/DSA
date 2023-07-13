#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x): data(x), next(NULL){}
};

Node *reverse(Node *head) {

    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL) {
        next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}

Node *addOne(Node *head) {
    head = reverse(head);

    int carry = 1;

    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL) {
        int sum = curr->data + carry;

        curr->data = sum % 10;

        carry = sum / 10;

        prev = curr;
        curr = curr->next;
    }

    if (carry > 0) {
        prev->next = new Node(carry);
    }

    return reverse(head);
}
