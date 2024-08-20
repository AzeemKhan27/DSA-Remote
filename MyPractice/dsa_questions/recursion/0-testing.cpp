#include<iostream>

using namespace std;

// Function to multiply 'a' by 'b' using recursion
// int func(int a, int b) {
//     if(b == 0) return 0;  // Base case: any number multiplied by 0 is 0
//     if(b == 1) return a;  // Base case: any number multiplied by 1 is itself
//     return a + func(a, b - 1);  // Recursive case: add 'a' 'b' times
// }

// int main() {
//     int a = 3;
//     int b = 8;

//     int result = func(a, b);  // Call the function and store the result
//     cout << "Result: " << result << endl;  // Output the result

//     return 0;
// }

// int cnt = 0;  // Global variable cnt initialized to 0

// void func(int n) {
//     if(n == 0) return;
//     cnt++;  // Increment cnt
//     func(n / 10);  // Recursive call with n divided by 10
// }

// int main() {
//     func(999999999);  // Call func with the number 999999999
//     return 0;  // The program ends here without printing anything
// }




// void print(int n) {
//     if(n < 0) return;  // Base case: if n is negative, return and stop recursion.
//     print(n--);  // Recursive call with n, then decrement n after the call.
//     cout << n << "";  // Print the value of n.
// }

// int main() {
//     print(3);  // Call print with 3.
//     return 0;
// }


// int main(){
// cout<<"Hellow"<<endl;
// main();
// return 0;
// }

int func(int x){
 if(x==2) return 2;
 cout<<'+';
 f(x-1);
}

int main(){
int n=f(6);
cout<<n<<endl;
return 0;
}