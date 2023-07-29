#include<iostream>
#include<vector>

//把标准库的东西都放到std再展开在全局域内
using namespace std;
////1.项目中，尽量不要using namespace std;
////2.日常练习用using namespace std;
////3.项目，指定命名空间访问+常用展开
//
////以下就是一种常用展开，cout和endl
//using std::cout;
//using std::endl;
//
//int main()
//{
//	//指定命名空间访问
//	std::vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//
//	cout << "Hello world" << endl;
//	cout << "Hello world" << endl;
//	cout << "Hello world" << endl;
//	cout << "Hello world" << endl;
//
//
//	return 0;
//}



//int main()
//{
//	cout << "Hello C++!!!" << endl;
//
//	//特点：自动识别类型
//	int input;
//	double n;
//	//>>流提取
//	cin >> input >> n;
//
//	//<<流插入
//	cout << input <<endl;//此处的endl等同于\n;
//	//cout << input << '\n';
//	cout << n<<endl;
//	return 0;
//}




////缺省参数
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
////全缺省-顾名思意，就是全部参数缺省
//void TestFunc(int a = 10, int b = 20,int c = 30)//缺省必须从右往左连续缺省，不能间隔
//												//缺省了b就必须缺省c，缺省了a,就必须缺省b和c
//{
//	cout << "a = " << a <<endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl<<endl;
//
//}
//
////半缺省-部分参数缺省
//void TestFunc1(int a, int b=20, int c = 30)//缺省必须从右往左连续缺省，不能间隔
//										//缺省了b就必须缺省c，缺省了a,就必须缺省b和c
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//
//}
//
//struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//};
//
////注意：缺省参数不能在函数声明和定义中同时出现，如果要分离定义与声明，则只能在函数声明中出现
//void StackInit(struct Stack* ps, int capacity= 4)//此处的栈的初始化就用到了半缺省参数
//{
//	ps->a = (int *)malloc(sizeof(int) * capacity);
//	ps->top = 0;
//	ps->capacity = capacity;
//
//}
//int main()
//{
//	Func(1);
//	Func(2);
//	Func(3);
//	Func();//当没有传参数的时候，缺省参数就会起作用
//
//	TestFunc(1,2,3);//只支持从左往右给
//	//TestFunc(,,1);//不支持这种给中间的，不符合C++的语法标准
//	TestFunc();
//
//
//	//知道我一定会插入100个数据，就可以显示传参数100
//	//提前开好空间，插入数据避免扩容
//	struct Stack stl;
//	StackInit(&stl, 100);
//
//	return 0;
//}

