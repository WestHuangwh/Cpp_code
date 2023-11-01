//#include<iostream>
//using namespace std;
//
//void Test()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//
//	int* p2 = new int;
//	//申请5个int的数组
//	int* p3 = new int[5];
//
//	//申请1个int对象,初始化为5
//	int* p4 = new int(5);
//
//	//C++11支持new[] 用{}初始化，C++98不支持
//	int* p5 = new int[5] {1, 2, 3};
//
//	free(p1);
//	delete p2;
//	delete[] p3;
//	delete p4;
//	delete[] p5;
//
//	//针对内置类型，new/delete跟malloc/free没有本质的区别，只有用法的区别
//	//new/delete 用法简化了
//
//	//结论：new/delete 是为自定义类型准备的、不仅在申请出来，
//	//还会调用构造函数初始化和析构函数清理
//	//new失败,不需要检查返回值，它失败总是抛异常
//	//new/delete的底层实现其实还是与malloc/free有关，但是new/delete可以抛异常
//
//	//new -> operator new + 构造函数
//	//默认情况下operator new 使用全局库里面
//	//每个类都可以去实现自己的专属operator new  new这个类的对象，它就会调自己实现这个operator newS
//}
//
//int main()
//{
//	Test();
//	return 0;
//}