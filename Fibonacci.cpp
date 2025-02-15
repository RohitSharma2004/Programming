#include<iostream>
using namespace std;
void fib(int n){
    int a=0,b=1;
    if(n==a){
        cout<<a<<" ";
}
    else if(n==b){
        cout<<a<<" ";
        cout<<b<<" ";
}
    else{
        cout<<a<<" ";
        cout<<b<<" ";
        for(int i=3;i<=n;i++){
        int nextnum=a+b;
        a=b;
        b=nextnum;
        cout<<nextnum<<" ";
    }
}

}
int main(){
    int n;
    cout<<"Enter the Number to Find fibonacci Series ";
    cin>>n;
    fib(n);
}