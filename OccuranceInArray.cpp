#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i:arr){
        m[i]++;
    }
    for(auto i:m){
        cout <<i.second <<  " ";
    }
}