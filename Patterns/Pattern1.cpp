/* Pattern Printing
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << j <<" ";
            j+=1;
        }
        cout << endl;
        i+=1;
    }

} 