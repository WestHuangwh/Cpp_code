#include<iostream>
#include<vector>

//�ѱ�׼��Ķ������ŵ�std��չ����ȫ������
using namespace std;
////1.��Ŀ�У�������Ҫusing namespace std;
////2.�ճ���ϰ��using namespace std;
////3.��Ŀ��ָ�������ռ����+����չ��
//
////���¾���һ�ֳ���չ����cout��endl
//using std::cout;
//using std::endl;
//
//int main()
//{
//	//ָ�������ռ����
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
//	//�ص㣺�Զ�ʶ������
//	int input;
//	double n;
//	//>>����ȡ
//	cin >> input >> n;
//
//	//<<������
//	cout << input <<endl;//�˴���endl��ͬ��\n;
//	//cout << input << '\n';
//	cout << n<<endl;
//	return 0;
//}




////ȱʡ����
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
////ȫȱʡ-����˼�⣬����ȫ������ȱʡ
//void TestFunc(int a = 10, int b = 20,int c = 30)//ȱʡ���������������ȱʡ�����ܼ��
//												//ȱʡ��b�ͱ���ȱʡc��ȱʡ��a,�ͱ���ȱʡb��c
//{
//	cout << "a = " << a <<endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl<<endl;
//
//}
//
////��ȱʡ-���ֲ���ȱʡ
//void TestFunc1(int a, int b=20, int c = 30)//ȱʡ���������������ȱʡ�����ܼ��
//										//ȱʡ��b�ͱ���ȱʡc��ȱʡ��a,�ͱ���ȱʡb��c
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
////ע�⣺ȱʡ���������ں��������Ͷ�����ͬʱ���֣����Ҫ���붨������������ֻ���ں��������г���
//void StackInit(struct Stack* ps, int capacity= 4)//�˴���ջ�ĳ�ʼ�����õ��˰�ȱʡ����
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
//	Func();//��û�д�������ʱ��ȱʡ�����ͻ�������
//
//	TestFunc(1,2,3);//ֻ֧�ִ������Ҹ�
//	//TestFunc(,,1);//��֧�����ָ��м�ģ�������C++���﷨��׼
//	TestFunc();
//
//
//	//֪����һ�������100�����ݣ��Ϳ�����ʾ������100
//	//��ǰ���ÿռ䣬�������ݱ�������
//	struct Stack stl;
//	StackInit(&stl, 100);
//
//	return 0;
//}

