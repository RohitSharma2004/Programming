#include<iostream>
using namespace std;
int sumeven(int n){
    int sum=n*(n+2)/4;
    return sum;
}
int main(){
    int n;
    cout<<"Enter the even number upto find sum ";
    cin>>n;
    int result=sumeven(n);
    cout<<"Sum is "<< result;
}