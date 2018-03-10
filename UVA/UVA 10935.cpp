#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
int main(){



	int t;
	cin >> t;

	while (t != 0){
		queue<int> q;

		queue<int> d;

		for (int i = 1; i <= t; i++){
			q.push(i);
		}
		int z = 0;
		
		int r = 1;
		while (r==1 && t>1){
			if (z % 2 == 0){
				int u = q.front();
				d.push(u);
				//cout << q.front() <<" "<<z<< endl;
				
			}
			else{
				q.push(q.front());
			}
			z++;
			
			q.pop();
			if (q.size() == 1)
				break;
		}
		if (t == 1){
			cout << "Discarded cards:" << endl;
			cout << "Remaining card: ";
			cout << q.front() << endl;
		}
		else{
			int x = d.size();
			cout << "Discarded cards: ";
			for (int i = 0; i < x; i++){
				cout << d.front();
				d.pop();
				if (i < x - 1)
					cout << ", ";

			}
			cout << endl;
			cout << "Remaining card: ";
			cout << q.front() << endl;

		}
		cin >> t;


	}

	return 0;
}