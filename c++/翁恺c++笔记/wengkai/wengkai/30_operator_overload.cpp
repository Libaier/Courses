#include <iostream>
using namespace std;
class MyClass30
{
public:
	//const size = 1;//error
	enum { size = 1 };//correct
	int b[size];
	MyClass30(const MyClass30 &a) {
		cout << "fun copy" << endl;
	}
	friend const MyClass30 operator+(const MyClass30 &n, const MyClass30 &m);
	MyClass30(double i) {
		a = i;
		cout << "fun double" << endl;
	}
	void fun()
	{
		cout << "a: "<< a << endl;
	}
	void fun() const
	{
		cout << "fun const" << endl;
	}
	~MyClass30(){
	}
	MyClass30(){
	}
	operator double()const{
		return 0.0;
	}
private:
	double a;
};
const MyClass30 operator+(const MyClass30 &n, const MyClass30 &m) {
	return MyClass30(m.a + n.a);
}

void main30()
{
	double a = 2;
	MyClass30 m1;
	a = m1;
	//MyClass30 m2(1);
	//m2 = 3 + 7;
	//a = 3 + 7;
	//m2.fun();
	double b = a++;
	cout << b << endl;
	b = ++a;
	cout << b << endl;

	getchar();
	
}