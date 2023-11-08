//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//protected:
//	string _name;//姓名
//	string _sex;//性别
//	int _age;//年龄
//};
//
//class Student : public Person
//{
//public:
//	int _No;//学号
//	
//};
//
//int main()
//{
//	Student sobj;
//
//	//切片
//	//1.子类对象可以赋值给父类对象/指针/引用
//	//特殊，这里虽然是不同类型，但是不是隐式类型转换
//	//这里算是一个特殊支持，语法天然支持的
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
////友元关系不能继承，也就是说基类友元不能访问子类私有和保护成员
//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//
//	string _name;//姓名
//};
//
//class Student : public Person
//{
//	friend void Display(const Person& p, const Student& s);
//
//protected:
//	int _stuNum;//学号
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
//	string _name;//姓名
//}; 
//class Student : virtual public Person
//{
//protected:
//	int _num;//学号
//};
//
//class Teacher : virtual public Person
//{
//protected:
//	int _id;//职工编号
//};
//class Assistant : public Student,public Teacher
//{
//protected:
//	string _majorCourse;//主修课程
//};
//int main()
//{
//	Assistant at;
//	//菱形虚拟继承解决了二义性和数据冗余
//	at._name = "小张";
//	at.Student::_name = "张三";
//	at.Teacher::_name = "李四";
//	return 0;
//}

