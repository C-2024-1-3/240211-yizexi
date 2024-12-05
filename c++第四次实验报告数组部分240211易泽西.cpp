#include <iostream>
using namespace std;
char eng[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void maopao(double a[10]) {
	for (int b = 0; b < 10; b++) {
		for (int c = 0; c < 9 - b; c++) {
			if (a[c] > a[c + 1]) {
				double temp = a[c+1];
				a[c + 1] = a[c];
				a[c] = temp;
			}
		}
    }
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int a = 0; a < size1; a++) {
		list3[a] = list1[a];
}
	for (int a = 0; a < size2 ; a++) {
		list3[size1 + a] = list2[a];
	}
	for (int b = 0; b <size1+size2; b++) {
		for (int c = 0; c <size1+size2-1-b; c++) {
			if (list3[c] > list3[c + 1]) {
				int temp = list3[c + 1];
				list3[c + 1] = list3[c];
				list3[c] = temp;
			}
		}
	}
	cout << "合并完后的数组为：" << endl;
	for (int a = 0; a < size1 + size2 ; a++) {
		cout << list3[a] << " ";
	}
}
int indexof(const char s1[], const char s2[]) {
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
void count(const char s[], int counts[]) {
	char ju[80];
	for (int yu = 0; yu < 80; yu++) {
		ju[yu] = s[yu];
	}
	for (int zi = 0; zi < 27; zi++) {
		for (int fu = 0; fu < 80; fu++) {
			if (ju[fu] >= 'a' && ju[fu]<= 'z') {
				ju[fu] = ju[fu] - 32;
			}
			if (ju[fu] == eng[zi]) {
				counts[zi]++;
			}
		}
		if (counts[zi] != 0&&zi!=26) {
			cout << eng[zi] << ":" << counts[zi] << "times" << endl;
		}
	}
}
int main(){
	cout << "task 1:" << endl;
	int a[10];
	int b,d=0;
	cout << "请输入10个数"<<endl;
	for (int c = 0; c < 10; c++) {
		cin >> b;
		int pan = 1;
		for (int e = 0; e <= d; e++) {
			if (b == a[e]) {
				pan = 0;
				break;
			}
		}
		if (pan) {
			a[d] = b;
			d++;
		}
	}
	cout << "不同的数有：";
	for (int f = 0; f < d; f++) {
		cout<< a[f] << endl;
	}
system("pause");
	cout << "task 2:" << endl;
	double ad[10] = { 3.5,2.3,5.6,23,5.6,4.4,2.4,3.14,2.9,7.7 };
	maopao(ad);
	cout << "升序排序后的数组为：";
	for (int a1 = 0; a1 < 10; a1++) {
		cout << ad[a1] << " ";
	};
	system("pause");
	cout << "task 3:" << endl;
	bool gui[100];
	for (int a0 = 0; a0 < 100; a0++) {
		gui[a0] = 0;
	}
	for (int student = 0; student < 100; student++) {
		for (int ge = student; ge < 100; ge = ge + student+1) {
			gui[ge] = !gui[ge];
		}
	}
	cout << "以下这些号码的柜子是开着的：" << endl;
	for (int kai = 0; kai < 100; kai++) {
		if (gui[kai]) {
			cout << kai+1 << " ";
		}
	}
	system("pause");
	cout << "task 4:" << endl;
	cout << "请分别输入数组1，2中有多少个元素" << endl;
	int liang01;
	int liang02;
	int list03[40];
	int list01[20];
	int list02[20];
	cin >> liang01>>liang02;
	cout << "请输入第一个数组中的元素" << endl;
	for (int a = 0; a < liang01; a++) {
		cin >> list01[a];
	}
	cout << "请输入第二个数组中的元素" << endl;
	for (int a = 0; a < liang02; a++) {
		cin >> list02[a];
	}
	merge(list01, liang01, list02, liang02,list03);
	system("pause");
	cout << "task 5:" << endl;
	char s1[80], s2[80];
	cout << "Enter the first string:" << endl;
	cin >> s1;
	cout << "Enter the second string:" << endl;
	cin >> s2;
	cout << "indexof(“" << s1 << "”，“" << s2 << "”)" << "is" << indexof(s1, s2) << endl;
	system("pause");
	cout << "task 6:" << endl;
	char s[80];
	cout << "Enter a string:";
	cin >> s;
	int counts[27];
	for (int cou = 0; cou < 27; cou++) {
		counts[cou] = 0;
	}
	count(s, counts);
	system("pause");
	return 0;
}

