#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i==k){
            cout << arr[i];
        }
    }
    
}