#include<iostream>
using namespace std;

int main() {
    char grade;
    cout<<"Enter your grade"<<endl;
    cin>>grade;

   /* if(grade == 'A'){
        cout<<"your marks will be range in 90 to 100";
    }

    else if(grade == 'B'){
        cout<<"your marks will be range in 80 to 90";
    }

    else if(grade == 'C'){
        cout<<"your marks will be range in 70 to 80";
    }

    else if(grade == 'D'){
        cout<<"your marks will be range in 60 to 70";
    }

    else {
        cout<<"your marks will be range in 0 to 60";
    }*/
    
    switch(grade){
        case 'A': cout<<"your marks will be in the range of 90 to 100"<<endl;
        break;
        case 'B': cout<<"your marks will be in the range of 80 to 90"<<endl;
        break;
        case 'C': cout<<"your marks will be in the range of 70 to 80"<<endl;
        break;
        case 'D': cout<<"your marks will be in the range of 60 to 70"<<endl;
        break;
        default: cout<<"your marks will be in the range of 0 to 60"<<endl;

    }





















     return 0;

}

