using namespace std;
class Student {
public:
	void display();
	Student();
	Student(int a,const char b[4], char c);
	void set_value(int a, const char b[4], char c);
private:
	int num;
	char name[20];
	char sex;
};//第二个任务的类
