#include <iostream>
#include<iomanip>
using namespace std;
//实验报告
int main()
{// task 1:
	int k=0;
	int i = k + 1;
	cout << i++ << endl;
	 i = 1;
	 cout << i++ << endl;
	cout << "welcome to c++" << endl;
	system("pause");
	// task 2:
	int ban, gao;
	cin >> ban>> gao;
	double pai = 3.14;
	cout << pai * ban * ban * gao / 3 << endl;
	system("pause");
	// task 3:
	cout << "char length" << sizeof(char) << endl;
	cout << "int length" << sizeof(int) << endl;
	system("pause");
	// task 4:
	unsigned int testUnint = 65534;
	cout << "output in unsigned int 1 type:" << testUnint << endl;
	cout << "output in char type:!" << static_cast<char>(testUnint)<< endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in  int  type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" <<setprecision(4)<< static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int  type:" << hex<<testUnint << endl;
	cout << "output in oct unsigned int  type:" << oct << testUnint << endl;

	system("pause");
	// task 5:
	double hua;
	cin >> hua;
	double she = (hua - 32) / 1.8;
	cout << she;
	system("pause");
    return 0;
}

