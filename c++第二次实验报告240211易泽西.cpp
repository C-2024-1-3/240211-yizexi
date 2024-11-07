#include <iostream>
using namespace std;
int main()
{
cout << "task 1:" << endl;
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		a = a - 32;
		cout << a << endl;
	}
	else {
		cout << a + 1 << endl;
	}
	system("pause");
	cout << "task 2:" << endl;
	double x = 0;
	double y = 0;
	cin >> x;
	if (0 < x && x < 1) {
		y = 3 - 2 * x;
	}
	else if (1 <= x && x < 5) {
		y = 2 / (4 * x) + 1;
	}
	else if (5 <= x && x < 10) {
		y = x * x;
	}
	cout << y << endl;
	system("pause");
	cout << "task 3:" << endl;
	double j, k, l;
	cin >> j >> k >> l;
	if (j + k <= l || j + l <= k || k + l <= j) {
		cout << "不能构成三角形" << endl;
	}
	else {
		double zhouchang = j + k + l;
		if (j == k || j == l || k == l) {
			cout << "是等腰三角形" << endl;
		}
		cout << "周长为：" << zhouchang;
		system("pause");
	}
	cout << "task 4:" << endl;
	double num1, num2;
	char yun;
	double guo = 0;
	cout << "请分别输入第一，二个数字：" << endl;
	cin >> num1>>num2 ;
	cout << "请输入运算符" << endl;
	cin >> yun;
	if (yun == '+') {
		guo = num1 + num2;
	}
	else if (yun == '-') {
		guo = num1 - num2;
	}
	else if (yun == '*') {
		guo = num1 * num2;
	}
	else if (yun == '/') {
		if (num2 == 0) {
			cout << "除数不能为0" << endl;
		}
		else {
			guo = num1 / num2;
		}
	}
	else {
		cout << "请输入合法的操作符" << endl;
	}
	cout << "结果为：" << guo << endl;
	system("pause");
    cout << "task 5:" << endl;
	int word = 0, space = 0, number = 0, other = 0;
	char c;
	cout << "请输入：" << endl;
	c = getchar();
	while (c != '\n') {
		if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z') {
			word++;
		}
		else if (c == ' ') {
			space++;
		}
		else if (c >= '0' && c <= '9') {
			number++;
		}
		else {
			other++;
		}
		c = getchar();
	}
	cout << "英文字母有" << word << "个" << endl;
	cout << "数字有" << number << "个" << endl;
	cout << "空格有" << space << "个" << endl;
	cout << "其他字符有" << other << "个" << endl;
	system("pause");
	cout << "task 6:" << endl;
	int a1, a2;
	cin >> a1 >> a2;
	int a3 = 1;
	int a4 = 1;
	int yue = 1;
	int bei = 1;
	for (; a3 <= a1 && a3 <= a2; a3++) {
		if (a1 % a3 == 0 && a2 % a3 == 0) {
			yue = a3;
		}
	}
	for (;; a4++) {
		if (a4 % a1 == 0 && a4 % a2 == 0) {
			bei = a4;
			break;
		}
	}
	cout << "最大公约数为：" << yue << "最小公倍数为：" << bei;
	system("pause");
	cout << "task 7:" << endl;
	for (int xing1 = 1; xing1 < 6; xing1++) {
		for (int xing2 = 1; xing2 <= xing1; xing2++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << "task 8:" << endl;
	double u = 0; cout << "请输入所要开根的数字：" << endl;
	cin >> u;
	if (u >= 0) {
		double x0 = u;
		double x1 = (x0 + u / x0) / 2;
		for (; 10000 * (x0 - x1) >= 0.00001 || 10000 * (x1 - x0) >= 0.00001;) {
			x0 = x1;
			x1 = (x0 + u / x0) / 2;
		}
		cout << "结果为：" << x1;
	}
	else {
		cout << "请不要输入负数" << endl;
		system("pause");
		cout << "task 9:" << endl;
		double ping = 0.8;
		int tian = 0;
		int shu = 2;
		int zong = 0;
		for (; shu <= 100; ) {
			zong += shu;
			shu = 2 * shu;
			tian++;
		}
		double jun = ping * zong / tian;
		cout << jun;
		system("pause");
		return 0;

	}
}


