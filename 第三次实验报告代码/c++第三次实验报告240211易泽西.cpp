#include <iostream>
using namespace std;
#include "mytriangle.h"
void task1(int& a1,int &a2,int &yue) {
	int a3 = 1;
	for (; a3 <= a1 && a3 <= a2; a3++) {
		if (a1 % a3 == 0 && a2 % a3 == 0) {
			yue = a3;
		}
	}
}
void task01(int &a1, int &a2,int&bei) {
	int a4 = 1;
    for (;; a4++) {
		if (a4 % a1 == 0 && a4 % a2 == 0) {
			bei = a4;
			break;
		}
	}
}
bool is_prime(int num) {
	int a=1, b=0;
	for (; a <= num; a++) {
		if (num % a == 0) {
			b++;
		}
	}
	if (b == 2) {
		return true;
	}
	else {
		return 0;
	}
}

int main()
{  cout << "task 1:" << endl;
	int a1, a2, yue=1, bei=1;
	cin >> a1 >> a2;
	task1(a1, a2,yue);task01(a1, a2,bei);
	cout << "最大公约数为：" << yue << " 最小公倍数为：" << bei<<endl;
	system("pause");
	cout << "task 2:" << endl;
	int a3;
	cin >> a3;
	if (is_prime(a3)) {
		cout << "这是一个素数" << endl;
	}
	else {
		cout << "这不是一个素数" << endl;
	}
	for (int c = 1;c<=200 ;) {
		for (int d = 0; d <10;) {
			if (is_prime(c)) {
				if (c <= 200) {
					cout << c << " ";
					c++;
					d++;
				}
				else {
					break;
				}
			}
			else { c++; }
		}
		cout << endl;
	}
	system("pause");
	cout << "task 4:" << endl;
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		cout << "三角形的面积为：" << area(side1, side2, side3) << endl;
	}
	else {
		cout << "不能构成三角形" << endl;
	}
	system("pause");
	cout << "task 5:" << endl;
	int tao = 1;
		for (int tian = 10; tian>0; tian--) {
			tao = (tao + 1) * 2;
		}
		cout << "第一天猴子共摘了" << tao << "个桃子" << endl;
		system("pause");
	return 0;
}
