#include <iostream>
#include <math.h>
#include "SoPhuc.h"
using namespace std;
SoPhuc::SoPhuc() {
	thuc = 0;
	ao = 0;
}

SoPhuc::SoPhuc(float thuc, float ao) {
	this->thuc = thuc;
	this->ao = ao;
}

void SoPhuc::nhapSP() {
	cout << "Nhap phan thuc: ";
	cin >> thuc;
	cout << "Nhap phan ao: ";
	cin >> ao;
}

void SoPhuc::xuatSP() {
	if (thuc == 0) {
		cout << "(" << ao << "i)";
	}
	else if (ao == 0) {
		cout << "(" << thuc << ")";
	}
	else {
		cout << "(" << thuc << " + " << ao << "i)";
	}
}

SoPhuc SoPhuc::CongSP(SoPhuc& a) {
	SoPhuc tong;
	tong.thuc = this->thuc + a.thuc;
	tong.ao = this->ao + a.ao;
	return tong;
}

SoPhuc SoPhuc::TruSP(SoPhuc& a) {
	SoPhuc hieu;
	hieu.thuc = this->thuc - a.thuc;
	hieu.ao = this->ao - a.ao;
	return hieu;
}

SoPhuc SoPhuc::NhanSP(SoPhuc& a) {
	SoPhuc tich;
	tich.thuc = this->thuc * a.thuc - this->ao * a.ao;
	tich.ao = this->thuc * a.ao + this->ao * a.thuc;
	return tich;
}

SoPhuc SoPhuc::ChiaSP(SoPhuc& a) {
	SoPhuc thuong;
	thuong.thuc = round(((a.thuc * this->thuc + a.ao * this->ao) / (this->thuc * a.thuc + this->ao * a.ao))*100)/100;
	thuong.ao = round(((a.thuc * this->ao - a.ao * this->thuc) / (this->thuc * a.thuc + this->ao * a.ao))*100)/100;
	return thuong;
}