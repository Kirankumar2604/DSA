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
int middleofLLnormal(Node* head){
    Node* temp = head;
    Node* temp2 = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    
    int middle = (count / 2)+1;
    
    int key = 0;
    while(temp2 != NULL){
        key++;
        if(key == middle){
            return temp2->data;
        }
        temp2 = temp2->next;
    }
    return temp2->data;
}
Node* middleofLLoptimal(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}
int main(){
    vector<int> arr = {5,6,8,7,9,1};
    Node* head = ConvertArrtoDLL(arr);
    cout<<middleofLLnormal(head);
    cout<<endl;

    return 0;
}