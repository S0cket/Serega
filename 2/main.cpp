#include <iostream>
#include <set>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print(multiset<double> s) {
	for (auto iter = s.begin(); iter != s.end(); ++ iter)
		cout << *iter << " ";
	cout << endl;
}

int main(void) {
	srand(time(NULL));

	int n;
	cin >> n;
	multiset<double> mst;
	for (int i = 0; i < n; ++ i)
		mst.insert(rand() % 100);
	print(mst);

	cout << "\nNumber 1:\n";
	auto iter = mst.end();
	--iter;
	cout << *iter << endl;

	cout << "\nNumber 2:\n";
	double a;
	cin >> a;
	mst.erase(a);
	print(mst);

	cout << "\nNumber 3:\n";
	iter = mst.end();
	--iter;
	double d = *iter - *(mst.begin());
	auto mst_ = mst;
	mst.clear();
	for (auto iter = mst_.begin(); iter != mst_.end(); ++ iter)
		mst.insert(*iter - d);
	print(mst);

	return 0;

}