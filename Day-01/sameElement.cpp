#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cin>>n;

    int m;

    int k, i;

    cin>>m;

    int a[n];

    int b[m];


    int flag = 0;
    
    cout<<"enter a element of first array: "<<endl;

    for(i = 0; i<n; i++){

         cin>>a[i];


    }

     cout<<"enter a element of second array: "<<endl;

     for( k= 0; k<m; k++){

         cin>>b[k];
    }


    cout<<"=================="<<endl;



for(i= 0; i<n; i++){

    for( k =0; k<m; k++){

         if(a[i]==b[k])

         flag = 1;

         else

           flag = 0;

    }
}

if(flag==1)

    cout<<"yes"<<endl;




else

    cout<<"No"<<endl;

   

return 0;
}