#include <bits/stdc++.h>
using namespace std;

// Node class represents a node in the linked list
class Node {
public:
    int data;     // Data value
    Node* next;   // Pointer to next node

    // Constructor with data and next
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data
    Node(int data1) {
        data = data1;
        next = nullptr; 
    }
};
Node* ConvertArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* initalHead = head;
    head = head->next;
    free(initalHead);
    return head;
}
void print(Node* temp){
        while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    // Create an array
    vector<int> arr = {12, 5, 8, 7};

    Node* head = ConvertArrtoLL(arr);
    Node* newHead = deleteHead(head);
    Node* temp = newHead;
    print(temp);
    return 0;
}
