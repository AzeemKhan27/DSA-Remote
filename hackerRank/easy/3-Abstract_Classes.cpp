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


//Javascript Code :

// // Base class renamed to BaseBook to avoid identifier conflict
// class BaseBook {
//     constructor(title, author) {
//         if (this.constructor === BaseBook) {
//             throw new Error("Cannot instantiate abstract class BaseBook");
//         }
//         this.title = title;
//         this.author = author;
//     }
    
//     // Abstract method to be overridden by subclass
//     display() {
//         throw new Error("Abstract method 'display' must be implemented");
//     }
// }

// // MyBook class that extends BaseBook
// class MyBook extends BaseBook {
//     constructor(title, author, price) {
//         super(title, author); // Call the constructor of the parent class
//         this.price = price;
//     }

//     // Implementing the abstract display method
//     display() {
//         console.log(`Title: ${this.title}`);
//         console.log(`Author: ${this.author}`);
//         console.log(`Price: ${this.price}`);
//     }
// }

// // Function that simulates the main method
// function main() {
//     let title = readLine();  // Reading the title
//     let author = readLine(); // Reading the author
//     let price = +readLine(); // Reading the price (converting to number)

//     // Creating an instance of MyBook and displaying the output
//     let book = new MyBook(title, author, price);
//     book.display();
// }
