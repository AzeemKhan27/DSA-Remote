#include<iostream>
#include<climits>
#include<vector>

using namespace std;

// (1) return 0,1 
// int isLetterKeyExist(string str,int i,int n, char key){

//   // base case:
//    if(i >= n){
//     return false;
//    }

//   // 1case check krna hai
//   if(str[i] == key)
//   {
//     return true;
//   }

//   // baaki recursion sambhal lega
//    return isLetterKeyExist(str,i+1,n,key);
 
// }



// int main(){

//    string str = "azeemkhan";
//    int n = str.length();
//    char key = 'a';
//    int i=0;

//    bool ans = isLetterKeyExist(str,i,n,key);
//    cout<<"letter exist : "<<ans<<endl;

//    return 0;
// }


// (2) Return matched letter index

// int isLetterKeyExist(string str,int i,int n, char key){

//   // base case:
//    if(i >= n){
//     return -1;
//    }

//   // 1case check krna hai
//   if(str[i] == key)
//   {
//     return i;
//   }

//   // baaki recursion sambhal lega
//    return isLetterKeyExist(str,i+1,n,key);
 
// }



// int main(){

//    string str = "azeemkhan";
//    int n = str.length();
//    char key = 'k';
//    int i=0;

//    int ans = isLetterKeyExist(str,i,n,key);
//    cout<<"letter exist : "<<ans<<endl;

//    return 0;
// }

// (3) if letters repeat return store all in vector

void isLetterKeyExist(string& str,int i,int& n, char& key, vector<int>&ans){

  // base case:
   if(i >= n){
    return;
   }

  // 1case check krna hai
  if(str[i] == key)
  {
    ans.push_back(i);
    // cout<<"Found at : "<<i <<endl;

  }

  // baaki recursion sambhal lega
   return isLetterKeyExist(str,i+1,n,key,ans);
 
}



int main(){

   string str = "azeemkhan";
   int n = str.length();
   char key = 'a';
   int i=0;

   //store in vector
   vector<int> ans;

   isLetterKeyExist(str,i,n,key,ans);
  //  cout<<"letter exist : "<<ans<<endl;

  cout<<"printing ans : "<<endl;

  for(auto val : ans){
    cout<<val<<" ";
  }
  
  cout<<endl;

   return 0;
}