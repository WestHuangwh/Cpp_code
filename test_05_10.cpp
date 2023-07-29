//#include<iostream>
//using namespace std;
//
////ADD两个变量的宏函数--在预处理的时候会被替换
//#define ADD(a,b) ((a)+(b)) 
////预处理--替换
//int main()
//{
//	ADD(1, 2);//((1)+(2));
//
//	if (ADD(1, 2))
//	{
//	}
//
//	ADD(1, 2) * 3;
//	int x = 1, y = 2;
//	int ret = ADD(x | y, x & y);
//	cout << ret << endl;
//
//	return 0;
//}


////内联函数--这是C++为了完善C语言宏函数的一些缺点而产生的
//// inline几乎解决宏函数的缺点，同时 也兼具它的优点
////C++中基本不使用宏，《effective C++》中一个条例说明：尽量使用const， enum， inline 来替代宏
//
//#include<iostream>
//using namespace std;
//inline int Add(int a, int b)
//{
//	return a + b;
//}
////inline 符合条件的情况下，在调用的地方展开
////内联函数不建议声名与定义分离，因为这样会导致链接错误
//
//int main()
//{
//	cout<<Add(1, 2)<<endl;//((1)+(2));
//
//	if (Add(1, 2))
//	{
//		cout << Add(1, 2) << endl;
//	}
//
//	cout << Add(1, 2) * 3 << endl;
//	int x = 1, y = 2;
//	cout << Add(x | y, x & y) << endl;
//	return 0;
//}

