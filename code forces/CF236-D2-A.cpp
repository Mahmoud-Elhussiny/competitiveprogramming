#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
#include<bitset>
#include<iomanip>
using namespace std;

int main(){
	string x;
	set<char> arr;
	cin >> x;

	for (int i = 0; i < x.size(); i++){
		arr.insert(x[i]);
	}

	if (arr.size() % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;


	//	system("pause");
	return 0;
}