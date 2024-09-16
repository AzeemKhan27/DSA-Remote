#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Book{
    public: 
        virtual void display()=0;
};

class MyBook : public Book{
    private:
        string title;
        string author;
        int price;
    
    public:
        //parameterized constructor
        MyBook(string t, string a, int p) : title(t), author(a), price(p) {}
        
    //imple the pure virtual function
    void display(){
        cout<<"Title: "<<title <<endl;
        cout<<"Author: "<<author <<endl;
        cout<<"Price: $"<<price <<endl;
    }
};

int main() {
    int price;
    string title,author;
    
    // //Assume input
    // title = "The Alchemist";
    // author = "Paulo Coelho";
    // price = 248;

    //Dynamic entries

    getline(cin,title);
    getline(cin,author);

    cin>>price;

    
    MyBook myBook(title, author, price);
    myBook.display(); 
    return 0;
}
