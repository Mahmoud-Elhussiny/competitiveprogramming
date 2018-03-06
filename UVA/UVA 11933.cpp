#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	string q, a1, a2;
	int x,y,a,b,e;

	cin >> x;
	while (x != 0){
		q.clear();
		e = 0;
		while (x != 0){
			int z = (x % 2);
			std::string s = to_string(z);
			
			q += s;
			if (x % 2 == 1)
				e++;
			x /= 2;
		}
		reverse(q.begin(), q.end());
		
		int c = 0;
		a1 = q;
		a2 = q;
		for (int i = 0; i < q.size(); i++){
			if (q[i] == '1')
				c++;
			if (q[i] == '1' && c % 2 == 0){
				a1[i] = '0';
			}
		}
		c = 0;
		for (int i = 0; i < q.size(); i++){
			if (q[i] == '1')
				c++;
			if (q[i] == '1' && c % 2 == 1){
				a2[i] = '0';
			}
		}
		
		int an = 0, bn = 0;
		for (int i = 0; i < q.size(); i++){
			an += pow(2, i)*(a1[q.size() - 1 - i]-'0');
		}

		for (int i = 0; i < q.size(); i++){
			bn += pow(2, i)*(a2[q.size() - 1 - i]-'0');
		}

		if (e % 2 == 1){
			cout << an << " " << bn << endl;
		}
		else
			cout << bn << " " << an << endl;

		cin >> x;
	}

	//system("pause");
	return 0;
}