#include <iostream>
using namespace std;

class NhanVien {	
	private:
		string maNV;
		string ten;
		int ngay{}, thang{}, nam{};
		string cv; //Chuc vu
	public:
		void nhapNV();
		void xuatNV();
};