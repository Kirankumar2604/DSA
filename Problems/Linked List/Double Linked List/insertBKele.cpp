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
Node* deleteKele(Node* head,int k){
    if(head == NULL || head->next == NULL) return NULL;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        head->back = nullptr;
        free(temp);
        return head;
    }
    Node* temp = head->next;
    int count = 1;
    while(temp != NULL ){
        count++;
        if(count == k){
            if(temp->next != NULL){
                Node* prev = temp->back;
                prev->next = temp->next;
                delete temp;
                break;
            }else{
                Node* prev = temp->back;
                prev->next = nullptr;  
                temp->back = nullptr;
                delete temp;
                return head;
            }
            
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBTail(Node* head, int val){
    if(head->next == NULL){
        return new Node(val,head,nullptr);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    Node* newNode = new Node(val,temp,temp->back);
    temp->back->next = newNode;
    temp->back = newNode;

    return head;
}
Node* insertBKele(Node* head,int val,int k){
    if(k == 1 || head->next == NULL){
        Node* newNode = new Node(val,head,nullptr);
        head->back = newNode;
        return newNode;
    }
    Node* temp = head->next;
    
    int count = 1;
    while(temp->next != NULL){
        count++;
        if(count == k){
            Node* newValue = new Node(val,temp,temp->back);
            temp->back->next = newValue;
            temp->back = newValue;
            return head;
        }
    }
}
int main(){
    vector<int> arr = {12,4,6,7};
    int val = 2;
    Node* head = ConvertArrtoDLL(arr);
    print(insertBKele(head,val,4));
    cout<<endl;
    // cout<<head->next->next->next->next->back->data;
    return 0;
}