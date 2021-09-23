#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo() {
	this->tu = 0;
	this->mau = 1;
}
PhanSo::PhanSo(int iTu, int iMau) {
	iTu = this->tu;
	if (iMau != 0) {
		iMau = this->mau;
	}
	else {
		iMau = 1;
	}
}
int PhanSo::UCLN(int a, int b) {
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}
void PhanSo::Rutgon() {
	int u = UCLN(tu, mau);
	tu /= u;
	mau /= u;
}
void PhanSo::Nhap() {
	cout << "Nhap tu so: ";
	cin >> tu;
	do {
		cout << "Nhap mau so: ";
		cin >> mau;
		if (mau == 0) {
			cout << "Nhap mau so khong hop le. Nhap lai: " << endl;
		}
	} while (mau == 0);
}
void PhanSo::Xuat() {
	if (mau == 1) {
		cout << tu << endl;
	}
	else if (mau < 0) {
		cout << -tu << "/" << mau << endl;
	}
	else {
		cout << tu << "/" << mau << endl;
	}
} 
PhanSo PhanSo::CongPS(PhanSo& p) {
	PhanSo tong;
	tong.tu = tu * p.mau + mau * p.tu;
	tong.mau = mau * p.mau;
	return tong;
}
PhanSo PhanSo::TruPS(PhanSo& p) {
	PhanSo hieu;
	hieu.tu = tu * p.mau - mau * p.tu;
	hieu.mau = mau * p.mau;
	return hieu;
}
PhanSo PhanSo::NhanPS(PhanSo& p) {
	PhanSo tich;
	tich.tu = tu * p.tu;
	tich.mau = mau * p.mau;
	return tich;
}
PhanSo PhanSo::ChiaPS(PhanSo& p) {
	PhanSo thuong;
	thuong.tu = tu * p.mau;
	thuong.mau = mau * p.tu;
	return thuong;
}
