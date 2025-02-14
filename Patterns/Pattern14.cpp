/* Pattern Printing
A 
B B
C C C
D D D D
E E E E E*/
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
            cout << x<< " " ;
            j++;
        }
        cout<< endl;
         x++;
        i++;

    }

}