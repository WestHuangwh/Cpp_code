//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//Ĭ�Ϲ��캯����Ϊ��a.�޲ι��캯�� b.ȫȱʡ���캯�� c.����ûд�����Ǳ�����Ĭ�����ɵĹ��캯��
//	Date(int year = 1, int month = 1, int day = 1)//����һ��Ĭ�Ϲ��캯�����ص��ǲ��ò����Ϳ��Ե��õ�
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year = 1;//��
//	int _month = 1;//��
//	int _day = 1;//��
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
//	//Ĭ�Ϲ��캯����Ϊ��a.�޲ι��캯�� b.ȫȱʡ���캯�� c.����ûд�����Ǳ�����Ĭ�����ɵĹ��캯��
//	Date(int year = 1, int month = 1, int day = 1)//����һ��Ĭ�Ϲ��캯�����ص��ǲ��ò����Ϳ��Ե��õ�
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
//	int _year = 1;//��
//	int _month = 1;//��
//	int _day = 1;//��
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
//	//�������Ϳ���ֱ������������㣬������֪��Ҫ�������
//	//�Զ��������޷�ֱ��ʹ���������������Ҳ��֪��Ҫ������㡣��֧�֣��Լ�ʵ����������ɡ�
//	cout << d1.operator==(d2) << endl;
//	cout << (d1 == d2) << endl;//�˴��漰��������ȼ������⣬���Լ�������
//	return 0;
//}
