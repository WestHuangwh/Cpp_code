#include<iostream>

using namespace std;

class Person
{
protected:
	string _name;//����
	string _sex;//�Ա�
	int _age;//����
};

class Student : public Person
{
public:
	int _No;//ѧ��

};

int main()
{
	Student sobj;

	//1.���������Ը�ֵ���������/ָ��/����
	Person pobj = sobj;
	Person* pp = &sobj;
	Person& rp = sobj;

	return 0;
}