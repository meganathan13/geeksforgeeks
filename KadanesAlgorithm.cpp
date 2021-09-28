#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max=0;
    int val=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        max+=arr[i];
        if(val<max){
            val=max;
        }
        if(max<0){
            max=0;
        }
    }
    cout << max;
}