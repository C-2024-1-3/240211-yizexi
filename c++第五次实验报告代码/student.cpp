#include<iostream>
#include"student.h"
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
Student::Student(int a,const char b[4], char c) {
	num = a;
	for (int d = 0; d < sizeof(b); d++) {
		name[d] = b[d];
	}
	sex = c;
}
Student::Student() {};
void Student::set_value(int a,const char b[4], char c) {
	num = a;
	for (int d = 0; d < sizeof(b); d++) {
		name[d] = b[d];
	}
	sex = c;
};