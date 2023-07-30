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


#include<iostream>
using namespace std;

class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};

//这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << _name << " " << _gender << " " << _age << endl;

}
int main()
{


	return 0;
}