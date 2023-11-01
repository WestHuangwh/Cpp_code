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
////泛型编程 -- 模板
////typename后面类型名字T是随便取，Ty、K、V，一般是大写字母或者单词首字母大写
//// T代表的是一个模板类型（虚拟类型）
////template<class T>//此处class 和typename没有区别，只有少数情况有区别
//template<typename T>//模板参数（模板类型） -- 类似函数参数（参数对象）
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
//////C++库里有swap这个交换函数，直接用就行了
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
////	//Add(1.1,2)//推演实例化矛盾，然后报错
////	//编译器自动推演，隐式实例化
////	cout << Add(1, 2) << endl;
////	cout << Add((int)1.1, 2) << endl;
////	cout << Add(1.1, (double)2) << endl;
////
////	cout << endl;
////	//显示实例化
////	cout << Add<int>(1.1, 2) << endl;
////	cout << Add<double>(1.1, 2) << endl;
////
////	//必须显示实例化才能调用
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
//		//1.开新空间
//		//2.拷贝数据
//		//3.释放旧空间
//		T* tmp = new T[newCapacity];//用new从堆上申请空间
//		if (_a)
//		{
//			memcpy(tmp, _a, sizeof(T) * _top);//把旧空间的数据拷贝到新空间里
//			delete[] _a;//再释放掉旧空间，注意delete要配对清理
//		}
//		_a = tmp;//把新空间的地址赋给_a
//		_capacity = newCapacity;
//	}
//	_a[_top] = x;
//	++_top;
//}
////模板不支持分离编译。就是不支持声明和定义分为别放在.h和.cpp里,因为那会导致报错
////模板在同一个文件中，是可以声明和定义分离的
//
//int main()
//{
//	try
//	{
//		//类模板都是显示实例化
//		//虽然他们用了一个类模板，但是他们是两个不同的类型
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