#include <iostream>
#include <iomanip>
#include "TamGiac.h"
#include <math.h>

using namespace std;

void TamGiac::nhapTG() {
	do {
		cout << "Nhap canh a: ";
		cin >> a;
		cout << "Nhap canh b: ";
		cin >> b;
		cout << "Nhap canh c: ";
		cin >> c;
	} while (a < 0 && b < 0 && c < 0);
}


void TamGiac::xuatTG() {
	int cv = a + b + c;
	float p = cv / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	if (a + b > c && a + c > b && b + c > a) {
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			cout << "Day la tam giac vuong" << endl;
			cout << "Chu vi: " << cv << endl;
			cout << "Dien tich: " << setprecision(2) << s;
		}
		else if (a == b && b == c) {
			cout << "Day la tam giac deu" << endl;
			cout << "Chu vi: " << cv << endl;
			cout << "Dien tich: " << setprecision(2) << s;
			
		}
		else if (a == b || a == c || b == c) {
			cout << "Day la giam giac can" << endl;
			cout << "Chu vi: " << cv << endl;
			cout << "Dien tich: " << setprecision(2) << s;
		}
	}
	else {
		cout << "Day khong phai tam giac" << endl;
	}
}
