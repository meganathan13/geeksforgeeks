#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin >> l;
    int h;
    cin >> h;
    vector<int> v;
    for(int i=l;i<=h;i++){
       set<int> q;
       string num =  to_string(i);
       int n=num.size();
       for(int j=0;j<n;j++){
           q.insert(num[j]);
       }
       if(n==q.size()){
           v.push_back(i);      
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}