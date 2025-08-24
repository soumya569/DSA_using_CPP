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
bool findTarget(int arr[],int size,int target){
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    // int arr[]={1,2,3,4,5};
    // int size=5;
    int arr[100];
    int size ;
    cout<<"Enter the number of element:"<<endl;
    cin>>size;
    for (int i=0;i<size;i++){
        cout<<"enter the value of index:"<<" "<<endl;
        cin>>arr[i];
    }
    // solve1(arr,size);
    // print(arr,size);
    int target = 67;
    bool ans = findTarget( arr,size,target);
    cout << "ans"<<ans<<endl;

    
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