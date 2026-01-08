#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:   
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    
};
Node* ConvertArrtoDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i < arr.size();i++){
        Node* temp = new Node(arr[i],NULL,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
void deleteKnode(Node*& head, Node* k) {
    if (k == NULL) return;

    // only one node
    if (k->back == NULL && k->next == NULL) {
        delete k;
        head = NULL;
        return;
    }

    // deleting head
    if (k->back == NULL) {
        head = k->next;
        head->back = NULL;
        delete k;
        return;
    }

    // deleting tail
    if (k->next == NULL) {
        k->back->next = NULL;
        delete k;
        return;
    }

    // deleting middle node
    k->back->next = k->next;
    k->next->back = k->back;
    delete k;
}

int main(){
    vector<int> arr = {12, 5, 8, 7};
    
    Node* head = ConvertArrtoDLL(arr);
    
    deleteKnode(head,head);
    print(head);
    cout<<endl;
    return 0;
}