
////��������
//#include<iostream>
//using namespace std;
////C++������ͬһ�����������������������Ƶ�ͬ����������Щͬ���������β��б����������һ����ͬ������������
//// 
////�������� �� �������� �� ����˳��
////����ı���������һ���ǲ�ͬ�ģ����ܹ��ɺ�������
//
////ע�⣺����ֵ��ͬ���������أ��ҵ���ʱҲ�޷�����
//
//
////������������˳��ͬ
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
////���ú��������������������Ľ���
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
////�������ص�����������õĵط��ܷ��㣬������ͬһ������һ����
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


////��������
//#include<iostream>
//using namespace std;
////���ò����¶���һ�����������Ǹ��Ѵ��ڱ���ȡ��һ������������������Ϊ���ñ��������ڴ�ռ�
////���������õı�������ͬһ���ڴ�ռ�
////ע��:�������ͱ��������ʵ����ͬ�����͵�
//int main()
//{
//	int a = 0;
//	int& b = a;//&�����������������
//	cout << &b << endl;//&�������������ȡ��ַ
//	cout << &a << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 1;
//	//int& b;//1.���ñ����ʼ��������ͻ��﷨����
//	int& b = a;//2.һ�����������ж������
//	int& c = a;
//	int& d = c;//��a�ı���cȡ����Ϊd
//	++a;
//	int x = 10;
//	//3.����һ������һ��ʵ�壬��Ҳ������������ʵ��
//	b = x;//�˴���x���Ƹ�b
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
////���õ�ʹ�ó�������1.������--a������Ͳ��� b������󴫲Σ����Ч��
//			   //2.������ֵ
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
//void SLPushBack(SL& phead, int x)//��������
//{}
//
//
//typedef struct SListNode
//{
//	//..
//}SLTNode,*PSLTNode;
//void SListPushBack(PSLNode& phead, int x)//�����滻����ָ�봫�η���������
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
//////���õ�ʹ�ó�������1.������--a������Ͳ��� b������󴫲Σ����Ч��
////			   //2.������ֵ--a.����ͷ��ض��󣬵����߿����޸ķ��ض��� b.���ٿ��������Ч��
//
////ע�⣺��ֵ����ͳһ������һ�����ض���Ŀ�����Ϊ�������õķ���ֵ
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
////�ܽ᣺���˺����������򣬷��ض���������ˣ���ôһ�����������÷��أ�һ��Ҫ�ô�ֵ����


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int& b = a;//ȡa�ı���
//	//��ӡa��b������
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//
//	//Ȩ�޲��ܷŴ�
//	const int c = 20;
//	//int& d = c;//����ʾ��
//	//Ȩ�޵�ƽ��
//	const int& d = c;
//
//	//Ȩ�޿�����С
//	int e = 20;
//	const int& f = e;
//
//	int ii = 1;
//	double dd = (double)ii;
//	//����ת����������ı�ԭ�������ͣ��м䶼�����һ����ʱ����
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
////���ʹ�����ô��Σ�������������ı�n,��ô���龡��ʹ��const���ô���
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


//C���Բ��ܽ��к������� ����C++�ܽ��к������أ�����Ϊ���������ĺ����������ι���һ��