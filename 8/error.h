#include <string>
#include <iostream>

class error {
private:
	std::string str;
public:
	error(std::string s) {
		str = s;
	}
	void what() {
		std::cerr << str << std::endl;
	}
};