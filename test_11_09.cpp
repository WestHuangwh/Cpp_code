//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket(){ cout << "买票-全价" << endl; }
//
//};
//
//class Student : public Person
//{
//public:
//	//虚函数重写，或者叫做覆盖,满足条件--三同（函数名、参数、返回值）
//	//不符合重写，就是隐藏关系
//	//特例1：子类函数不加virtual，依旧构成重写（实际最好加上）
//	//特例2：重写的协变。返回值可以不同，要求必须是具有父子关系的指针或者引用
//	virtual void BuyTicket() { cout << "买票-半价" << endl; }
//};
//
//class Soldier : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "优先买票" << endl; }
//};
//
////多态两个条件：
////1、虚函数重写
////2、父类指针或者引用去调用虚函数
//
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person ps;
//	Student st;
//	Soldier sd;
//
//	Func(ps);
//	Func(st);
//	Func(sd);
//
//	return 0;
//}
//
//
////总结：多态的本质原理，符合多态的两个条件，那么调用时，
////会到指向对象的虚表中找到对应短的虚函数地址，进行调用
//
////普通函数调用，编译链接时确定函数的地址，运行时直接调用