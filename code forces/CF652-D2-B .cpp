#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;  
int main(){
	int x;
	cin >> x;
	vector<int> arr(x);
	for (int i = 0; i < x; i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 1; i < x-1; i+=2){
		swap(arr[i], arr[i + 1]);
	}


	for (int i = 0; i < x; i++)
		cout << arr[i] << " ";
	cout << endl;


	//system("pause");
	return 0;
}