#include <iostream>
using namespace std;

// Define the Node structure for the linked list
struct Node
{
    int data;
    Node *next;
};

// Function to reverse the linked list
Node *reverseList(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while (current != nullptr)
    {
        next = current->next; // Store next node
        current->next = prev; // Reverse the link
        prev = current;       // Move prev forward
        current = next;       // Move current forward
    }
    return prev; // New head
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr)
        {
            cout << " "; // Space between elements
        }
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create the linked list with values [11, 9, 7, 5, 3, 1]
    Node *head = new Node;
    head->data = 11;
    head->next = nullptr;

    Node *second = new Node;
    second->data = 9;
    second->next = nullptr;
    head->next = second;

    Node *third = new Node;
    third->data = 7;
    third->next = nullptr;
    second->next = third;

    Node *fourth = new Node;
    fourth->data = 5;
    fourth->next = nullptr;
    third->next = fourth;

    Node *fifth = new Node;
    fifth->data = 3;
    fifth->next = nullptr;
    fourth->next = fifth;

    Node *sixth = new Node;
    sixth->data = 1;
    sixth->next = nullptr;
    fifth->next = sixth;

    // Reverse the linked list
    head = reverseList(head);

    // Print the reversed linked list
    printList(head);

    // Free memory
    Node *temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}