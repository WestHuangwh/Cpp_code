#include<iostream>
#include<map>
#include<set>

using namespace std;

void test_set()
{
	//set<int> s;
	//s.insert(4);
	//s.insert(2);
	//s.insert(1);
	//set<int> s{ 1,2,3,6,3,8,5 };
	int a[] = { 1,2,3,6,3,8,5 };
	set<int> s(a, a + sizeof(a) / sizeof(int));

	set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;

}

int main()
{
	test_set();
	return 0;
}