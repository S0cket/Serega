#include <iostream>
#define PI 3.14159265

using namespace std;

class Circle {
protected:
	double r;
public:
	Circle() {
		r = 1;
	}
	Circle(double r) {
		this->r = r;
	}
	~Circle() {}

	double L() {
		return 2 * PI * r;
	}
	double S() {
		return PI * r * r;
	}
	void print() {
		cout << "Circle: R=" << r << ", L=" << L() << ", S=" << S() << endl;
	}
};

class Cylinder : public Circle {
protected:
	double h;
public:
	Cylinder() {
		r = 1;
		h = 1;
	}
	Cylinder(double r, double h) {
		this->r = r;
		this->h = h;
	}
	~Cylinder() {}

	double V() {
		return PI * r * r * h;
	}
	double S() {
		return L() * h + 2 * (PI * r * r);
	}
	void print() {
		cout << "Cylinder: R=" << r << ", H=" << h << ", V=" << V() << ", S=" << S() << endl;
	}
};

int main(void) {
	int n, m;
	cin >> n >> m;

	Circle cm;
	bool flag = true;
	for (int i = 0; i < n; ++ i) {
		cout << "Circle " << (i + 1) << ":\n";
		double r;
		cin >> r;
		Circle c(r);
		if (flag) {
			flag = false;
			cm = c;
		}
		else {
			if (c.S() > cm.S())
				cm = c;
		}
	}
	cm.print();

	double v = 0;
	for (int i = 0; i < m; ++ i) {
		cout << "Cylinder " << (i + 1) << ":\n";
		double r, h;
		cin >> r >> h;
		Cylinder c(r, h);
		v += c.V();
	}
	v /= m;
	cout << v << endl;
	return 0;
}