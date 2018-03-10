#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){


	string q;


	while (getline(cin,q)){
		int c = 0,w=0;
		for (int i = 0; i < q.size(); i++){
			if ((q[i] >= 'a' && q[i] <= 'z') || (q[i] >= 'A' && q[i] <= 'Z')){
				c = 1;
			}
			else
			if (c==1){
				c = 0;
				w++;
			}
		}
		if (c == 1)
			w++;

		cout << w << endl;
	}


	//system("pause");
	return 0 ;
}