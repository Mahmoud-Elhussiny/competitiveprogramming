#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		string q;
		cin >> q;

		if (q.size() > 3)
			cout << 3 << endl;
		else{
			if ((q[0] == 'o' && q[1] == 'n') || (q[2] == 'e' && q[0] == 'o') || (q[2] == 'e' && q[1] == 'n'))
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
	}

	//system("pause");
	return 0;
}