#include <iostream>
#include "PhanSo.h" // Phan so
#include "TamGiac.h" // Tam giac
#include "HinhChuNhat.h" // Hinh chu nhat
#include "SinhVien.h" // Sinh vien
#include "NhanVien.h" // Nhan vien
#include "SoPhuc.h" // So phuc
#include "PtrinhBac2.h" // Phuong trinh bac 2

using namespace std;
// Menu chinh
void menu() {
    cout << "\t\t\n";
    cout << "   ==============MENU===============" << endl;
    cout << "  |    1. Phan So.                  |" << endl;
    cout << "  |    2. Tam giac.                 |" << endl;
    cout << "  |    3. Hinh chu nhat.            |" << endl;
    cout << "  |    4. Sinh vien.                |" << endl;
    cout << "  |    5. Nhan vien.                |" << endl;
    cout << "  |    6. So phuc.                  |" << endl;
    cout << "  |    7. Phuong trinh bac 2.       |" << endl;
    cout << "  |    0. Thoat chuong trinh.       |" << endl;
    cout << "   =================================" << endl;
}
// Phan so
void ps() {
    PhanSo ps1, ps2, cong, tru, nhan, chia;
    cout << "Nhap phan so 1:" << endl;
    ps1.Nhap();
    cout << "  Phan so vua nhap: ";
    ps1.Xuat();
    ps1.Rutgon();
    cout << "  Phan so rut gon: ";
    ps1.Xuat(); 
    cout << "Nhap phan so 2:" << endl; 
    ps2.Nhap();
    cout << "  Phan so vua nhap: ";
    ps2.Xuat();
    ps2.Rutgon();
    cout << "  Phan so rut gon: ";
    ps2.Xuat();
    ///////////////////////////////////////////
    cong = ps1.CongPS(ps2);
    cout << "\nCong 2 phan so: "; 
    cong.Xuat();
    tru = ps1.TruPS(ps2);
    cout << "\nTru 2 phan so: ";
    tru.Xuat();
    nhan = ps1.NhanPS(ps2);
    cout << "\nNhan 2 phan so: ";
    nhan.Xuat();
    chia = ps1.ChiaPS(ps2);
    cout << "\nChia 2 phan so: ";
    chia.Xuat();
}
// Tam giac
void tg() {
    TamGiac tg;
    cout << "Nhap 3 canh cua tam giac:" << endl;
    tg.nhapTG();
    tg.xuatTG();
}
// Hinh chu nhat
void hcn() {
    ChuNhat cn;
    cn.nhapCN();
    cn.xuatCN();
}
// Sinh vien
void sv() {
    SinhVien SV;
    SV.nhapSV();
    SV.xuatSV();
}
// Nhan vien
void nv() {
    NhanVien NV;
    NV.nhapNV();
    NV.xuatNV();
}
// Su phuc
void sp() {
    SoPhuc sp1, sp2, cong, tru, nhan, chia;
    cout << "Nhap so phuc 1: " << endl;
    sp1.nhapSP();
    cout << "Nhap so phuc 2:" << endl;
    sp2.nhapSP();
    cout << "Xuat 2 so phuc: " << endl;
    cout << "So phuc 1: ";
    sp1.xuatSP();
    cout << "\nSo phuc 2: ";
    sp2.xuatSP();
    //////////////////////////////////
    cong = sp1.CongSP(sp2);
    tru = sp1.TruSP(sp2);
    nhan = sp1.NhanSP(sp2);
    chia = sp1.ChiaSP(sp2);
    ///////////////////////////////////
    cout << "\nCong 2 so phuc: ";
    cong.xuatSP();
    cout << "\nTru 2 so phuc: ";
    tru.xuatSP();
    cout << "\nNhan 2 so phuc: ";
    nhan.xuatSP();
    cout << "\nChia 2 so phuc: ";
    chia.xuatSP();
}
// Phuong trinh bac 2
void pt() {
    Ptrinh x;
    x.nhapPT();
    x.xuatPT();
}
int main()
{
    int key;
    while (true) {
        system("cls");
        menu();
        cout << "Nhap tuy chon: ";
        cin >> key;
        if (key < 0 || key > 7) {
            cout << "\nLua chon khong hop le. Xin kiem tra lai!!!" << endl;
            cout << endl;
            system("pause");
        }
        else if (key == 1) {
            ps();
            cout << endl;
            system("pause");
        }
        else if (key == 2) {
            tg();
            cout << endl;
            system("pause");
        }
        else if (key == 3) {
            hcn();
            cout << endl;
            system("pause");
        }
        else if (key == 4) {
            sv();
            cout << endl;
            system("pause");
        }
        else if (key == 5) {
            nv();
            cout << endl;
            system("pause");
        }
        else if (key == 6) {
            sp();
            cout << endl;
            system("pause");
        }
        else if (key == 7) {
            pt();
            cout << endl;
            system("pause");
        }
        else {
            break;//thoat vong lap
        }
    }
    ///////////////////////////////////////////////////////////////////////////
    system("pause");
    return 0;
}

