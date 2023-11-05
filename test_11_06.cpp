#include<iostream>

using namespace std;

class Person
{
protected:
	string _name;//姓名
	string _sex;//性别
	int _age;//年龄
};

class Student : public Person
{
public:
	int _No;//学号

};

int main()
{
	Student sobj;

	//1.子类对象可以赋值给父类对象/指针/引用
	Person pobj = sobj;
	Person* pp = &sobj;
	Person& rp = sobj;

	return 0;
}