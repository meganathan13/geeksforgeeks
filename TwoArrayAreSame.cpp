#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n];
    int arr2[m];
    map<int,int> m1;
    map<int,int> m2;
    for(int  i=0;i<n;i++){
        cin >> arr1[i];
        m1[arr1[i]]++;
    }
    for(int  i=0;i<m;i++){
        cin >> arr2[i];
        m2[arr2[i]]++;
    }
    for(auto itr=m1.begin(),it=m2.begin();itr!=m1.end(),it!=m2.end();itr++,it++){
          if(itr->first != it->first || itr->second != it->second){
              cout << "not same";
              break;
          }
          cout << "same";
      }
}