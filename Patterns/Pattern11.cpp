/* Pattern Printing
A A A A A A 
B B B B B B
C C C C C C
D D D D D D
E E E E E E
F F F F F F 
*/
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
            cout << x<< " " ;
            j++;
        }
        cout<< endl;
         x++;
        i++;

    }

}