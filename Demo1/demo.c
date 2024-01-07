/**

@file main.cpp
@author Vu Van Hung 20215588
@brief Program to demonstrate Doxygen usage
*/

/******************************************************************************
 * File: main.c
 * Author: Vu Van Hung 20215588
 * Description: Program to demonstrate Doxygen usage
 ******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * @brief Tính giai thừa của một số
 * 
 * Tính giai thừa của số n là tích các số từ 1 đến n.
 * 
 * @param n Số cần tính giai thừa
 * @return Kết quả giai thừa
 */
int factorial(int n);

/**
 * @brief Tính căn bậc hai của một số  
 *
 * Sử dụng hàm sqrt() trong thư viện math.h để tính căn bậc hai.
 * 
 * @param num Số cần tính căn 
 * @return Kết quả căn bậc hai
 */ 
double squareRoot(double num); 

/**
 * @brief So sánh hai chuỗi ký tự
 * 
 * Sử dụng hàm strcmp() để so sánh hai chuỗi theo mã ASCII.
 *
 * @param str1 Chuỗi thứ nhất
 * @param str2 Chuỗi thứ hai
 * @return 0 nếu bằng nhau, dương nếu str1 lớn hơn, âm nếu str1 nhỏ hơn
*/
int strCompare(char* str1, char* str2);

/**
 * @brief Hàm chính
 */
int main() {

  // Gọi các hàm

  int result = factorial(5);
  printf("Factorial of 5 is: %d\n", result);

  double num = 25.0;  
  double sqrtResult = squareRoot(num);
  printf("Square root of %f is %f\n", num, sqrtResult);

  char str1[] = "Hello";
  char str2[] = "World";
  int strCmpResult = strCompare(str1, str2);

  if(strCmpResult == 0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");

  return 0;
}