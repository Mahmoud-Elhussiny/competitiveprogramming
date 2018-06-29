#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;  
int main(){
	int x;
	cin >> x;

	while (x != 0){
		string q;
		cin >> q;
		//cout << q.find('Z') << endl;

		if (q.find('Z')!=-1){
			cout << 0 << endl;
		}
		else{
			int r = -1, d = -1,mn=x;

			for (int i = 0; i < x; i++){
				if (q[i] == 'R'){
					r = i;

					if (d != -1){
						mn = min(mn,abs(r-d));
					}

				}
				else
				if (q[i] == 'D'){
					d= i;

					if (r != -1){
						mn = min(mn, abs(r - d));
					}

				}
			}


			cout << mn << endl;
		}


		cin >> x;
	}

	return 0;
}