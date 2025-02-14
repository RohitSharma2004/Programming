/* Pattern Printing
D 
C D
B C D
A B C D*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    char x='A';
    while(i<=n){
        char ch=x+n-i;
        int j=1;
        while(j<=i){
            cout << char(ch+j-1)<< " " ;
            j++;
        }
        cout<< endl;
        i++;

    }

}