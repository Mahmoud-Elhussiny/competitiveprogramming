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
		int a=0, r=0, q1=0, q2=0, q3=0, q4=0;
		cin >> q;
		for (int i = 0; i < q.size(); i++){
			if (q[i] == 'A')
				a++;
			else
			if (q[i] == 'A')
				a++;
			else
			if (q[i] == 'R')
				r++;
			else
			if (q[i] == 'G')
				q1++;
			else
			if (q[i] == 'I')
				q2++;
			else
			if (q[i] == 'T')
				q3++;
			else
			if (q[i] == 'M')
				q4++;
			
		}

		int s = min(q1, min(q2, min( q3, q4)));

		a /= 3;
		r /= 2;

		cout << min(a, min(r, s)) << endl;

	}

//	system("pause");
	return 0;
}