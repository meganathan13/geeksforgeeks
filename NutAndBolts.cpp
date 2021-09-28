#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n];
    char b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    for(int i=0;i<n;i++){
        cout << b[i] << " ";
    }
}