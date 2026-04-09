#ifndef THOIGIAN_H
#define THOIGIAN_H

class ThoiGian {
private:
    int iGio, iPhut, iGiay; // Thuộc tính lưu trữ giờ, phút, giây 
public:
    ThoiGian(int gio = 0, int phut = 0, int giay = 0); // Hàm khởi tạo mặc định
    void Nhap(); // Phương thức nhập thông tin 
    void Xuat(); // Phương thức xuất thông tin 
    void TinhCongThemMotGiay(); // Phương thức cộng thêm 1 giây 
};

#endif
