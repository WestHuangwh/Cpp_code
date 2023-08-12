//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//默认构造函数分为：a.无参构造函数 b.全缺省构造函数 c.我们没写，但是编译器默认生成的构造函数
//	Date(int year = 1, int month = 1, int day = 1)//这是一个默认构造函数，特点是不用参数就可以调用的
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year = 1;//年
//	int _month = 1;//月
//	int _day = 1;//日
//};
//
//
//void func()
//{
//	Date d;
//}
//
//int main()
//{
//	func();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	int GetMonthDay(int year, int month)
//	{
//		static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			return 29;
//		}
//		else
//		{
//			return days[month];
//		}
//	}
//	//默认构造函数分为：a.无参构造函数 b.全缺省构造函数 c.我们没写，但是编译器默认生成的构造函数
//	Date(int year = 1, int month = 1, int day = 1)//这是一个默认构造函数，特点是不用参数就可以调用的
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator==(const Date& x2)
//	{
//		return _year == x2._year
//			&& _month == x2._month
//			&& _day == x2._day;
//	}
//	Date operator+=(int day)
//	{
//		_day += day;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day -= GetMonthDay(_year, _month);
//			++_month;
//			if (_month == 13)
//			{
//				_month = 1;
//				_year++;
//
//			}
//		}
//		return *this;
//
//	}
//
//private:
//	int _year = 1;//年
//	int _month = 1;//月
//	int _day = 1;//日
//};
//
////int operator-(Date x1, Date x2)
////{
////	return;
////}
//int main()
//{
//	Date d1(2023, 8, 01);
//	Date d2(2023, 8, 02);
//	//内置类型可以直接用运算符运算，编译器知道要如何运算
//	//自定义类型无法直接使用运算符，编译器也不知道要如何运算。想支持，自己实现运算符即可。
//	cout << d1.operator==(d2) << endl;
//	cout << (d1 == d2) << endl;//此处涉及运算符优先级的问题，所以加上括号
//	return 0;
//}
