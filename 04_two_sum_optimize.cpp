#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void two_sum(int arr[], int n, int sum){
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j] == sum){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            return;
        }
        if(arr[i]+arr[j]<sum){
            i++;
        }
        if(arr[i]+arr[j]>sum){
            j--;
        }
    }
}
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
    two_sum(arr,n,sum);
    return 0;
}