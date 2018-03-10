#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

#define all(W)  (w.begin(),W.end());  

int main(){


	string q;


	while (getline(cin,q) && q != "DONE"){
		int c = 0, w = 0;

		/*
		for (int i = 0; i < q.size(); i++){
			if ((q[i] >= 'A' && q[i] <= 'Z')){
				q[i] += 32;
			}
		}
		


		for (int i = 0; i < q.size(); i++){
			if ((q[i] >= 'a' && q[i] <= 'z')){
				continue;
			}
			else{
				q.erase(i, 1);
				i--;
			}
		}
		*/
		string f,t;
		for (int i = 0; i < q.size(); i++){
			if (isalpha(q[i])){
				q[i] = tolower(q[i]);
				f += q[i];
			}
		}
		
		t = f ;
		reverse(f.begin(),f.end());


		f = (f == t ? "You won't be eaten!" : "Uh oh..");
		
		cout << f << endl;
	}


	//system("pause");
	return 0 ;
}