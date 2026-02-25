#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int val) {
        this->data = val;
        this->next  = NULL;
    }
     Node(){
        data = 0;
        next = NULL;
    
    }
};
    
    int main() {
        int n;
        cin>>n;
        Node *head = new Node();
        Node *curr = head;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;

            if(i == 0) {
                curr->data = x;
            } else {
                Node *newNode = new Node(x);
                curr->next = newNode;
                curr = curr->next;
            }
        }
        curr = head;
        while (curr != NULL) {
            cout << curr->data << " ";
            curr = curr->next;
        }
       return 0;
    }
