#include<iostream>
using namespace std;

class Date
{
public:
	//构造函数
	//Date()
	//{
	//	_year = 1;
	//	_month = 1;
	//	_day = 1;

	//}

	//默认构造函数分为：a.无参构造函数 b.全缺省构造函数 c.我们没写，但是编译器默认生成的构造函数
	Date(int year = 1, int month = 1, int day = 1)//这是一个默认构造函数，特点是不用参数就可以调用的
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
	int _year;//年
	int _month;//月
	int _day;//日
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


//编译器默认生成的构造函数的特点：
//a.内置类型不做处理，比如int char double这些语法自带的类型
//b.自定义类型会去调用它（自定义类型成员变量）的默认构造函数