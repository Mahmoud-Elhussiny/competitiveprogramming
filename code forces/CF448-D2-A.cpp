#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int s,a1,a2,a3,b1,b2,b3;
    int z,x,sum=0;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    cin>>s;
    z=a1+a2+a3;
    x=b1+b2+b3;


    sum+=z/5;
    if(z%5!=0)
        sum++;

    sum+=x/10;
    if(x%10!=0)
        sum++;

    if(s>=sum){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}