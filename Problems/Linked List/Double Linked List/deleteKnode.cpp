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
Node* deleteKnode(Node* head,int k){
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
int main(){
    vector<int> arr = {12, 5, 8, 7};
    int k = 2;
    Node* head = ConvertArrtoDLL(arr);
    print(deleteKnode(head,k));
    cout<<endl;
    return 0;
}