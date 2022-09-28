#include<iostream>
using namespace std;
class A
{
	int a=4;
	public:
		void sum()
		{
			a++;
			cout<<a;
		}
};
main()
{
	class A obj1,obj2;
	obj1.sum();
	obj2.sum();
}
