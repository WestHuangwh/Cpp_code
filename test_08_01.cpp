#include<iostream>
using namespace std;

class Date
{
public:
	//���캯��
	//Date()
	//{
	//	_year = 1;
	//	_month = 1;
	//	_day = 1;

	//}

	//Ĭ�Ϲ��캯����Ϊ��a.�޲ι��캯�� b.ȫȱʡ���캯�� c.����ûд�����Ǳ�����Ĭ�����ɵĹ��캯��
	Date(int year = 1, int month = 1, int day = 1)//����һ��Ĭ�Ϲ��캯�����ص��ǲ��ò����Ϳ��Ե��õ�
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;//��
	int _month;//��
	int _day;//��
};

int main()
{
	Date d1(2022, 7, 30);
	Date d2;
	Date d3(2022);


	d1.Print();
	d2.Print();
	d3.Print();

	return 0;
}


//������Ĭ�����ɵĹ��캯�����ص㣺
//a.�������Ͳ�����������int char double��Щ�﷨�Դ�������
//b.�Զ������ͻ�ȥ���������Զ������ͳ�Ա��������Ĭ�Ϲ��캯��