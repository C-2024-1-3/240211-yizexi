#include <iostream>
#include"student.h"
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void ding() {
		cout << "请输入设定的时间" << endl;
		cin >> hour >> minute >> sec;
	}
	void show() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};//第一个任务的类
class ti {
	int length;
	int width;
	int height;
public:
	void ding() {
		cout << "请分别输入长方体的长，宽，高" << endl;
		cin >> length >> width >> height;
	}
	void ji() {
		cout << "长方体的体积为：" << length * width * height << endl;
	}
};//第三个任务的类
class student {
public:
	int card;
	int mark;
};//这是第四个任务的类
class Point {
	int x;
	int y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "这个点的坐标为：(" << x << "," << y << ")" << endl;
	}
};//第五个任务的类
int max(student* a) {
	int max=a[0].mark;
	for (int b = 0; b < 5; b++) {
		if (a[b].mark > max) {
			max = a[b].mark;
		}
	}
	for (int b = 0; b < 5; b++) {
		if (a[b].mark == max) {
			return b;
		}
	}
}//第四个任务的max函数
int main()
{   /*cout << "task 1:" << endl;
    Time a;
    a.ding();
	a.show();
	system("pause");*/
	cout << "task 2:" << endl;
	Student stud;
	Student stud1(007,"tcg",'m');
	stud.set_value(006, "ocg", 'n');
	stud.display();
	stud1.display();
	system("pause");
	//cout << "task 3:" << endl;
	//ti a1, a2, a3;
	//a1.ding(); a2.ding(); a3.ding();
	//a1.ji();a2.ji();a3.ji();
	//system("pause");
	//cout << "task 4:" << endl;
	//student yu[5] = { {1},{2},{3},{4},{5} };
	//srand((unsigned)time(NULL));
	//for (int i = 0; i < 5; i++) {
	//	yu[i].mark = rand() % 100;
	//	cout << yu[i].mark << endl;
	//};
	//cout << "分数最高的学生学号为：" << yu[max(yu)].card << endl;
	//system("pause");
	//cout << "task 5:" << endl;
	//Point dian;
	//dian.display();
	//dian.setPoint(5, 10);
	//dian.display();
	//system("pause");
	return 0;
}