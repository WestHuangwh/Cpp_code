#include<iostream>
using namespace std;
class A
{
public:
	A(int a = 0)
	{
		_a = a;
		cout <<" A(int a = 0)-> "<<_a << endl;

	}

	A(const A&aa)
	{
		_a = aa._a;
		cout << "A(const A&aa)->" << _a << endl;
	}
	~A()
	{
		cout << "~A()" <<_a<< endl;
	}

private:
	int _a;

};
int main()
{
	static A aa0;
	A aa1(1);
	A aa2(2);

	
	return 0;
}