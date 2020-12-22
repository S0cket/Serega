#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Date {
public:
	int year, month, day;
	Date() {
		year = 0;
		month = 1;
		day = 1;
	}
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	~Date() {}
	void Getdate(string d) {
		sscanf(d.c_str(), "%2d/%2d/%2d", &day, &month, &year);
	}
	void Showdate() {
		printf("%d ", day);
		switch (month) {
			case 1:
				printf("января");
				break;
			case 2:
				printf("февраля");
				break;
			case 3:
				printf("марта");
				break;
			case 4:
				printf("апреля");
				break;
			case 5:
				printf("мая");
				break;
			case 6:
				printf("июня");
				break;
			case 7:
				printf("июля");
				break;
			case 8:
				printf("августа");
				break;
			case 9:
				printf("сентября");
				break;
			case 10:
				printf("октября");
				break;
			case 11:
				printf("ноября");
				break;
			case 12:
				printf("декабря");
				break;
		}
		printf(" 20%02dг.\n", year);
	}

};

int main(void) {
	setlocale(LC_ALL, "Russian");
	Date d;
	d.Getdate("12/09/02");
	d.Showdate();
	return 0;
}