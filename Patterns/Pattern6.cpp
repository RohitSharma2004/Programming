/* Pattern Printing
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout <<count << " ";
            count++;
            j++;
        }
        cout<< endl;
        i++;

    }

}