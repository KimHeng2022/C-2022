#include<iostream>
using namespace std;
int arr[5] = {5,10,15,20,25};
int *parr = arr;
int main(){
    cout<<"1-"<<parr<<endl;
    cout<<"2-"<<parr+1<<endl;
    cout<<"3-"<<*parr<<endl;
    cout<<"4-"<<*parr+1<<endl;
    cout<<"5-"<<*(parr+1)<<endl;

    cout<<"6-"<<parr<<endl;
    cout<<"7-"<<parr<<endl;
    cout<<"8-"<<parr<<endl;
    cout<<"9-"<<parr<<endl;

}