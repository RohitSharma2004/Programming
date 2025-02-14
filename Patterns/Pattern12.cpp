/* Pattern Printing
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    while(i<=n){
        int j=1;
        char x='A';
        while(j<=n){
            cout << x<< " " ;
            x++;
            j++;
        }
        cout<< endl;
         
        i++;

    }

}