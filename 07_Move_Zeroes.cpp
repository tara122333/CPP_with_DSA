#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
   {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        else{
            arr[k] = arr[i];
            k++;
        }
    }
    for(int i=0;i<count;i++){
        arr[k] = 0;
        k++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}