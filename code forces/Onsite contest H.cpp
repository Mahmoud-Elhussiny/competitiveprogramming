#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	int x;
	cin >> x;

	vector<int> arr(x);
	vector<int> arr1(x);

	for (int i = 0; i < x; i++){
		cin >> arr[i];
		arr1[i] = 0;
	}

	int y;
	cin >> y;
	
	while (y--){
		int l, r;
		cin >> l >> r;

		arr1[l - 1] += 1;
		if (r<x)
			arr1[r] -= 1;
	}

	for (int i = 1; i < x; i++)
		arr1[i] += arr1[i - 1];
	int c = 0;
	for (int i = 0; i < x; i++){
		if (arr1[i] == 0)
			c++;
	}
	cout << c << endl;

	for (int i = 0; i < x; i++){
		if (arr1[i] == 0)
			cout << arr[i] << " ";
	}
	cout<<endl;



//	system("pause");
	return 0;
}