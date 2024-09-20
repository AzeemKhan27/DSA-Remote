#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
    // Stack and Queue for the characters
    stack<char> myStack;
    queue<char> myQueue;
    
public:
    // Pushes a character onto a stack
    void pushCharacter(char ch) {
        myStack.push(ch);
    }
    
    // Enqueues a character in the queue
    void enqueueCharacter(char ch) {
        myQueue.push(ch);
    }
    
    // Pops and returns the character at the top of the stack
    char popCharacter() {
        char topChar = myStack.top();
        myStack.pop();
        return topChar;
    }
    
    // Dequeues and returns the first character in the queue
    char dequeueCharacter() {
        char frontChar = myQueue.front();
        myQueue.pop();
        return frontChar;
    }
};

int main() {
    // Read the string s
    string s;
    cin >> s;

    // Create the Solution class object
    Solution obj;

    // Push/enqueue all the characters of string s to stack and queue
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // Pop from stack and dequeue from queue and compare them
    for (int i = 0; i < s.length(); i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }

    // Finally check if the string is palindrome
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome." << endl;
    } else {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }

    return 0;
}
