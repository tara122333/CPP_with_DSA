#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_sum_of_sub_array(vector<int> &Arr, int n){
    int sum = 0;
    int max_sum = *max_element(Arr.begin(),Arr.end());
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=Arr[j];
            if(max_sum<sum){
                max_sum = sum;
            }
        }
        sum = 0;   
    }
    return max_sum;
}

int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int var = max_sum_of_sub_array(arr,n);

    cout<<var<<endl;
    return 0;
}