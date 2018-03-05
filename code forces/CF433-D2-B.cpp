#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{

    int x;
    cin>>x;
    vector<long long> arr(x);
    vector<long long> arr1(x);

    for(int i=0;i<x;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }






    sort(arr1.begin(),arr1.end());

    for(int i=1;i<x;i++){
        arr[i]+=arr[i-1];
        arr1[i]+=arr1[i-1];
    }



    int z;
    cin>>z;

    while(z--){
        int a,s,d;
        cin>>a>>s>>d;

        if(a==1){
            if(s==1)
            cout<<arr[d-1]<<endl;
            else
            cout<<arr[d-1]-arr[s-2]<<endl;
        }
        else{
            if(s==1)
            cout<<arr1[d-1]<<endl;
            else
            cout<<arr1[d-1]-arr1[s-2]<<endl;


        }

    }


    return 0;
}