#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
	string q,s;
	while (getline(cin, q)){
		char x;
		int r = 0;
		vector<string> arr;
		for (int i = 0; i < q.size(); i++){
			if (q[i] == ' '){
				for (int j = 0;j< s.size()/2; j++){
					swap(s[j], s[s.size() - 1 - j]);
				}
				arr.push_back(s);
				s.clear();
			}
			else{
				s += q[i];
			}
		}
		for (int i = 0;i< s.size() / 2; i++){
			swap(s[i], s[s.size() - 1 - i]);
		}
		arr.push_back(s);
		s.clear();
		for (int i = 0; i < arr.size(); i++){
			cout << arr[i];
			if (i < arr.size() - 1){
				cout << " ";
			}
			else
				cout << endl;
		}


		
	}

	return 0;
}