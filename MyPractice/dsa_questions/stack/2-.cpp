#include<iostream>
using namespace std;

// TIME: 34

class Stack{    
        public:

        int *arr;
        int top;
        int size;

        Stack(int size){
            arr = new int[size];   // "int *arr;" iss Pointer ko mene memory allocate karadi : arr = new int[size];
            this->size = size;
            top = -1;
        }

        //function

        void push(int data){
            if(size - top -1){
                //space available
                //insert data
                  top++;
                  arr[top] = data;    
            }
            else{
                //space not available
                cout<<"Stack Overflow"<<endl;
            }
        }

        void pop(){
            if(top == -1)   {
                //stack is empty
                cout<<"Stack Underflow, can't delete element."<<endl;
            }
            else{
                //stack is not empty
                top--;
            }
        }

        int getTop() {
            
        }

        int getSize(){

        }

        bool isEmpty(){

        }
}

int main(){
    cout<<"helloworld"<<endl;
    return 0;
}