#include "NgayThangNam.h"
#include <iostream>
using namespace std;

void NgayThangNam::Nhap() {
    cout << "Nhap ngay, thang, nam: ";
    cin >> iNgay >> iThang >> iNam;
}

void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

bool NgayThangNam::LaNamNhuan() {
    return (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
}

int NgayThangNam::SoNgayTrongThang() {
    switch (iThang) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return LaNamNhuan() ? 29 : 28;
        default: return 31;
    }
}

void NgayThangNam::NgayThangNamTiepTheo() {
    iNgay++;
    if (iNgay > SoNgayTrongThang()) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
}