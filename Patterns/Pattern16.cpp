/* Pattern Printing
A 
B C
C D E
D E F G*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    char x='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << char(x+j-1)<< " " ;
            j++;
        }
        cout<< endl;
         x++;
        i++;

    }

}