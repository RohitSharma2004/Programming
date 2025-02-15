#include<iostream>
using namespace std;
int term(int n,int a,int d){
    int t=a+(n-1)*d;
    return t;

}
int main(){
    int n,a,d;
    cout<<"Enter the First term ";
    cin>>a;
    cout<<"Enter the common diffrence ";
    cin>>d;
    cout<<"Enter the N ";
    cin>>n;
    cout<<"The Nth term is "<<term(n,a,d);

}