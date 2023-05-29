#include <iostream>
using namespace std;

class Abtraksi {
private: string x, y;

public:

	// Method untuk mengisi nilai
	// Private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	// Menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};
