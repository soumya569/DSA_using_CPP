#include<iostream>

using namespace std;

void print(int arr[], int size){
    for(int index =0;index<size;index++){
        cout<< arr[index]<<" ";
    }
}
void solve1(int arr[],int n){
    for (int i=0;i<n;i++ )
    arr[i]=arr[i]*10;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    solve1(arr,size);
    print(arr,size);
    
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

    // int arr[10];
    // for (int index=0;index<5;index++){
    //     cout<<"Enter the value for box index: "<<index<<endl;
    //     cin>>arr[index];
    // }
    // for (int index=0;index<5;index++){
    //     cout<<arr[index]<<" ";
    // }
    // return 0;
    // for (int index=0;index<5;index++){
    //     cout<<"Enter the value for box index: "<<index<<endl;
    //     cin>>arr[index];
    // }
    // for (int index=0;index<5;index++){
    //     cout<<index[arr]<<" ";
    // }
    return 0;
}