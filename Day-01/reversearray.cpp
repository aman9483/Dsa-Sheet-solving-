#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){

   while(start<end){

      int temp = arr[start];

       arr[start] = arr[end];


      arr[end]= temp;

      start ++;

      end--;
   }


}

void printArray(int arr[], int size){

      for(int i =0; i<size; i++){

        cout<<arr[i]<<endl;
      }
}


int main(){

   int arr[5] = {1,2,3,4,5};

   int n = sizeof(arr)/sizeof(arr[0]);

   reverseArray(arr,0,n-1);

   printArray(arr,n);

  

return 0;
}