#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s, out;
	bool one = true;
	getline(cin, s);
	for (int i = 0; i < s.size(); i ++) {
		if (s[i] == ' ') {
			if (one) {
				one = false;
				out.push_back(s[i]);
			}
		}
		else {
			out.push_back(s[i]);
			one = true;
		}
	}
	cout << out << endl;
	return 0;
}