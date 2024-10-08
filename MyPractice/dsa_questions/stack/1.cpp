#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<endl;

    return 0;
}


//NOTE: jab bhi hum stack me push krke pop krenge tb hmesha answer reverse order me aayega.