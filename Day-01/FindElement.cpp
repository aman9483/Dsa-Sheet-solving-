#include <iostream>

using namespace std;

int findElement(int arr[],  int n, int key){



   for(int i =0; i<n; i++){

       if(arr[i]==key){

           cout<<"the element is present at index number is : "<<i<<endl;


       }


   }

  return -1;

}

int main()
{
    int n, key;

    cout<<"enter the number"<<endl;

    cin>>n;


    int arr[n];

    cout<<"enter the element"<<endl;

    for(int i =0; i<n; i++){

        cin>>arr[i];
    }

    cout<<"enter the key"<<endl;

    cin>>key;

     cout<<findElement(arr,n,key);


    return 0;
}
