#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Vector {
public:
	vector<T> vec;
	Vector() {}
	Vector(vector<T> v) {
		vec = v;
	}
	~Vector() {}
	T operator[](int index) {
		return vec[index];
	}
	Vector<T> operator+(Vector<T> V) {
		vector<T> a = vec;
		int m = min(a.size(), V.vec.size());
		for (int i = 0; i < m; ++ i)
			a[i] += V.vec[i];
		return Vector<T>(a);
	}
	Vector<T> operator+(T elem) {
		vector<T> a = vec;
		for (int i = 0; i < a.size(); ++ i)
			a[i] += elem;
		return Vector<T>(a);
	}
};

class Time {
private:
	int min, sec;
public:
	Time() {
		min = 0;
		sec = 0;
	}
	Time(int m, int s) {
		min = m + s / 60;
		sec = s % 60;
	}
	~Time() {}
	void print() {
		cout << min << ":" << sec << endl;
	}
};

void print(Vector<int> v) {
	for (int i = 0; i < v.vec.size(); ++ i)
		cout << v.vec[i] << " ";
	cout << endl;
}

int main(void) {
	vector<int> a(5, 3), b(3, 2);
	Vector<int> A(a), B(b);
	print(A);
	print(B);
	print(A + B);
	print(A + B + 1);
	Time t(4, 61);
	t.print();
	return 0;
}