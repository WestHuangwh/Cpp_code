//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//protected:
//	string _name;//����
//	string _sex;//�Ա�
//	int _age;//����
//};
//
//class Student : public Person
//{
//public:
//	int _No;//ѧ��
//	
//};
//
//int main()
//{
//	Student sobj;
//
//	//��Ƭ
//	//1.���������Ը�ֵ���������/ָ��/����
//	//���⣬������Ȼ�ǲ�ͬ���ͣ����ǲ�����ʽ����ת��
//	//��������һ������֧�֣��﷨��Ȼ֧�ֵ�
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	return 0;
//}
//


//#include<iostream>
//#include<string>
//
//using namespace std;
//
////��Ԫ��ϵ���ܼ̳У�Ҳ����˵������Ԫ���ܷ�������˽�кͱ�����Ա
//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//
//	string _name;//����
//};
//
//class Student : public Person
//{
//	friend void Display(const Person& p, const Student& s);
//
//protected:
//	int _stuNum;//ѧ��
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//
//int main()
//{
//	Person pp;
//	Student ss;
//	Display(pp, ss);
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	string _name;//����
//}; 
//class Student : virtual public Person
//{
//protected:
//	int _num;//ѧ��
//};
//
//class Teacher : virtual public Person
//{
//protected:
//	int _id;//ְ�����
//};
//class Assistant : public Student,public Teacher
//{
//protected:
//	string _majorCourse;//���޿γ�
//};
//int main()
//{
//	Assistant at;
//	//��������̳н���˶����Ժ���������
//	at._name = "С��";
//	at.Student::_name = "����";
//	at.Teacher::_name = "����";
//	return 0;
//}

