#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string q;

    getline(cin,q);
    int z=q.size();
    for(int i=0;i<z-1;i++){
        if(q[i]==q[i+1] && q[i]==' '){
            q.erase(i,1);
            z--;
            i--;
        }

        if((q[i+1]=='.' ||q[i+1]==','||q[i+1]=='?'||q[i+1]=='!' )&& q[i]==' '){
            q.erase(i,1);
            z--;
            i--;
        }

        if((q[i+1]=='.' ||q[i+1]==','||q[i+1]=='?'||q[i+1]=='!' )&&(q[i]=='.' ||q[i]==','||q[i]=='?'||q[i]=='!' ) ){
            q.erase(i,1);
            z--;
            i--;
        }

    }
    for(int i=0;i<z;i++){
        cout<<q[i];
        if((q[i]=='.' ||q[i]==','||q[i]=='?'||q[i]=='!' )&& q[i+1]!=' '){
            cout<<' ';
        }
    }




    return 0;
}
