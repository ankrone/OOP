#include <iostream>
#include <string>
#include "NhanVien.h"

void NhanVien::nhapNV() {
	cout << "Nhap ma nhan vien: "; cin.ignore(); getline(cin, this->maNV);
	cout << "Nhap ho va ten: "; getline(cin, this->ten);
	do {
		cout << "Nhap ngay sinh: "; cin >> this->ngay;
	} while (this->ngay < 1 || this->ngay >31);
	do {
		cout << "Nhap thang sinh: "; cin >> this->thang;
	} while (this->thang < 1 || this->thang > 12);
	do {
		cout << "Nhap nam sinh: "; cin >> this->nam;
	} while (this->nam < 1900);
	cout << "Chuc vu: "; cin >> this->cv;
	cout << endl;
}

void NhanVien::xuatNV() {
	cout << "Ma nhan vien: " << this->maNV;
	cout << "\nHo va ten: " << this->ten;
	cout << "\nNgay sinh: " << this->ngay << "/" << this->thang << "/" << this->nam;
	cout << "\nChuc vu: " << this->cv;
}