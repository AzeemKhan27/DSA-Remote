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

// Explanation:

//     Step 1: Sab nodes ka clone banake original ke saath attach kiya.
//     Step 2: Random pointers ko set kiya cloned nodes ke liye.
//     Step 3: Cloned list ko original list se alag kiya.

// Time Complexity: O(n)
// Space Complexity: O(1)

// :::::::::: JavaScript Code :::::::::::

class Solution {
    // Function to clone a linked list with next and random pointer.
    copyList(head) {
        if (head == null) return null;

        // Step 1: Clone nodes ko original ke saath link karo
        let current = head;
        while (current !== null) {
            let cloneNode = new Node(current.data);
            cloneNode.next = current.next;
            current.next = cloneNode;
            current = cloneNode.next;
        }

        // Step 2: Set random pointers for cloned nodes
        current = head;
        while (current !== null) {
            if (current.random !== null) {
                // Cloned node ka random set karo
                current.next.random = current.random.next;
            }
            current = current.next.next; // Original node ke next par jump karo
        }

        // Step 3: Separate cloned list from original
        current = head;
        let clonedHead = head.next;
        let clonedCurrent = clonedHead;

        while (current !== null) {
            current.next = current.next.next; // Original node ko theek karo
            if (clonedCurrent.next !== null) {
                clonedCurrent.next = clonedCurrent.next.next; // Cloned node ko theek karo
            }
            current = current.next;
            clonedCurrent = clonedCurrent.next;
        }

        return clonedHead; // Cloned linked list ka head return karo
    }
}
