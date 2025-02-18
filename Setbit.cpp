#include<iostream>
using namespace std;
int Setbit(int x){
    int count=0;
    while(x!=0){
        if(x&1)
          count++;
        x=x>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter the first Number ";
    cin>>a;
    cout<<"Enter the Second Number ";
    cin>>b;
    cout<<"The total no of 1's Set bit in a and b is "<<Setbit(a)+Setbit(b);
}