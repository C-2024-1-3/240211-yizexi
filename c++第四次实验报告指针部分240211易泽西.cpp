#include <iostream>
using namespace std;
void f(char* st, int i) {
	st[i] = '\0';
	cout << st;
	if (i > 1)f(st, i - 1);
}
int* f() {
	int* list = new int[4] {1, 2, 3, 4};
	return list;
}
int indexof(const char *s1, const char *s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int a = 0; a < len2; a++) {
		for (int d = 0; d < len1; d++) {
			if (s1[d] == s2[a]) {
				int c = 0;
				int b = a, e = d;
				for (; b < len2;) {
					if (s1[d] == s2[b]) {
						c++;
					}
					b++;
					d++;
				}
				if (c == len1) {
					return a + 1;
				}
			}
		}
	}
	return -1;
}
int parseHex(const char*const hexstring) {
	string a = hexstring;
	int b = 0;
	for (int c = 0; c < strlen(hexstring); c++) {
		int d = strlen(hexstring) - c-1;
		if (a[c] >= '0' && a[c] <= '9') {
			char f[2] = { a[c] };
			b += atoi(f)*pow(16,d);
		}
		else {
			int e=(int)a[c]-55;
			b +=e * pow(16, d);
		}
	}
	return b;
}
void maopao(int *a,int f) {
	for (int b = 0; b < f; b++) {
		for (int c = 0; c < f-1 - b; c++) {
			if (a[c] > a[c + 1]) {
				double temp = a[c + 1];
				a[c + 1] = a[c];
				a[c] = temp;
			}
		}
	}
}
int main()
{   cout << "task 1:" << endl;
	int i, j, * pi, * pj;
	pi = &i;
	pj = &j;
	i = 5; j = 7;
	cout << i << '\t' << j << '\t' << pi << '\t' << pj;
	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
	system("pause");
	cout << "task 2:" << endl;
	int a[] = { 1,2,3 };
	int* p, i0;
	p = a;
	for (i0 = 0; i0 < 3; i0++) {
		printf("%d,%d,%d,%d\n", a[i0], p[i0], *(p + i0), *(a + i0));
	}
	system("pause");
	cout << "task 3:" << endl;
	char st[] = "abcd";
	f(st, 4);
	system("pause");
	cout << "task 4:" << endl;
	int* p0 = f();
	cout << p0[0] << endl;
	cout << p0[1] << endl;
	delete p0;
	system("pause");
	/*-------------------程序设计部分-------------------*/
	cout << "task 1:" << endl;
	char s1[80], s2[80];
	cout << "Enter the first string:" << endl;
	cin >> s1;
	cout << "Enter the second string:" << endl;
	cin >> s2;
	cout << "indexof(“" << s1 << "”，“" << s2 << "”)" << "is" << indexof(s1, s2) << endl;
	system("pause");
	cout << "task 2:" << endl;
	cout << "请输入一个16进制数" << endl;
	char hexstring[5];
	cin >> hexstring;
	cout<<parseHex(hexstring)<<endl;
	cout << "task 3:" << endl;
	int b;
	cout << "请输入数组的元素个数:" << endl;
	cin >> b;
	int* a0 = new int[b];
	cout << "请输入数组的元素:" << endl;
	for (int c = 0; c < b; c++) {
		cin >> a0[c];
	}
	maopao(a0, b);
	cout << "排序完后的数组为：" << endl;
	for (int c = 0; c < b; c++) {
		cout << a0[c] << " ";
	}
	delete []a0;
	system("pause");
	return 0;
}

