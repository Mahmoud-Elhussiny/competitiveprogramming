#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{

    long long x,c=0,e,y;

    cin>>x>>y;

   
        for(int i=1;i<=x;i++){
            if(y%i==0 && y/i<=x)
                c++;
        }

        cout<<c<<endl;

    

    return 0;
}