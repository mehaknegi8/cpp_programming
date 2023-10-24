#include<iostream>
using namespace std;
template<class T1>
void fun(T1 val)
{
	cout<<"Result:"<<val<<endl;
}
int main()
{
	fun('C');
	fun("C++");
	fun(56);
	fun(89.9);
return(0);
}