#include <iostream>
#include "NgayThangNam.h"

using namespace std;

int main() {
    NgayThangNam n;

    cout << "--- Nhap thong tin ngay thang nam ---" << endl;
    n.Nhap(); // Gọi phương thức nhập 
    cout << "\nNgay vua nhap la: ";
    n.Xuat(); // Gọi phương thức xuất 

    cout << "\nNgay tiep theo la: ";
    n.NgayThangNamTiepTheo(); // Gọi phương thức xử lý ngày kế tiếp 
    n.Xuat();
    cout << endl;

    return 0;
}