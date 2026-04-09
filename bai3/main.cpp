#include <iostream>
#include "SoPhuc.h"

using namespace std;

int main() {
    SoPhuc sp1, sp2, kq;

    cout << "--- Nhap so phuc thu nhat ---" << endl;
    sp1.Nhap(); 
    cout << "--- Nhap so phuc thu hai ---" << endl;
    sp2.Nhap(); 

    cout << "\nSo phuc A: "; sp1.Xuat();
    cout << "\nSo phuc B: "; sp2.Xuat();

    cout << "\n\n--- Ket qua cac phep tinh ---" << endl;
    
    kq = sp1.Tong(sp2);
    cout << "Tong: "; kq.Xuat(); cout << endl;

    kq = sp1.Hieu(sp2);
    cout << "Hieu: "; kq.Xuat(); cout << endl;

    kq = sp1.Tich(sp2);
    cout << "Tich: "; kq.Xuat(); cout << endl;

    kq = sp1.Thuong(sp2);
    cout << "Thuong: "; kq.Xuat(); cout << endl;

    return 0;
}