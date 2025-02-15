#include<iostream>
using namespace std;
int main(){
    int amount,note;
    cout<<"Enter the Amount ";
    cin>>amount;
    cout<<"Enter the Note ";
    cin>>note;
    switch(note){
        case 100: 
        cout<<"No of notes "<<amount/100;
        break;
        case 50:
        cout<<"No of notes "<<(amount%100)/50;
        break;
        case 20:
        cout<<"No of notes "<<((amount%100)%50)/20;
        break;
        case 1:
        cout<<"No of notes "<<(((amount%100)%50)%20)/1;
        break;

    }
}