#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;
int main(){
	int x;
	cin >> x;

	string z;

	cin >> z;

	for (int i = 0; i < x; i++){
		if (z[i] >= 'A' && z[i]<='Z')
			z[i] += 32;
	}
	
	char arr[26];
	char q = 'a';
	for (int i = 0; i < 26; i++){
		arr[i] = q++;
	}





	int c ;
	for (int i = 0; i < 26; i++){
		c = 0;
		for (int j = 0; j < x; j++){
			if (arr[i] == z[j]){
				c = 1;
				break;
			}
		}
		if (c == 0){
			cout << "NO" << endl;
			break;
		}
	}
	if (c==1)
		cout << "YES" << endl;

	

//	system("pause");
	return 0;

}