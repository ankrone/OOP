#include <iostream>
#include <string>
#include <iomanip>
#include "SinhVien.h"

using namespace std;

void SinhVien::nhapSV() {
	cout << "Nhap ma sinh vien: "; cin.ignore(); getline(cin, this->id);
	cout << "Nhap ho va ten: "; getline(cin, this->ten);
	cout << "Nhap lop: "; getline(cin, this->lop);
	cout << "Nhap diem A: "; cin >> this->diemA;
	cout << "Nhap diem B: "; cin >> this->diemB;
	cout << "Nhap diem C: "; cin >> this->diemC;
	cout << endl;
}

float SinhVien::DTB() {
	float dtb = (this->diemA + this->diemB + this->diemC) / 3;
	return dtb;
}

void SinhVien::xuatSV() {
	cout << "Ma sinh vien: " << this->id;
	cout << "\nHo va ten: " << this->ten;
	cout << "\nLop: " << this->lop;
	cout << "\nDiem A - B - C: " << this->diemA << " - " << this->diemB << " - " << this->diemC;
	cout << "\nDiem trung binh: " << setprecision(1) << DTB();
}
