#include "SoPhuc.h"
#include <iostream>
using namespace std;
SoPhuc::SoPhuc(float thuc, float ao) {
    iThuc = thuc;
    iAo = ao;
}
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: "; cin >> iThuc;
    cout << "Nhap phan ao: "; cin >> iAo;
}

void SoPhuc::Xuat() {
    cout << iThuc << (iAo >= 0 ? " + " : " - ") << abs(iAo) << "i";
}

SoPhuc SoPhuc::Tong(SoPhuc sp) {
    return {iThuc + sp.iThuc, iAo + sp.iAo};
}

SoPhuc SoPhuc::Tich(SoPhuc sp) {
    // Công thức: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
    return {iThuc * sp.iThuc - iAo * sp.iAo, iThuc * sp.iAo + iAo * sp.iThuc};
}

SoPhuc SoPhuc::Hieu(SoPhuc sp) {
    return {iThuc - sp.iThuc, iAo - sp.iAo};
}

SoPhuc SoPhuc::Thuong(SoPhuc sp) {
    float mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    return {(iThuc * sp.iThuc + iAo * sp.iAo) / mau, (iAo * sp.iThuc - iThuc * sp.iAo) / mau};
}