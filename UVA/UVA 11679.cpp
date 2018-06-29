#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;  
int main(){
	int x,y;
	cin >> x>>y;

	while (y!=0 || x!=0){
		vector<int> arr(x);

		for (int i = 0; i < x; i++)
			cin >> arr[i];
		bool t = 0;
		for (int i = 0; i < y; i++){
			int q, w, e;
			cin >> q >> w >> e;
			arr[w - 1] += e;
			arr[q - 1] -= e;

		}

		for (int i = 0; i < x; i++){
			if (arr[i] < 0){
				cout << 'N' << endl;
				t = 1;
				break;
			}
		}

		if (!t){
			cout << 'S' << endl;
		}
		


		cin >> x>>y;
	}

	return 0;
}