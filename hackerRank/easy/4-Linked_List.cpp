// Complete the insert function in your editor so that it creates a new Node (pass  as the Node constructor argument) and inserts it at the tail of the linked list referenced by the  parameter. Once the new node is added, return the reference to the  node.

// Note: The  argument is null for an empty list.

#include<iostream>
using namespace std;


//class Node

class Node {
    public: 
        int data;
        Node *next;

        Node(int d){
            data = d;
            next = nullptr; //NULL
        }
};

//Insert Function to add node at end

    Node *insert(Node* head, int data) {

        //new node banana hai
        Node* newNode = new Node(data);
        
        //agr head null hai tu new node ko head banaye
        if(head == nullptr){
            return newNode;
        }

        //agr head null nhi hai tu last node tak traverse karo
        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }

        //last node k next mein naye node ko point kro
        current->next = newNode;

        return head; //head ko return krdo jisse new node ko last mein append krdo
    }

    //function print the LL

    void printLL(Node* head){
        Node* current = head;
        while(current != NULL){
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }

int main(){

    Node* head = NULL;
    int T, data;

    //Pehle T read kro, jo bhi number of ele ho.
    cin>>T;

    //T bar ele ko LL me add kro.
    while(T--){
        cin>>data;
        head = insert(head, data); //insert the data in LL.
    }

    //LL ko print kro.
    printLL(head);

    return 0;
}