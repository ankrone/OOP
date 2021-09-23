#include <iostream>
using namespace std;

class SinhVien {
	private:
		string id;
		string ten;
		string lop;
		float diemA{}, diemB{}, diemC{};
		float DTB();
	public:
		void nhapSV();
		void xuatSV();
};