//#include<iostream>
//using namespace std;
//
//class Stack
//{
//public://����
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
//private://˽��
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
//	void PrintPersonInfo();//����
//private:
//	char _name[20];//��������
//	char _gender[3];
//	int _age;
//};
//
////������Ҫָ��PrintPersonInfo������Person�������
//void Person::PrintPersonInfo()//��������
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
//	void f2() {};//��Ա������ռ����Ŀռ�
//};
//
//class A3//����ռһ���ֽڵĴ�С
//{};
//
//int main()
//{
//	std::cout << sizeof(A) << std::endl;
//	std::cout << sizeof(A2) << std::endl;
//	std::cout << sizeof(A3) << std::endl;
//
//	//û�г�Ա����������󣬸�һ���ֽڵĴ�С��ռλ�Ҳ��洢ʵ�����ݣ���ʶ�������
//	A2 aa2;
//	A3 aa3;
//	std::cout << &aa2 << std::endl;
//	std::cout << &aa3 << std::endl;
//
//	return 0;
//}




////�շ巨��������
////a�������������������е�������ĸ��д����DateMgr
////b����������ĸСд�����浥������ĸ��д����dateMgr
////c����Ա����������ĸǰ���_   ��_dateMgr
//
////thisָ�������� --ջ����Ϊ����һ���β�
////�Ż���ȡ���ڱ�����
////vs���洫��thisָ�룬��ͨ��ecx�Ĵ������ݵģ�����this���ʱ������Ч��
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void Init(int year,int month,int day)
//	{
//		/*this->*/_year = year;//thisָ��������û����ʽʵ�֣���������ʹ����Ĭ�ϼ���thisָ���
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
//	int _year;//��
//	int _month;//��
//	int _day;//��
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
//	//���캯��
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//
//	//}
//
//	//Ĭ�Ϲ��캯����Ϊ��a.�޲ι��캯�� b.ȫȱʡ���캯�� c.����ûд�����Ǳ�����Ĭ�����ɵĹ��캯��
//	Date(int year = 1, int month = 1, int day = 1)//����һ��Ĭ�Ϲ��캯�����ص��ǲ��ò����Ϳ��Ե��õ�
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
//	int _year;//��
//	int _month;//��
//	int _day;//��
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
////������Ĭ�����ɵĹ��캯�����ص㣺
////a.�������Ͳ�����������int char double��Щ�﷨�Դ�������
////b.�Զ������ͻ�ȥ���������Զ������ͳ�Ա��������Ĭ�Ϲ��캯��
//
//
////���������͹��캯������
////a.���ú�����������
////b.�Զ������ͻ��Զ�ȥ��������Ĭ����������
////c.û�з���ֵ�Ҳ���дvoid
////����������~+����������  ~Date()