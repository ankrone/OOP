class PhanSo 
{
	private:
		int tu{};
		int mau{};
		int UCLN(int a, int b);
	public:
		PhanSo();
		PhanSo(int tu);
		PhanSo(int tu, int mau);
		PhanSo CongPS(PhanSo&);
		PhanSo TruPS(PhanSo&);
		PhanSo NhanPS(PhanSo&);
		PhanSo ChiaPS(PhanSo&);
		void Rutgon();
		void Nhap();
		void Xuat();
};
