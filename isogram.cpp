#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    map<int ,char> m;
    for(int i=0;i<a.length();i++){
        m[a[i]]++;
    }
    for(auto i:m){
        if(i.second!=1){
            cout << "not isogram";
        }
        else{
            cout << "isogram";
        }
    }
}