#include <iostream>
#include <stack>
#include <unordered_map>

// Bringing the required standard components into the global namespace
using namespace std;

namespace BracketValidator {

    bool isValid(const string& s) {
        // Mapping of closing brackets to their corresponding opening brackets
        unordered_map<char, char> bracket_map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        // Stack to keep track of opening brackets
        stack<char> stack;
        
        // Iterate through each character in the string
        for (char ch : s) {
            // If the character is a closing bracket
            if (bracket_map.count(ch)) {
                // Get the top element of the stack if it exists, else assign a dummy value
                char top_element = stack.empty() ? '#' : stack.top();
                stack.pop();
                
                // Check if the top element matches the corresponding opening bracket
                if (top_element != bracket_map[ch]) {
                    return false;
                }
            } else {
                // If it's an opening bracket, push it onto the stack
                stack.push(ch);
            }
        }
        
        // If the stack is empty, all brackets were matched correctly
        return stack.empty();
    }
    
}  // End of namespace BracketValidator

// Using the entire BracketValidator namespace in the global scope
using namespace BracketValidator;

int main() {
    // Test cases
    cout << boolalpha;  // To print "true" or "false" instead of "1" or "0"
    cout << isValid("()") << endl;       // Output: true
    cout << isValid("()[]{}") << endl;   // Output: true
    cout << isValid("(]") << endl;       // Output: false
    cout << isValid("([])") << endl;     // Output: true
    cout << isValid("([)]") << endl;     // Output: false
    
    return 0;
}
