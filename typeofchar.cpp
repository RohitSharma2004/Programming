#include<iostream>
using namespace std;
void typeofchar(char x){
    if(int(x)>96 && int(x)<123){
        cout<<"The input Character is Lower Alphabhet";
    }
    else if(int(x)>64 && int(x)<91){
        cout<<"The input Character is Upper Alphabhet";
    }
    else  if(int(x)>47 && int(x)<58){
        cout<<"The input Character is Numeric type";
    }
}
int main(){
    char n;
    cout<<"Enter the Character  ";
    cin>>n;
    typeofchar(n);
}
