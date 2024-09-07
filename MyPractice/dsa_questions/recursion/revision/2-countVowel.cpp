#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int countVowel(string str, int index){
    //base case
    if(index == -1) return 0;

    //check condition
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    return 1 + countVowel(str, index - 1);
    
    else
    //baaki recursion check kar lega
    return countVowel(str, index - 1);
}

int main() {    
    string str = "aeiou";
    cout<<"OUTPUT : "<<countVowel(str,4)<<endl;

    return 0;
}