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

void insertBnode(Node* node,int val){
    Node* newVal = new Node(val,node,node->back);
    node->back->next = newVal;
    node->back = newVal;
}
int main(){
    vector<int> arr = {12,4,6,7};
    int val = 2;
    Node* head = ConvertArrtoDLL(arr);
    insertBnode(head->next->next,val);
    print(head);
    cout<<endl;
    return 0;
}