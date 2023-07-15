#include "An.h"

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int ucln(int a, int b) {
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int greatestCommonPrimeDivisor(int a, int b) {
    int q = 1;
    for (int i = 2; i <= a; i++) {
        if (a % i == 0 && b % i == 0 && isprime(i) == true) q = i;
    }
    if (q < 2) return -1;
    return q;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else return n * factorial(n - 1);
}

int lastDigitDiffZero(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
        while (res % 10 == 0) res /= 10;
        res = res % 100;
    }
    while (res % 10 == 0) res /= 10;
    return res % 10;
}

int count(int n) {
    int cnt = 0;
    while (n != 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int pagesNumbering(int n)
{
    int j = count(n);
    int le, ans = 0, num = 0;
    le = j * (n - (pow(10, j - 1)) + 1);
    for (int i = 1; i < j; i++) {
        num = num + i * (pow(10, i) - (pow(10, i - 1)));
    }
    ans = num + le;
    return ans;
}

long long numberZeroDigits(long long n)
{
    long long d = 0;
    long long k = 5;
    while (k <= n) {
        d += n / k;
        k *= 5;
    }
    return d;
}

double calculate(int n) {
    if (n == 1) return n;
    return sqrt(calculate(n - 1) + n);
}

int sum_all_square(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int j = sqrt(i);
        if (n % i == 0 && j * j == i) sum += i;
    }
    return sum;
}

bool checkStrongPassword(string password) {
    if (password.length() < 6) return false;
    string s = password;
    string p = "!@#$%^&*()_+";
    bool kt1 = false;
    bool kt2 = false;
    bool kt3 = false;
    bool kt4 = false;
    for (int i = 0; i < password.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') kt1 = true;
        if (s[i] >= 'A' && s[i] <= 'Z') kt2 = true;
        if (s[i] >= '0' && s[i] <= '9') kt3 = true;
        if (p.find(s[i]) != -1) kt4 = true;
    }
    return kt1 && kt2 && kt3 && kt4;
}

string amendTheSentence(string s) {
    string ans;
    if (s[0] >= 'A' && s[0] <= 'Z')
        s[0] += 32;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            ans = ans + " " + char(s[i] + 32);
        }
        else ans += s[i];
    }
    return ans;
}

int sum_first_n_prime_numbers(int n) {
    int prime_sum = 0; //Tổng các số nguyên tố	
    int num_primes = 0; //Số các số nguyên tố
    int current_number = 2;
    // Dùng vòng lặp while
    while (num_primes < n) {
        //Kiểm tra current_number có phải là số nguyên tố hay không
        //Nếu là số nguyên tố, tăng prime_sum và num_primes lên
        bool isprime = true;
        for (int i = 2; i < current_number; i++) {
            if (current_number % i == 0) {
                isprime = false;
                break;
            }
        }

        if (isprime) {
            prime_sum += current_number;
            num_primes++;
        }
        current_number++;
    }
    return prime_sum;
}

int mod(int a, int b) {
    if (a < b) return a;
    return mod(a - b, b);
}

/*
#include <bits/stdc++.h>
using namespace std;
#define eps 0.00001
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    double x, gt = 1.0, sinx = 0, mot = 1, cx = 1;
    int i = 1;
    cin >> x;
    double xpow = x;
    while (cx >= eps) {
        double k = mot * (xpow / gt);
        sinx += k;
        mot *= (-1);
        xpow *= x * x;
        gt *= (i + 1) * (i + 2);
        i += 2;
        cx = abs(k);
    }
    cout << fixed << setprecision(4) << sinx;
}
*/

int largest_input() {
    int a;
    cin >> a;
    if (a == 0)
        return a;
    int max = largest_input();
    if (max > a)
        return max;
    return a;
}

int sum_of_n(int n)
{
    if (n < 10) return n;
    return sum_of_n(n / 10) + n % 10;
}

int gcd(int m, int n) {
    if (n == 0) return m;
    return gcd(n, m % n);
}

int Fibo(int x) {
    if (x == 1 || x == 2) return 1;
    else return Fibo(x - 1) + Fibo(x - 2);
}

string remove_whitespace(string input)
{
    string s = input;
    //Xóa ký tự trắng đầu tiên
    while (s[0] == ' ')
        s.erase(0, 1);
    //Xóa ký tự trắng cuối cùng
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    //Xóa những ký tự trắng cạnh nhau 
    while (s.find("  ") != -1)    
        s.erase(s.find("  "), 1);
    return s;
}

void DectoBin(int n)
{
    if (n != 0)
    {
        DectoBin(n / 2);
        cout << n % 2;
    }
}

