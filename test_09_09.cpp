//#include<iostream>
//using namespace std;
//
//void Test()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//
//	int* p2 = new int;
//	//����5��int������
//	int* p3 = new int[5];
//
//	//����1��int����,��ʼ��Ϊ5
//	int* p4 = new int(5);
//
//	//C++11֧��new[] ��{}��ʼ����C++98��֧��
//	int* p5 = new int[5] {1, 2, 3};
//
//	free(p1);
//	delete p2;
//	delete[] p3;
//	delete p4;
//	delete[] p5;
//
//	//����������ͣ�new/delete��malloc/freeû�б��ʵ�����ֻ���÷�������
//	//new/delete �÷�����
//
//	//���ۣ�new/delete ��Ϊ�Զ�������׼���ġ����������������
//	//������ù��캯����ʼ����������������
//	//newʧ��,����Ҫ��鷵��ֵ����ʧ���������쳣
//	//new/delete�ĵײ�ʵ����ʵ������malloc/free�йأ�����new/delete�������쳣
//
//	//new -> operator new + ���캯��
//	//Ĭ�������operator new ʹ��ȫ�ֿ�����
//	//ÿ���඼����ȥʵ���Լ���ר��operator new  new�����Ķ������ͻ���Լ�ʵ�����operator newS
//}
//
//int main()
//{
//	Test();
//	return 0;
//}