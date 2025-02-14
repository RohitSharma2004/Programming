/* Pattern Printing
*****
 ****
  ***
   **
    *
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=n;
    while (i>=1){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i--;
    }
}