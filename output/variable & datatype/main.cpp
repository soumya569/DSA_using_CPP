#include<iostream>

using namespace std;
int main(){

    //variable define
    //int age = 20;
    //cout << "my age is: " << age <<endl;

    //Declaration
    //int age;
    //cout << age;

    //Defination

    // int age = 65 ;
    // cout << age <<endl;

    // //Manupulation or updation
    // age = 56;
    // cout << age << endl ;

    // return 0;

    int arr[10];
    for (int index=0;index<5;index++){
        cout<<"Enter the value for box index: "<<index<<endl;
        cin>>arr[index];
    }
    for (int index=0;index<5;index++){
        cout<<arr[index]<<" ";
    }
    return 0;
}