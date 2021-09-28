#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i+=2){
        temp=0;
        if(n%2!=0 && i==n-1){
            cout << arr[i];
        }
        else{
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            cout << arr[i] << " " << arr[i+1] << " ";
        }
    }
}