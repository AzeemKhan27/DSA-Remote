#include<iostream>
using namespace std;

bool find(int arr[],int size, int key){
    bool flag = 0;
    //linear search
    for(int i=0; i<=size; i++){
        if(arr[i] == key){
            flag = 1;
        }
    }
    return flag;
}

int main(){
   int arr[]={1,2,3,6,7};
   int size=5;
   int key;
    cout<<"Enter the number to find in array : "<<endl;
    cin>>key;

    if(find(arr,size,key)){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }
}