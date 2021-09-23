class SoPhuc {
	private:
		float thuc{};
		float ao{};
	public:
		SoPhuc();
		SoPhuc(float thuc, float ao);
		SoPhuc CongSP(SoPhuc& a);
		SoPhuc TruSP(SoPhuc& a);
		SoPhuc NhanSP(SoPhuc& a);
		SoPhuc ChiaSP(SoPhuc& a);
		void nhapSP();
		void xuatSP();
};