#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1, Node *next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1 ){
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr){//converting array to linked list
    if(arr.size()==0) return nullptr;
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1; i< arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover= temp;
    }
    return head;
}

Node *traverse(Node *head){//traversing the linked list
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return head;
}

Node *deleteHead(Node *head){//deleting the head of linked list
    if(head == nullptr) return nullptr;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *deleteTail(Node *head){//deleting the tail of linked list
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node *temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *deleteElement(Node *head, int el){//deleting an element from linked list
    if(head==nullptr) return nullptr;
    if(head->data==el){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while(temp!=nullptr){
        if(temp->data==el){
            prev->next = prev->next->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *deleteAtPosition(Node *head, int pos){//deleting an element at a given position from linked list
    if(head==nullptr) return nullptr;
    if(pos==1){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while(temp!=nullptr){
        count++;
        if(count==pos){
            prev->next = temp->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> arr{1,2,3,4,5};
    cout<<"Before deleting head and tail: ";
    Node *head = convertArr2LL(arr);
    head = traverse(head);
    head = deleteHead(head);
    cout<<"After deleting head: ";
    head = traverse(head);
    head = deleteTail(head);
    cout<<"After deleting tail: ";
    head = traverse(head);
    head = deleteElement(head, 3);
    cout<<"After deleting 3: ";
    head = traverse(head);
    head = deleteAtPosition(head, 2);
    cout<<"After deleting at position 2: ";
    head = traverse(head);

    return 0;

}