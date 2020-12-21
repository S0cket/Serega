#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print(vector<int> a) {
	for (int i = 0; i < a.size(); ++ i)
		cout << a[i] << " ";
	cout << endl;
}
void print(deque<int> a) {
	for (int i = 0; i < a.size(); ++ i)
		cout << a[i] << " ";
	cout << endl;
}
void print(list<int> a) {
	for (auto iter = a.begin(); iter != a.end(); ++ iter)
		cout << *iter << " ";
	cout << endl;
}

int main() {
	srand(time(NULL));
	int n, m;
	cin >> n >> m;
	vector<int> a;
	deque<int> b;
	for (int i = 0; i < n; ++ i)
		a.push_back(rand() % 100);
	sort(a.begin(), a.end());
	for (int i = 0; i < m; ++ i)
		b.push_back(rand() % 100);
	sort(b.begin(), b.end());
	print(a);
	print(b);
	a.insert(a.end(), b.begin(), b.end());
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	print(a);
	int aa, bb;
	cin >> aa >> bb;
	if (aa > bb) swap(aa, bb);
	int cnt = 0;
	for (int i = 0; i < a.size(); ++ i) {
		if (a[i] < aa || a[i] > bb)
			++ cnt;
	}
	cout << cnt << endl;

	//

	list<int> x, y;
	cin >> n >> m;
	for (int i = 0; i < n; ++ i)
		x.push_back(rand() % 100 + 1);

	for (int i = 0; i < m; ++ i)
		y.push_back(rand() % 100 - 100);

	print(x);
	print(y);

	return 0;
}