/* Pattern Printing
16 15 14 13
12 11 10 9
8 7 6 5
4 3 2 1*/
# include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter the numerical value ";
    cin>>n;
    cout << endl;
    int i=1;
    int count=n*n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << count <<" ";
            count--;
            j++;
        }
        cout<< endl;
        i++;
    }

}