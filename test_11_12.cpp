//#include<iostream>
//using namespace std;
//
////建议在继承中析构函数定义成虚函数
//class Person
//{
//public:
//	virtual ~Person(){ cout << "~Person()" << endl; }
//	
//};
//
//class Student : public Person
//{
//public:
//	//析构函数名会被处理成destructor,所以这里析构函数完成虚函数重写
//	virtual ~Student() { cout << "~Student()" << endl; }
//};
//
//int main()
//{
//	Person* ptr1 = new Person;
//	delete ptr1;
//
//	Person* ptr2 = new Student;
//	delete ptr2;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Car
//{
//public:
//	virtual void Drive(){}
//};
//
//class Benz : public Car
//{
//public:
//	//override检查子类虚函数是否完成重写,没被重写就会报错
//	virtual void Drive() override { cout << "Benz- 舒适" << endl; }
//};
//
//int main()
//{
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////存在纯虚函数，叫做抽象类或者接口类
//class Car
//{
//public:
//	virtual void Drive() = 0;//构成纯虚函数
//};
//
//class BMW : public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "操控-好开" << endl;
//	}
//};
//
//class Benz : public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-豪华舒适" << endl;
//	}
//};
//
//int main()
//{
//	//Car c;
//	//BMW b;
//	Car* ptr = new BMW;
//	ptr->Drive();
//
//	ptr = new Benz;
//	ptr->Drive();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket() { cout << "Person::买票-全价" << endl; }
//	virtual void Func1()
//	{ 
//		cout << "Person::Func1()" << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "Student::买票-半价" << endl; }
//	virtual void Func2() 
//	{ 
//		cout << "Student::Func2()" << endl;
//	}
//};
//
//typedef void(*VFPTR)();
////打印虚函数表
////void PrintVFTable(VFPTR table[])
//void PrintVFTable(VFPTR* table)
//{
//	for (size_t i = 0; table[i] != nullptr;++i)
//	{
//		printf("vft[%d]:%p->", i,table[i]);
//		//table[i]();
//		VFPTR pf = table[i];
//		pf();
//	}
//	cout << endl;
//}
//
//class Base1
//{
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1 = 1;
//};
//
//class Base2
//{
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2 = 2; 
//};
//
//class Derive : public Base1, public Base2
//{
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d = 3;
//};
//
//int main()
//{
//	//同一个类型的对象共用一个虚表
//	Person p1;
//	Person p2;
//	//VS环境下，不管是否完成重写，子类虚表跟父类虚表都不是同一个
//	Student s1;
//	Student s2;
//
//	//取对象头部虚函数表指针传递过去
//	PrintVFTable((VFPTR*)*(int*)&s1);
//
//	PrintVFTable((VFPTR*)*(int*)&p1);
//
//	Derive d;
//	//cout << sizeof(d) << endl;
//
//	//PrintVFTable((VFPTR*)(*(int*)&b));
//	////PrintVFTable((VFPTR*)(*(int*)(ptr2)));
//
//	////利用切片的偏移来让指针指向需要获取字节的部分
//	//Base2* ptr2 = &d;
//	//PrintVFTable((VFPTR*)(*(int*)(ptr2)));
//
//	//符合多态，去指向对象虚函数表中去找func1地址调用
//	Base1* ptr1 = &d;
//	ptr1->func1();
//
//	Base2* ptr2 = &d;
//	ptr2->func2();
//
//	return 0;
//}

