#include "ThoiGian.h"
#include <iostream>
#include <iomanip> // Thư viện để định dạng xuất 00:00:00
using namespace std;

ThoiGian::ThoiGian(int gio, int phut, int giay) : iGio(gio), iPhut(phut), iGiay(giay) {}

void ThoiGian::Nhap() {
    do {
        cout << "Nhap Gio (0-23): "; cin >> iGio;
        cout << "Nhap Phut (0-59): "; cin >> iPhut;
        cout << "Nhap Giay (0-59): "; cin >> iGiay;
        if (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59) {
            cout << "Du lieu khong hop le, vui long nhap lai!\n";
        }
    } while (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59);
}

void ThoiGian::Xuat() {
    // Xuất định dạng HH:MM:SS để dễ quan sát 
    cout << setfill('0') << setw(2) << iGio << ":" 
         << setw(2) << iPhut << ":" 
         << setw(2) << iGiay;
}

void ThoiGian::TinhCongThemMotGiay() {
    iGiay++; // Tăng giây lên 1 
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0; // Quay lại 0 giờ nếu vượt quá 23:59:59
            }
        }
    }
}