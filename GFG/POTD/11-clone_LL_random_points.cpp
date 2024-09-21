#include<iostream>
using namespace std;

//node structure

struct Node{
    int data;
    Node* next;
    Node* random;

    Node(int x){
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
    public:
        Node* copyList(Node* head){
            if (head == NULL) return NULL;

            // Step 1: Clone nodes ko original ke saath link karo
          Node* current = head;
          while (current != NULL) {
                Node* cloneNode = new Node(current->data);  // Clone banao
                cloneNode->next = current->next;            // Clone ka next original ka next
                current->next = cloneNode;                  // Original ke next mein clone daalo
                current = cloneNode->next;                  // Aage badho
          }

        // Step 2: Random pointers set karo cloned nodes ke liye
        current = head;
        while (current != NULL) {
            if (current->random != NULL) {
                current->next->random = current->random->next; // Clone ka random set karo
            }
            current = current->next->next;  // Original node ke next par jump karo
        }

        // Step 3: Clone list ko original list se separate karo
        current = head;
        Node* clonedHead = head->next;     // Cloned list ka head
        Node* clonedCurrent = clonedHead;

        while (current != NULL) {
            current->next = current->next->next;  // Original node ka next theek karo
            if (clonedCurrent->next != NULL) {
                clonedCurrent->next = clonedCurrent->next->next;  // Clone node ka next theek karo
            }
            current = current->next;              // Original list mein aage badho
            clonedCurrent = clonedCurrent->next;  // Cloned list mein aage badho
        }

        return clonedHead;  // Cloned linked list ka head return karo
    }
};