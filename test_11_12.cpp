//#include<iostream>
//using namespace std;
//
////�����ڼ̳�����������������麯��
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
//	//�����������ᱻ�����destructor,��������������������麯����д
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
//	//override��������麯���Ƿ������д,û����д�ͻᱨ��
//	virtual void Drive() override { cout << "Benz- ����" << endl; }
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
////���ڴ��麯����������������߽ӿ���
//class Car
//{
//public:
//	virtual void Drive() = 0;//���ɴ��麯��
//};
//
//class BMW : public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "�ٿ�-�ÿ�" << endl;
//	}
//};
//
//class Benz : public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-��������" << endl;
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
//	virtual void BuyTicket() { cout << "Person::��Ʊ-ȫ��" << endl; }
//	virtual void Func1()
//	{ 
//		cout << "Person::Func1()" << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "Student::��Ʊ-���" << endl; }
//	virtual void Func2() 
//	{ 
//		cout << "Student::Func2()" << endl;
//	}
//};
//
//typedef void(*VFPTR)();
////��ӡ�麯����
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
//	//ͬһ�����͵Ķ�����һ�����
//	Person p1;
//	Person p2;
//	//VS�����£������Ƿ������д���������������������ͬһ��
//	Student s1;
//	Student s2;
//
//	//ȡ����ͷ���麯����ָ�봫�ݹ�ȥ
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
//	////������Ƭ��ƫ������ָ��ָ����Ҫ��ȡ�ֽڵĲ���
//	//Base2* ptr2 = &d;
//	//PrintVFTable((VFPTR*)(*(int*)(ptr2)));
//
//	//���϶�̬��ȥָ������麯������ȥ��func1��ַ����
//	Base1* ptr1 = &d;
//	ptr1->func1();
//
//	Base2* ptr2 = &d;
//	ptr2->func2();
//
//	return 0;
//}

