#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  minimum(int arr[], int n){

    int mini = INT_MAX;

    for(int i = 0; i<n; i++){

        mini = min(mini, arr[i]);
    }

    return mini;
}
int main(){


    int arr[5] ={1,2,0,4,5};

    cout<<"the maximum number in array is :"<<minimum(arr,5)<<endl;



return 0;
}