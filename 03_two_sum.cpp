#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    cout<<"enter sum : ";
    cin>>sum;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sum == arr[i] + arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
    } 
    
    return 0;
}