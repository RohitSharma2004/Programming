/* Pattern Printing
A B C D E 
B C D E F
C D E F G
D E F G H
E F G H I*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    char x='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << char(x+j-1)<< " " ;
            j++;
        }
        cout<< endl;
         x++;
        i++;

    }

}