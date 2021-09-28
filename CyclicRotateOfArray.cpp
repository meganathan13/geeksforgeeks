#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int temp=arr[n-1];
        arr[n-1]=arr[i];
        arr[i]=temp;
        cout << arr[i];
    }
    
}