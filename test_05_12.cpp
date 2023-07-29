//#include<iostream>
//using namespace std;
//
//int TestAuto()
//{
//	return 10;
//}
////int main()
////{
////	int a = 10;
////	auto b = a;
////	auto c = 'a';//自动推导类型
////	auto d = TestAuto();
////	cout << typeid(b).name() << endl;
////	cout << typeid(c).name() << endl;
////	cout << typeid(d).name() << endl;
////
////	return 0;
////}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6 };
//	char arr[] = "abcdef";
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		cout << a[i] <<" ";
//
//	}
//	cout << endl;
//
//	//范围for
//	//自动依次取a的数据，赋值给e
//	//自动迭代，自动判断结束
//	for (auto e : a)
//	{
//		cout << e <<" ";
//
//	}
//	cout << endl;
//	for (auto e : arr)
//	{
//		cout << e << " ";
//	}
//
//	cout << endl;
//}


//#include<iostream>
//using namespace std;
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	int* p = NULL;
//	f(0);
//	f(NULL);
//	f(p);
//
//	//C++11 nullptr 是一个关键字 替代NULL
//	f(nullptr);
//	int* ptr = nullptr;
//
//	return 0;
//}


