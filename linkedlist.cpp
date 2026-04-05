#include <iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Node* temp = head;

    //iterate through linked list
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp -> next;
    }

    //add two numbers represented by linked list
    Node* head2 = new Node(9);
    head2->next = new Node(5);
    head2->next->next = new Node(4);




};