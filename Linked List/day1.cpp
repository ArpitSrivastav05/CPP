#include <bits/stdc++.h>
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
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertarr2ll(vector<int> &arr){//converting array to linked list
    if(arr.size()==0){
        return nullptr;
    }
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1; i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int lengthofll(Node *head){//traversing+counting the length of linked list
    int count = 0;
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";//printing the data of linked list 
        temp = temp->next;
        count++;
    }
    cout<<endl;
    return count;
}

int Searchofelement(Node *head, int key){//searching an element in linked list
    Node *temp = head;
    while(temp){
        if(temp->data == key){
            return 1; // Element found
        }
        temp = temp->next;
    }
    return 0; // Element not found
}

int main(){
    vector<int> arr{1,2,3,4,5};
    Node *head = convertarr2ll(arr);
    cout<<head->data<<endl;
    cout<<"Length of linked list is: "<<lengthofll(head)<<endl;
    cout<<"Searching for element 3: "<<Searchofelement(head, 3)<<endl;
}