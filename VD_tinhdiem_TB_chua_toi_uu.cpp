#include <iostream>
#include <string>
using namespace std;

// Lớp SinhVien
class SinhVien {
private:
    string ten;
    float diemToan;
    float diemVan;

public:
    // Phương thức nhập thông tin sinh viên
    void nhapThongTin() {
        cout << "Nhap ten sinh vien: ";
        getline(cin, ten);
        cout << "Nhap diem toan: "; cin >> diemToan;
        cout << "Nhap diem van: "; cin >> diemVan;
    }

    // Phương thức tính điểm trung bình
    float tinhDiemTB() {
        return (diemToan + diemVan) / 2;
    }

    // Phương thức xuất kết quả
    void xuatKetQua() {
        cout << "Ten sinh vien: " << ten << endl;
        cout << "Diem toan: " << diemToan << endl;
        cout << "Diem van: " << diemVan << endl;
        cout << "Diem trung binh: " << tinhDiemTB() << endl;
    }
};

int main() {
    // Khởi tạo đối tượng SinhVien
    SinhVien sv;
   
    // Nhập thông tin cho sinh viên
    sv.nhapThongTin();

    // Xuất kết quả
    sv.xuatKetQua();

    return 0;
}
