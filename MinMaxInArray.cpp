#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> v(arr,arr+n) ;
    cout << *min_element(v.begin(),v.end()) << " ";
    cout << *max_element(v.begin(),v.end()) ;
}