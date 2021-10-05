#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n;
    int arr[n];
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum1=(sum1*10)+arr[i];
    }
    cin >> m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin >> arr1[i];
        sum2=(sum2*10)+arr1[i];
    }
    cout << sum1+sum2;
}