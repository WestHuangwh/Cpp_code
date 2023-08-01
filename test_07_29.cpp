//#include<iostream>
//using namespace std;
//
//class Stack
//{
//public://公开
//	void Init()
//	{
//		a = nullptr;
//		top = capacity = 0;
//	}
//
//	void Push(int x)
//	{
//
//	}
//
//private://私有
//	int* a;
//	int top;
//	int capacity;
//
//};
//
//int main()
//{
//	Stack st;
//	st.Init();
//
//	return 0;
//}
//


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void PrintPersonInfo();//声明
//private:
//	char _name[20];//这是声明
//	char _gender[3];
//	int _age;
//};
//
////这里需要指定PrintPersonInfo是属于Person这个类域
//void Person::PrintPersonInfo()//函数定义
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//
//}
//int main()
//{
//
//	return 0;
//}


//#include<iostream>
//
//class A
//{
//public:
//	void f();
//private:
//	char a;
//	int _a;
//};
//
//class A2
//{
//public:
//	void f2() {};//成员函数不占用类的空间
//};
//
//class A3//空类占一个字节的大小
//{};
//
//int main()
//{
//	std::cout << sizeof(A) << std::endl;
//	std::cout << sizeof(A2) << std::endl;
//	std::cout << sizeof(A3) << std::endl;
//
//	//没有成员变量的类对象，给一个字节的大小，占位且不存储实际数据，标识对象存在
//	A2 aa2;
//	A3 aa3;
//	std::cout << &aa2 << std::endl;
//	std::cout << &aa3 << std::endl;
//
//	return 0;
//}




////驼峰法命名规则：
////a、函数名、类名等所有单词首字母大写，如DateMgr
////b、变量首字母小写，后面单词首字母大写，如dateMgr
////c、成员变量，首字母前面加_   如_dateMgr
//
////this指针存在哪里？ --栈，因为它是一个形参
////优化：取决于编译器
////vs下面传递this指针，是通过ecx寄存器传递的，这样this访问变量提高效率
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void Init(int year,int month,int day)
//	{
//		/*this->*/_year = year;//this指针在这里没有显式实现，编译器的使用是默认加上this指针的
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;//年
//	int _month;//月
//	int _day;//日
//};
//
//int main()
//{
//	Date s1;
//	s1.Init(2022, 7, 30);
//	
//	Date s2;
//	s2.Init(2022, 7, 31);
//
//	s1.Print();
//	s2.Print();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//构造函数
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//
//	//}
//
//	//默认构造函数分为：a.无参构造函数 b.全缺省构造函数 c.我们没写，但是编译器默认生成的构造函数
//	Date(int year = 1, int month = 1, int day = 1)//这是一个默认构造函数，特点是不用参数就可以调用的
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;//年
//	int _month;//月
//	int _day;//日
//};
//
//int main()
//{
//	Date d1(2022, 7, 30);
//	Date d2;
//	Date d3(2022);
//
//
//	d1.Print();
//	d2.Print();
//	d3.Print();
//
//	return 0;
//}
//
//
////编译器默认生成的构造函数的特点：
////a.内置类型不做处理，比如int char double这些语法自带的类型
////b.自定义类型会去调用它（自定义类型成员变量）的默认构造函数
//
//
////析构函数和构造函数类似
////a.内置函数不做处理
////b.自定义类型会自动去调用它的默认析构函数
////c.没有返回值且不用写void
////函数名等于~+类名，比如  ~Date()