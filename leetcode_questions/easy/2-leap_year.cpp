#include<iostream>
using namespace std;

int isLeapYear(int yearValue){
  if(yearValue % 400 == 0){
    cout<<"yes , it is leap year :)";
  }else if(yearValue % 4 == 0 && yearValue % 100 != 0){
    cout<<"yes , it is leap year :)";
  }else{
    cout<<"no, it is not leap year, thank you for asking!";
  }
}

int main(){
  int year;
  cout<<"enter year to check is it leap year or not :"<<endl;
  cin>>year;
  int yearNum = isLeapYear(year);
  cout<<yearNum;
  return 0;
}