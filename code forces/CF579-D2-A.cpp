#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int x,c=0;
	cin >> x;
	while (x != 0){
		if (x % 2 == 1)
			c++;
		x /= 2;
	}

	cout << c << endl;

//	system("pause");
	return 0;
}