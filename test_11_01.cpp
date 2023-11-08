//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person//基类或者父类
//{
//protected:
//	string _name = " 小李子";//姓名
//	int _num = 111;//身份证号
//};
//
////派生类或者子类
////在继承体系中基类和派生类都有独立的作用域
//class Student : public Person
//{
//public://公开权限，既可以在类外面访问，又可以在类外面访问
//	void Print()
//	{
//		cout << "姓名：" << _name << endl;
//		cout << "学号：" << _num << endl;
//
//		//如果不加域限定符，那么就会隐藏父类的同名成员，而优先使用子类的同名成员，
//		//（在子类成员函数里，可以使用基类::基类成员 来显示访问父类的同名成员）
//		cout << "身份证号：" << Person::_num << endl;
//
//	}
//protected://保护权限，只能在类里访问
//	int _num = 999;//学号
//};
//
////1.两个fun构成函数重载？ -- 不对，因为函数重载要求在同一作用域
////2.两个func构成隐藏关系
//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		cout << "funcc(int i)->" << i << endl;
//	}
//};
//
//void Test()
//{
//	B b;
//	b.fun(10);
//	b.A::fun();//用(基类::同名成员函数) 来显示访问父类的同名成员函数
//}
//
//int main()
//{
//	Student s1;
//	s1.Print();
//
//	Test();
//	return 0;
//}
