#include<bits/stdc++.h>
using namespace std;
/* 请在这里填写答案 */
class Student
{
	int num;
	string name;
	char sex;
public:
	Student(int a,string b,char c);
	~Student()
	{
		cout<<"Destructor called."<<endl;
	}
	void display();
};
Student::Student(int a,string b,char c):num(a),name(b),sex(c){}
void Student::display()
{
	cout<<"Constructor called."<<endl;
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<endl;
}
int main()
{Student stud1(10010,"Wang_li",'f');
	stud1.display();
	Student stud2(10011,"Zhang_fun",'m');
	stud2.display();
	return 0;
}

