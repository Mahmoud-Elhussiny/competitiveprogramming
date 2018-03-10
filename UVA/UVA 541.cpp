#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

#define all(W)  (w.begin(),W.end());  

int main(){
	int t;
	cin >> t;
	while (t != 0){
		vector<vector<int>> arr(t,vector<int>(t));

		for (int i = 0; i < t; i++){
			for (int j = 0; j < t; j++){
				cin >> arr[i][j];
			}
		}

		int sum = 0,r,c,sc=0,sr=0;
		for (int i = 0; i < t; i++){
			sum = 0;
			for (int j = 0; j < t; j++){
				sum += arr[i][j];
			}
			if (sum % 2 == 1){
				r = i;
				sr++;
			}
		}
		for (int i = 0; i < t; i++){
			sum = 0;
			for (int j = 0; j < t; j++){
				sum += arr[j][i];
			}
			if (sum % 2 == 1){
				c = i;
				sc++;
			}
		}

		if (sc>1 || sr>1 || (sc == 1 && sr == 0) || (sc == 0 && sr == 1))
			cout << "Corrupt" << endl;

		else
		if (sr == 1 && sc == 1)
			cout << "Change bit (" << r+1 << "," << c+1 << ")" << endl;
		else
			cout << "OK" << endl;
			
		

		cin >> t;
	}
	


	//system("pause");
	return 0 ;
}