#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[n];
    }
    int num=0;
    int count=0;
    for(int i=0;i<n;i++){
        num=arr[i];
        count=0;
        for(int j=0;j<n;j++){
            if(num==arr[j]){
                count++;
            }
        }
        cout << arr[i] << " : " << count ;    

    }
   
}