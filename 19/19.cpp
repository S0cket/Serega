#include <iostream>
#include <string>

using namespace std;


//Время записывается в миллисекундах, расстояние в миллиметрах
struct stud {
	string fn, ln, mn;
	char gender;
	int group;
	int gto1, gto2, gto3;
};

void print(struct stud s) {
	cout << "stud:\n"
	<< s.fn << " " << s.ln << " " << s.mn << "\n"
	<< s.gender << "\ngto:\n"
	<< s.gto1 << " " << s.gto2 << " " << s.gto3 << "\n\n";
}

const int N = 7;
int norm[2][3] = {
	{12000, 3000, 1250},
	{15000, 2500, 1100}
};

int main(void) {
	struct stud arr1[N] = {
		{"a1", "b1", "c1", 'm', 1, 12000, 3100, 1251},
		{"a2", "b2", "c2", 'w', 1, 12000, 3050, 1260},
		{"a3", "b3", "c3", 'm', 1, 14293, 2900, 1200},
		{"a4", "b4", "c4", 'w', 1, 14293, 2900, 1200},
		{"a5", "b5", "c5", 'm', 1, 10000, 2900, 1260},
		{"a6", "b6", "c6", 'm', 1, 12000, 3100, 1240},
		{"a7", "b7", "c7", 'm', 1, 14000, 3100, 1260}
	}, arr2[N];
	int n = 0;
	cout << "old:\n";
	for (int i = 0; i < N; ++ i) {
		print(arr1[i]);
		bool boo = true;
		int x = (arr1[i].gender == 'm') ? 0 : 1;
		if (arr1[i].gto1 > norm[x][0])
			boo = false;
		if (arr1[i].gto2 < norm[x][1])
			boo = false;
		if (arr1[i].gto3 < norm[x][2])
			boo = false;
		if (boo)
			arr2[n ++] = arr1[i];
	}
	cout << "\n\n\nnew:\n";
	for (int i = 0; i < n; ++ i) {
		print(arr2[i]);
	}
	return 0;
}