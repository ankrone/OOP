#include <iostream>
#include <math.h>
#include <iomanip>
#include "PtrinhBac2.h"
using namespace std;

void Ptrinh::nhapPT() {
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}

void Ptrinh::xuatPT() {
	if (a == 0) {
		cout << b << "x" << " + " << c << " = 0";
		if (b != 0) {
			cout << "x = " << (-c) / b;
		}
		else if (c == 0) {
			cout << "Phuong trinh vo ngiem.";
		}
		else {
			cout << "Phuong trinh co vo so nghiem.";
		}
	}
	else {
		float delta = b * b - 4 * a * c;
		cout << a << "x^2 + " << b << "x + " << c << " = 0";
		if (delta < 0) {
			cout << "\nPhuong trinh vo nghiem.";
		}
		else if (delta == 0) {
			cout << "\nPhuong trinh co nghiem kep!";
			cout << setprecision(1) << "\nx = " << (-b) / (2 * a);
		}
		else {
			cout << "\nDelta = " << delta << " > 0";
			cout << "\nPhuong trinh co 2 nghiem phan biet!";
			cout << setprecision(1) << "\nx1 = " << ((-b) + sqrt(delta)) / (2 * a);
			cout << setprecision(1) << "\nx2 = " << ((-b) - sqrt(delta)) / (2 * a);
		}
	}
}