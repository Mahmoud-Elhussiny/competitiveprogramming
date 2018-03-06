#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	long long x;
	cin >> x;

	vector<long long> arr(x);
	vector<long long> arr1;
	int c = 0;
	for (int i = 0; i < x; i++){
		cin >> arr[i];
		if (arr[i] % 2 == 1){
			arr1.push_back(arr[i]);
			c++;
		}
	}

	for (int i = 1; i<x; i++)
		arr[i] += arr[i - 1];

	if (c % 2 == 1){
		sort(arr1.begin(), arr1.end());

		cout << arr[x - 1] - arr1[0] << endl;

	}
	else
		cout << arr[x - 1] << endl;

//	system("pause");
	return 0;
}