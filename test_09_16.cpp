//#include<iostream>
//#include<assert.h>
//
//using namespace std;
//
////void Swap(int& x, int& y)
////{
////	int tmp = x;
////	x = y;
////	y = tmp;
////}
////
////void Swap(double& x, double& y)
////{
////	double tmp = x;
////	x = y;
////	y = tmp;
////}
////
////void Swap(char& x, char& y)
////{
////	char tmp = x;
////	x = y;
////	y = tmp;
////}
//
////���ͱ�� -- ģ��
////typename������������T�����ȡ��Ty��K��V��һ���Ǵ�д��ĸ���ߵ�������ĸ��д
//// T�������һ��ģ�����ͣ��������ͣ�
////template<class T>//�˴�class ��typenameû������ֻ���������������
//template<typename T>//ģ�������ģ�����ͣ� -- ���ƺ�����������������
//void Swap(T& left, T& right)
//{
//	T tmp = left;
//	left = right;
//	right = tmp;
//}
//
////int main()
////{
////	int i = 1, j = 2;
////	double x = 1.1, y = 2.2;
////	char m = 'A', n = 'B';
////	Swap(i, j);
////	Swap(x, y);
////	Swap(m, n);
////	return 0;
////}
//
//////C++������swap�������������ֱ���þ�����
////int main()
////{
////	int i = 1, j = 2;
////	double x = 1.1, y = 2.2;
////	char m = 'A', n = 'B';
////	swap(i, j);
////	swap(x, y);
////	swap(m, n);
////	return 0;
////}
////
//
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//template<class T>
//T* Func(int n)
//{
//	T* a = new T[10];
//	return A;
//}
////int main()
////{
////	//Add(1.1,2)//����ʵ����ì�ܣ�Ȼ�󱨴�
////	//�������Զ����ݣ���ʽʵ����
////	cout << Add(1, 2) << endl;
////	cout << Add((int)1.1, 2) << endl;
////	cout << Add(1.1, (double)2) << endl;
////
////	cout << endl;
////	//��ʾʵ����
////	cout << Add<int>(1.1, 2) << endl;
////	cout << Add<double>(1.1, 2) << endl;
////
////	//������ʾʵ�������ܵ���
////	//Func<A>(10);
////
////	return 0;
////}
//
//template<typename T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 4)
//		:_a(nullptr)
//		, _capacity(0)
//		, _top(0);
//	{
//		if (capacity > 0)
//		{
//			_a = new T[capacity];
//			_capacity = capacity;
//			_top = 0;
//		}
//	}
//	~Stack()
//	{
//		delete[] _a;
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//	
//	void Pop()
//	{
//		assert(_top > 0);
//		--_top;
//	}
//
//	bool Empty()
//	{
//		return _top == 0;
//	}
//
//	const T& Top()
//	{
//		assert(_top > 0);
//		return _a[_top-1];
//	}
//
//private:
//	T* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//template<class T>
//void Stack<T>::Push(const T& x)
//{
//	if (_top == _capacity)
//	{
//		size_t newCapacity = _capacity == 0 ? 4 : _capacity * 2;
//		//1.���¿ռ�
//		//2.��������
//		//3.�ͷžɿռ�
//		T* tmp = new T[newCapacity];//��new�Ӷ�������ռ�
//		if (_a)
//		{
//			memcpy(tmp, _a, sizeof(T) * _top);//�Ѿɿռ�����ݿ������¿ռ���
//			delete[] _a;//���ͷŵ��ɿռ䣬ע��deleteҪ�������
//		}
//		_a = tmp;//���¿ռ�ĵ�ַ����_a
//		_capacity = newCapacity;
//	}
//	_a[_top] = x;
//	++_top;
//}
////ģ�岻֧�ַ�����롣���ǲ�֧�������Ͷ����Ϊ�����.h��.cpp��,��Ϊ�ǻᵼ�±���
////ģ����ͬһ���ļ��У��ǿ��������Ͷ�������
//
//int main()
//{
//	try
//	{
//		//��ģ�嶼����ʾʵ����
//		//��Ȼ��������һ����ģ�壬����������������ͬ������
//		Stack<int> st1;
//		Stack<char> st2;
//		//st1.Push(1);
//		//st1.Push(2);
//		//st1.Push(3);
//		//st1.Push(4);
//		while (!st1.Empty())
//		{
//			cout << st1.Top() << endl;
//			st1.Pop();
//
//		}
//		cout << endl;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}