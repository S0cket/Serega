#include <iostream>
#include <list>

using namespace std;

list<int>::iterator offset(list<int>::iterator iter, int n) {
	for (int i = 0; i < n; i ++)
		iter ++;
	return iter;
}

int main(void) {
	int n, k, pos = 0;
	list<int> l;

	cin >> n >> k;
	cout << "Before:\n";
	for (int i = 1; i <= n; i ++) {
		l.push_back(i);
		cout << i << " ";
	}

	int a = k - 1;
	list<int>::iterator iter = l.begin();

	while (l.size() >= k) {
		if (a == 0) {
			l.erase(iter);
			iter = offset(l.begin(), pos);
			a = k - 1;
		}
		else {
			pos ++;
			a --;
			iter ++;
			if (iter == l.end()) {
				pos = 0;
				iter = l.begin();
			}
		}
	}

	cout << "\n\nAfter:\n";
	for (list<int>::iterator i = l.begin(); i != l.end(); i ++)
		cout << *i << " ";
	cout << "\n";
	return 0;
}