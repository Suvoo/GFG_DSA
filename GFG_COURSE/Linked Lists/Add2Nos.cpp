/* https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1/?track=ppc-linkedlist&batchId=221# */
/* REFERENCE : https://youtu.be/HzWKOp0C_aU */

// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
Node* reverseList(Node* head)
{
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    first = reverseList(first);
    second = reverseList(second);
    
    int carry = 0, sum = 0; int a,b;

    Node* start = NULL;
    Node* end = NULL;
    
    while(first != NULL || second != NULL){
        
        if(first!=NULL)
            a = first->data;
        else
            a=0;
            
        if(second!=NULL)
            b = second->data;
        else
            b=0;
        
        sum = carry + (a + b);
        if(sum >=10)
            carry = 1;
        else
            carry = 0;
        sum = sum % 10;
        
        if(start == NULL){
            start = new Node(sum);
            end = start;
        }
        else{
            end -> next = new Node(sum);
            end = end -> next;
        }
        
        if(first != NULL)
            first = first -> next;

        if(second != NULL)
            second = second -> next;
    }
    
    if(carry > 0)
        end -> next = new Node(carry);

    start = reverseList(start);

return start;

}
