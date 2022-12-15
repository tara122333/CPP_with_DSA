#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void three_sum(int arr[], int n, int sum){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k = n-1;
        while(j<k && i<k){
            if(arr[i]+arr[j] + arr[k] == sum){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                return;
            }
            
            if(arr[i]+arr[j]<sum){
                j++;
            }
            if(arr[i]+arr[j]>sum){
                k--;
            }
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
    cout<<"enter the sum : ";
    cin>>sum;

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }

    return 0;
}