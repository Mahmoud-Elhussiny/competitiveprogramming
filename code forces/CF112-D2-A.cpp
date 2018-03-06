#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string x, y;
	cin >> x >> y;

	for (int i = 0; i < x.size(); i++){
		if (x[i] >= 'A' && x[i] <= 'Z')
			x[i] += 32;
		if (y[i] >= 'A' && y[i] <= 'Z')
			y[i] += 32;
	}
	long long  c = 0, k = 0;
	for (int i = 0; i < x.size(); i++){
		if (x[i]>y[i]){
			c = 1;
			cout << 1 << endl;
			break;
		}
		if (x[i]<y[i]){
			c = 1;
			cout << -1 << endl;
			break;
		}
	}
	if (c == 0)
		cout << 0 << endl;
	

	//	system("pause");
	return 0;
}