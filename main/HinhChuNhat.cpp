#include <iostream>
#include "HinhChuNhat.h"

using namespace std;

void ChuNhat::nhapCN() {
	do {
		cout << "Nhap chieu dai: ";
		cin >> d;
		cout << "Nhap chieu rong: ";
		cin >> r;
	} while (d < 0 && r < 0);
}

double ChuNhat::chuviCN() {
	double cv = (d + r) * 2;
	return cv;
}

double ChuNhat::dientichCN() {
	double dientich = d * r;
	return dientich;
}

void ChuNhat::xuatCN() {
	cout << "Chu vi: " << chuviCN() << endl;
	cout << "Dien tich: " << dientichCN() << endl;
}