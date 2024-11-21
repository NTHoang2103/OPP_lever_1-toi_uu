#include <iostream>
#include <string>
using namespace std;

class Hocsinh
{
private:
    string hoten;
    float toan, van, dtb;
    static int so; //?

public:
    // Hàm kh?i t?o
    Hocsinh()
    {
        so++; // Tang s? h?c sinh
        hoten = "";
        toan = van = 0;
        dtb = 0;
    }
    // Hàm Nhap không tham s?
    void Nhap()
    {
        cout << "Nhap ho ten hoc sinh " << so << ": ";
        cin.ignore(); // Đ?m b?o b? qua d?u \n t? l?n nh?p tru?c
        getline(cin, hoten);
        cout << "Nhap diem toan: "; cin >> toan;
        cout << "Nhap diem van: "; cin >> van;
    }
    // Hàm Nhap v?i tham s?
    void Nhap(string ht, float t, float v)
    {
        hoten = ht;
        toan = t;
        van = v;
    }
   // Hàm Xuat d? hi?n th? thông tin
    void Xuat()
    {
        cout << "Hoc sinh " << hoten << " co diem Toan: " << toan
             << " va diem Van: " << van << " co diem trung binh: " << dtb << endl;
    }

    // Hàm tính di?m trung b́nh
    void DTB()
    {
        dtb = (toan + van) / 2.0;
    }

    // Hàm tr? v? s? h?c sinh
    static int getSo()
    {
        return so;
    }
};

// Kh?i t?o giá tr? ban d?u cho bi?n tinh so
int Hocsinh::so = 0;

int main()
{
    Hocsinh hs1, hs2;
   
    hs1.Nhap();
    hs1.DTB();
    hs1.Xuat();

    hs2.Nhap("Nguyen Thi Mai", 8.0, 7.5);
    hs2.DTB();
    hs2.Xuat();

    cout << "So hoc sinh da nhap: " << Hocsinh::getSo() << endl;

    return 0;
}
