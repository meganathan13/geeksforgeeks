#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int var1=1;
    int var2=1;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout << " ";
        }
        for(int k=1;k<=var1;k++){
            cout << abs(k-var2);
        }
        var1+=2;
        var2++;
        cout << "\n";
    }
}