#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr1[n];
    map<int,int> m1;
    map<int,int> m2;
    for(int  i=0;i<n;i++){
        cin >> arr1[i];
        m1[arr1[i]]++;
    }
    for(auto i=m1.begin();i!=m1.end();i++){
        if(i->second%2!=0){
            cout << i->first;
        }
    }
    
}