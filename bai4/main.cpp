#include "ThoiGian.h"
#include <iostream>
using namespace std;

int main() {
    ThoiGian tg;
    cout << "--- Nhap thoi gian ---\n";
    tg.Nhap();

    cout << "\nThoi gian hien tai: ";
    tg.Xuat();

    tg.TinhCongThemMotGiay();
    cout << "\nThoi gian sau khi cong 1 giay: ";
    tg.Xuat();
    cout << endl;

    return 0;
}