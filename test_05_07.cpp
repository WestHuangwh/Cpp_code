
////函数重载
//#include<iostream>
//using namespace std;
////C++允许在同一作用域中声明几个功能类似的同名函数，这些同名函数的形参列表必须有至少一个不同，如下面所列
//// 
////参数个数 或 参数类型 或 参数顺序
////上面的必须有至少一项是不同的，才能构成函数重载
//
////注意：返回值不同不构成重载，且调用时也无法区分
//
//
////下面两个参数顺序不同
//void func(int i, char ch)
//{
//	cout << "void func(int i,char ch)" << endl;
//}
//
//void func(char ch, int i)
//{
//	cout << "void func(char ch,int i)" << endl;
//}
//
////int main()
////{
////	func(3, 'a');
////	func('b', 5);
////	return 0;
////}
//
////利用函数重载来进行两个数的交换
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void Swap(double* p1, double* p2)
//{
//	double tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
////函数重载的意义就是让用的地方很方便，就像用同一个函数一样。
//int main()
//{
//	int a = 3, b = 5;
//	double c = 4.4, d = 3.5;
//	Swap(&a, &b);
//	Swap(&c, &d);
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//
//	return 0;
//}


////函数引用
//#include<iostream>
//using namespace std;
////引用不是新定义一个变量，而是给已存在变量取了一个别名，编译器不会为引用变量开辟内存空间
////它和它引用的变量共用同一块内存空间
////注意:引用类型必须和引用实体是同种类型的
//int main()
//{
//	int a = 0;
//	int& b = a;//&在这里的作用是引用
//	cout << &b << endl;//&在这里的作用是取地址
//	cout << &a << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 1;
//	//int& b;//1.引用必须初始化，否则就会语法错误
//	int& b = a;//2.一个变量可以有多个别名
//	int& c = a;
//	int& d = c;//给a的别名c取别名为d
//	++a;
//	int x = 10;
//	//3.引用一旦引用一个实体，再也不能引用其他实体
//	b = x;//此处是x复制给b
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
////引用的使用场景——1.做参数--a、输出型参数 b、大对象传参，提高效率
//			   //2.做返回值
//void Swap(int& r1, int& r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//
//typedef struct SeqList
//{
//
//}SL;
//void SLPushBack(SL& phead, int x)//用了引用
//{}
//
//
//typedef struct SListNode
//{
//	//..
//}SLTNode,*PSLTNode;
//void SListPushBack(PSLNode& phead, int x)//关于替换二级指针传参方法的引用
//{}
//
//int main()
//{
//	int a = 5, b = 6;
//	Swap(a, b);
//	SL sl;
//	SLPushBack(s, 1);
//	SLPushBack(s, 2);
//	SLPushBack(s, 3);
//
//	SLTNode* list = NULL;
//	SListPushBack(list, 1);
//	SListPushBack(list, 2);
//	SListPushBack(list, 3);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//////引用的使用场景——1.做参数--a、输出型参数 b、大对象传参，提高效率
////			   //2.做返回值--a.输出型返回对象，调用者可以修改返回对象 b.减少拷贝，提高效率
//
////注意：传值返回统一会生成一个返回对象的拷贝作为函数调用的返回值
////int Count()
////{
////	int n = 0;
////	n++;
////
////	return n;
////}
//
//int& Count()
//{
//	static int n = 0;
//	n++;
//
//	return n;
//}
//
//int main()
//{
//	int ret = Count();
//	cout << ret << endl;
//	return 0;
//}
////总结：出了函数的作用域，返回对象就销毁了，那么一定不能用引用返回，一定要用传值返回


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int& b = a;//取a的别名
//	//打印a和b的类型
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//
//	//权限不能放大
//	const int c = 20;
//	//int& d = c;//错误示例
//	//权限的平移
//	const int& d = c;
//
//	//权限可以缩小
//	int e = 20;
//	const int& f = e;
//
//	int ii = 1;
//	double dd = (double)ii;
//	//类型转换，并不会改变原变量类型，中间都会产生一个临时变量
//	//double&rdd = ii;
//	const double& rdd = ii;
//
//	const int& x = 10;
//	//int& x = 10;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//void func1(int n)
//{}
//
////void func2(int& n)
////如果使用引用传参，函数内如果不改变n,那么建议尽量使用const引用传参
//void func2(const int& n)
//{
//
//}
//int main()
//{
//	int a = 10;
//	const int b = 20;
//	func1(a);
//	func1(b);
//	func1(30);
//
//	func2(a);
//	func2(b);
//	func2(30);
//	return 0;
//}


//C语言不能进行函数重载 ，而C++能进行函数重载，是因为它们两个的函数名称修饰规则不一样