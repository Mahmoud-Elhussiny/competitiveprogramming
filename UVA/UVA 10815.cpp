#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
using namespace std;

#define all(W)  (w.begin(),W.end());  

int main(){
	
	string  q,d;
	set<string> arr;
	while (cin >> q){
		d.clear();
		for (int i = 0; i < q.size(); i++){
			if (isalpha(q[i])){
				q[i] = tolower(q[i]);
				d +=q[i];
			}
			else{
				if (!d.empty()){
					arr.insert(d);
					d.clear();
				}
			}
		}
		if (!d.empty()){
			arr.insert(d);
		}	
	}
	set<string>::iterator T;

	for (T = arr.begin(); T != arr.end(); T++){
		cout << *T << endl;
	}


	//system("pause");
	return 0 ;
}