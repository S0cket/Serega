#include <iostream>

using namespace std;

class pas {
protected:
	string name;
	double speed, price;
public:
	double cost(double distance) {
		return distance * price;
	}
	double time(double distance) {
		return distance / speed;
	}
	friend void print(pas, double);
};

class air : public pas {
public:
	air() {
		name = "Airplane";
		speed = 600;
		price = 1;
	}
	~air() {}
};

class train : public pas {
public:
	train() {
		name = "Train";
		speed = 70;
		price = 2;
	}
	~train() {}
};

class car : public pas{
public:
	car() {
		name = "Car";
		speed = 80;
		price = 3;
	}
	~car() {}
};

void print(pas p, double distance) {
	cout << p.name << ": distance=" << distance << "km cost=" << p.cost(distance) << "$ time=" << p.time(distance) << "h\n";
}
int main(void) {
	double d;
	cin >> d;
	air a;
	train b;
	car c;
	print(a, d);
	print(b, d);
	print(c, d);
	return 0;
}