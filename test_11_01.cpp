//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person//������߸���
//{
//protected:
//	string _name = " С����";//����
//	int _num = 111;//���֤��
//};
//
////�������������
////�ڼ̳���ϵ�л���������඼�ж�����������
//class Student : public Person
//{
//public://����Ȩ�ޣ��ȿ�������������ʣ��ֿ��������������
//	void Print()
//	{
//		cout << "������" << _name << endl;
//		cout << "ѧ�ţ�" << _num << endl;
//
//		//����������޶�������ô�ͻ����ظ����ͬ����Ա��������ʹ�������ͬ����Ա��
//		//���������Ա���������ʹ�û���::�����Ա ����ʾ���ʸ����ͬ����Ա��
//		cout << "���֤�ţ�" << Person::_num << endl;
//
//	}
//protected://����Ȩ�ޣ�ֻ�����������
//	int _num = 999;//ѧ��
//};
//
////1.����fun���ɺ������أ� -- ���ԣ���Ϊ��������Ҫ����ͬһ������
////2.����func�������ع�ϵ
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
//	b.A::fun();//��(����::ͬ����Ա����) ����ʾ���ʸ����ͬ����Ա����
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
