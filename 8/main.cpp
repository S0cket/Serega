#include <iostream>
#include <vector>
#include "error.h"

using namespace std;

class Stack {
public:
	vector<int> st;
	Stack() {}
	Stack(vector<int> s) {
		st = s;
	}
	~Stack() {}

	int operator[](unsigned index) {
		if (index >= st.size()) throw error("out of range");
		return st[index];
	}
	int operator()() {
		return st.size();
	}
	void operator-(int n) {
		if (n > st.size()) throw error("n to large size stack");
		for (int i = 0; i < n; ++ i)
			st.pop_back();
	}
	void operator+(int n) {
		for (int i = 0; i < n; ++ i)
			st.push_back(0);
	}
	void print() {
		for (int i = 0; i < st.size(); ++ i)
			cout << st[i] << " ";
		cout << endl;
	}

};

int main(void) {
	Stack a;
	a + 5;
	a.print();
	a - 3;
	a.print();
	try {
		a - 100;
	}
	catch (error & e) {
		e.what();
	}
	return 0;
}