int DectoBin_int(int n)
{
	int s = 0;
	while (n != 0)
	{
		s = s * 10 + n % 2;
		n = n / 2;
	}
	return s;
}

string format_string(string a) {
    string s = remove_whitespace(a);
    if (s[0] >= 'a' && s[0] <= 'z') s[0] = s[0] - 32;
    for (int i = 1; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
    for (int i = 1; i <= s.length(); i++) {
        if (s[i] == ' ') s[i + 1] -= 32;
    }
    return s;
}

void NhapmangSNT(int a[], int& n) {
    cin >> n;
    int m = 0;
    int num_primes = 0; //Số các số nguyên tố
    int current_number = 2;
    while (num_primes < n) {
        bool isprime = true;
        //Kiểm tra current_number có phải số nguyên tố hay không, nếu phải thì tăng num_primes.
        for (int i = 2; i < current_number; i++) {
            if (current_number % i == 0) {
                isprime = false;
                break;
            }
        }
        //Nhập mảng
        if (isprime == true) {
            a[m] = current_number;
            num_primes++;
            m++;
        }
        current_number++;
    }

}

string questionCorrection(string s)
{
    //Luật chung:Câu hỏi chỉ chứa kí tự chữ cái (a-zA-Z), chữ số (0-9), dấu phẩy (,), dấu cách (' '), dấu hỏi (?). Các kí tự khác đều được thay thế bằng dấu cách
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] < 'a' || s[i]>'z') && (s[i] > 'Z' || s[i] < 'A') && (s[i] < '0' || s[i]>'9') && s[i] != '?' && s[i] != ',' && s[i] != ' ') s[i] = ' ';
    }

    //Luật dấu cách: Không có dấu cách ở đầu hay ở cuối câu. Giữa các từ chỉ có 1 dấu cách duy nhất. Sau mỗi dấu cách là 1 chữ cái hoặc chữ số?
    while (s[0] == ' ') {
        s.erase(0, 1);
    }
    while (s[s.length() - 1] == ' ') {
        s.erase(s.length() - 1, 1);
    }
    while (s.find("  ") != -1) {
        s.erase(s.find("  "), 1);
    }

    //Luật dấu phẩy: Trước dấu phẩy luôn là 1 chữ cái hoặc chữ số. Sau dấu phẩy luôn là một dấu cách. Trường hợp đứng trước dấu phẩy là dấu cách, hãy xóa dấu cách này đi.
    while (s.find(" ,") != -1) {
        s.erase(s.find(" ,"), 1);
    }
    while (s.find(",,") != -1) {
        s.erase(s.find(",,"), 1);
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',' && s[i + 1] != ' ') {
            s.insert(i + 1, " ");
        }
    }
    //Luật chữ hoa/chữ thường: Chữ cái bắt đầu câu luôn được viết hoa. Các chữ cái khác đều viết thường
    if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    //Luật dấu hỏi: Luôn có 1 dấu ? kết thúc câu. Trước dấu ? luôn là kí tự chữ cái hoặc chữ số. Trường hợp có các dấu ? xuất hiện khi chưa kết thúc câu, hãy thay thế nó bằng dấu cách. Trường hợp trước dấu cách là dấu phẩy và dấu cách, hãy xóa dấu cách và dấu phẩy
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') {
            s[i] = ' ';
            if (s[i - 1] == ' ' || s[i - 1] == ',') {
                s.erase(i - 1, 2);
            }
            if (s[i - 1] != ' ' && s[i + 1] == ' ') {
                s.erase(i, 1);
            }
        }
    }
    s += "?";
    while (s[s.length() - 2] == ',' || s[s.length() - 2] == '?' || s[s.length() - 2] == ' ') {
        s.erase(s.length() - 2, 1);
    }
    return s;
}

string toString(int n) {
    string s = "";
    while (n > 0) {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

int len(char* s) {
    int n = 0;
    while (s[n] != '\0')
        n++;
    return n;
}
void chenchuoi(char* s, char* s1, int k) {
    char* ans = new char[len(s) + len(s1) + 1];
    for (int i = 0; i < k; i++) {
        ans[i] = s[i];
    }
    for (int j = 0; j < len(s1); j++) {
        ans[k + j] = s1[j];
    }
    int a = len(s1);
    for (int p = k; p < len(s); p++) {
        ans[p + a] = s[p];
    }
    cout << ans;
}

void Binaryy(int n, string s){
	if (n == 0) cout << s << " ";
	else {
		for (int i = 0; i <= 1; i++){
			dequy(n-1, s + char(i + '0'));
		}
	}
}
