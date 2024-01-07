/**

@file demo.cpp
@author Vu Van Hung 20215588
@brief Program to demonstrate Doxygen usage
*/

/******************************************************************************
 * File: main.c
 * Author: Vu Van Hung 20215588
 * Description: Program to demonstrate Doxygen usage
 ******************************************************************************/


/**

@file math.cpp
@brief Chứa các hàm thực hiện tính toán số học
*/
/**

@fn double tinhTong(double a, double b)
@brief Hàm tính tổng hai số
@param a Số thứ nhất
@param b Số thứ hai
@return Tổng hai số a và b
*/
double tinhTong(double a, double b){
return a + b;
}
/**

@fn double tinhHieu(double a, double b)
@brief Hàm tính hiệu hai số
@param a Số thứ nhất
@param b Số thứ hai
@return Hiệu của a - b
*/
double tinhHieu(double a, double b){
return a - b;
}
/**

@fn double tinhTich(double a, double b)
@brief Hàm tính tích hai số
@param a Số thứ nhất
@param b Số thứ hai
@return Tích của a * b
*/
double tinhTich(double a, double b){
return a * b;
}
/**

@fn double tinhThuong(double a, double b)
@brief Hàm tính thương hai số
@param a Mẫu số
@param b Tử số
@return Thương của a / b
*/
double tinhThuong(double a, double b){
// Kiểm tra trường hợp b = 0
if(b == 0){
// Xử lý ngoại lệ
return 0;
}

return a / b;
}

/**

@fn void giaiPhuongTrinhBacNhat(double a, double b, double &x)
@brief Giải phương trình bậc nhất ax + b = 0
@brief Hàm này sử dụng hàm @p tinhThuong để tính thương a/b
@param a Hệ số a
@param b Hệ số b
@param x Giá trị nghiệm của phương trình
*/
void giaiPhuongTrinhBacNhat(double a, double b, double &x){
// Gọi hàm tính thương
double thuong = tinhThuong(a, b);

x = -1 * thuong;

}

// Các hàm khác

/**

@file math.cpp
*/
/**

@dot
digraph G {
main -> giaiPhuongTrinhBacNhat;
giaiPhuongTrinhBacNhat -> tinhThuong;
tinhThuong -> tinhTong;
tinhTong -> tinhHieu;
}
@enddot
*/

int main(){

double a = 2, b = 3;
double x;

giaiPhuongTrinhBacNhat(a, b, x);

return 0;
}