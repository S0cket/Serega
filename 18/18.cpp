#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void) {

/*
Осуществить перезапись
f1 => f3
f2 => f4
f3 => f5
f4 => f1

Цепочка перезаписи не замкнутая, поэтому файл h не понадобился
*/

	fstream f1, f2, f3, f4, f5, h;
	double buf;

	//f3 => f5
	f5.open("f5", ios::out);
	f3.open("f3", ios::in);
	while (f3 >> buf)
		f5 << buf << " ";
	f5.close();
	f3.close();

	//f1 => f3 
	f3.open("f3", ios::out);
	f1.open("f1", ios::in);
	while (f1 >> buf)
		f3 << buf << " ";
	f3.close();
	f1.close();

	//f4 => f1
	f1.open("f1", ios::out);
	f4.open("f4", ios::in);
	while (f4 >> buf)
		f1 << buf << " ";
	f1.close();
	f4.close();

	//f2 => f4
	f4.open("f4", ios::out);
	f2.open("f2", ios::in);
	while (f2 >> buf)
		f4 << buf << " ";
	f4.close();
	f2.close();
}