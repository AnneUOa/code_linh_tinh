#pragma once //Khi include 1 file nhiều lần sẽ hiển thị lỗi, vì câu lệnh #include sẽ copy và paste file được include vào file hiện tại. Để tránh được lỗi này chúng ta có thể thêm câu lện tiền xử lý #pragma once vào trong file
#include <iostream> 
#include<string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

//Số nguyên tố//3
bool isprime(int n);

//Ước chung lớn nhất//11
int ucln(int a, int b);

// UCLN là số nguyên tố của a và b//21
int greatestCommonPrimeDivisor(int a, int b);

//Tính n! //30
int factorial(int n);

//The last digit of n!, which is different from zero. vd:5!=120, in ra "2" //39
int lastDigitDiffZero(int n);

//đếm xem n là số có bao nhiêu chữ số vd: 314, ans=3 //52
int count(int n);

//Đếm số lượng các chữ số dùng để đánh n trang của quyển sách đó, vd: để đánh 11 trang cần 13 số( 1->9,1,0,1,1,)//61
int pagesNumbering(int n);

//Tính số chữ số 0 tận cùng của n! (Basic algorithms/Numerical/9) //73
long long numberZeroDigits(long long n);

//Tính căn bậc n + căn bậc n-1 + căn bậc n -2 + .... + căn bậc 2 + căn bậc 1 //84
double calculate(int n);

//Tính tổng tất cả các ước số chính phương của một số nguyên dương n //89
int sum_all_square(int n);

//Kiểm tra mật khẩu mạnh //98
bool checkStrongPassword(string password);

//Sửa đổi câu "CodelearnIsAwesome" thành "codelearn is awesome"//115
string amendTheSentence(string s);

//Tính tổng n số nguyên tố đầu tiên //128
int sum_first_n_prime_numbers(int n);

//Tính số dư khi chia a cho b, dùng đệ quy//153
int mod(int a, int b);

//Tính sinx //158

//Tìm số lớn nhất trong các số nguyên dương được nhập vào,Input tận cùng bằng số 0 báo hiệu kết thúc input // 182
int largest_input();

//Tổng tất cả các chữ số của n, vd: n=123 => 1+2+3=6. //193
int sum_of_n(int n);

//Tính UCLN của 2 số, dùng đệ quy, k dùng for, do while //199
int gcd(int m, int n);

//Dãy số Fibonacci, dùng đệ quy, xuất ra số Fibo thứ x //204
int Fibo(int x);

//Xóa các khoảng trắng thừa //209 
string remove_whitespace(string input);

//Chuyển số n từ hệ thập phân sang hệ nhị phân dạng void //224 
void DectoBin(int n);

//Chuyển số n từ hệ thập phân sang hệ nhị phân dạng int //233
int DectoBin_int(int n);

//Định dạng lại chuỗi string //244
string format_string(string a);

//Tạo mảng một chiều a bao gồm n số nguyên tố theo thứ tự tăng dần. //255
void NhapmangSNT(int a[], int& n);

//Câu hỏi được chuẩn hóa.//280
string questionCorrection(string s);

//Ép kiểu từ int sang string //334
string toString(int n);

//Đếm độ dài chuỗi //343
//Chèn chuỗi s1 vào s tại vị trí k//349
void chenchuoi(char* s, char* s1, int k);

//hàm đệ quy được sử dụng để in ra tất cả các chuỗi nhị phân có độ dài n bit //364
void dequy(int n, string s);