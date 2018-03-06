#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    vector<int> arr(x);

    for(int i=0;i<x;i++)
        cin>>arr[i];
    int i=y-1,j=y-1,c=0;
    if(arr[i]==1)
        c++;
    i++;j--;
    for(;i<x||j>=0;i++,j--){

        if(j>=0&& i<x){
        if(arr[i]==1&& arr[j]==1)
            c+=2;

        }
        else{
            if(i>=x && arr[j]==1)
                c++;

            if(j<0 && arr[i]==1)
                c++;
        }
    }
    cout<<c<<endl;

    return 0;
}