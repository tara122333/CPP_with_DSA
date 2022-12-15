// Given an array A[] find if there is subarray with 0 sum
// A[] = [3,-2,1,-4,2,7,6]
// output  true

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int equilibriumIndex(vector<int>&Arr,int n){
    int left_sum = 0;
    int flag = 0;
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum += Arr[i];
    }
    // cout<<total_sum<<endl;
    for(int i=0;i<n;i++){
        total_sum -= Arr[i];
        if(left_sum == total_sum){
            flag = 1;
            return i;
        }
        else{
            left_sum+=Arr[i];
        }
    }
    if(flag==1){
        return -1;
    }
    return -1;
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int var = equilibriumIndex(arr,n);

    cout<<var<<endl;

    return 0;
}