//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket(){ cout << "��Ʊ-ȫ��" << endl; }
//
//};
//
//class Student : public Person
//{
//public:
//	//�麯����д�����߽�������,��������--��ͬ��������������������ֵ��
//	//��������д���������ع�ϵ
//	//����1�����ຯ������virtual�����ɹ�����д��ʵ����ü��ϣ�
//	//����2����д��Э�䡣����ֵ���Բ�ͬ��Ҫ������Ǿ��и��ӹ�ϵ��ָ���������
//	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }
//};
//
//class Soldier : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "������Ʊ" << endl; }
//};
//
////��̬����������
////1���麯����д
////2������ָ���������ȥ�����麯��
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
////�ܽ᣺��̬�ı���ԭ�����϶�̬��������������ô����ʱ��
////�ᵽָ������������ҵ���Ӧ�̵��麯����ַ�����е���
//
////��ͨ�������ã���������ʱȷ�������ĵ�ַ������ʱֱ�ӵ���