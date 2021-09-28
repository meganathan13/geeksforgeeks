#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    int j=0;
    for(int i=1;i<=n;i+=2){
        a[i]=b[j];
        j++;
    }
    sort(b,b+n,greater<int>());
    int k=0;
    for(int i=0;i<n;i+=2){
        a[i]=b[k];
        k++;
    }
    for(int i=0;i<n;i++){
        cout << a[i] <<" " ;
    }
}