#include<iostream>
using namespace std;

void fancy_pattern_1(int num) {

     if(num == 10){
       cout<<"please enter lesser number"<<endl;
       return;
    }
    
    for(int row=1; row<=num; row++){

        // Stars
        for(int col=1; col<=num+4-row; col++){
            cout<<"* ";
        }

        // Numbers
        for(int col=1; col<=row; col++){
            cout<<row<<" ";

            if(col!=row){
                cout<<"* ";
            }
        }

        //Stars
        for(int col=1; col<=num+4-row; col++){
            cout<<"* ";
        }

        cout<<endl;
       
    }
}

int main() {
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;

    fancy_pattern_1(num);

    return 0;
}