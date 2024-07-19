#include <iostream>
using namespace std;

float circle_area(float radius) {

    float area = 3.14 * radius * radius;
    return area;

}  
   

int main() {
    float radius;
    cout << "Enter the number to find area of circle : " ;
    cin >> radius; 

    float area = circle_area(radius);
    cout<<"Area of Circle is : "<<area<<endl;

    return 0;
}


//OUTPUT :-


// Enter the number to find area of circle : 5
// Area of Circle is : 78.5