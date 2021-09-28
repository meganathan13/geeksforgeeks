#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin >> arr[i][j];
           if(i==j){
               sum+=arr[i][j];
           }
           if(arr[i][j]>max){
               max=arr[i][j];
           }
        }
    }
    cout << "{" << sum << "," << max << "}" ;
}