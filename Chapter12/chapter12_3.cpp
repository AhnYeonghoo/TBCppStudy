#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	virtual A* getThis() { return this; }
};

class B : public A
{
public:
	void print(){ cout << "B" << endl; }
	virtual B* getThis() override { return this; }
	
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

// final -> override ����
// override -> override�� ��������� ǥ��
// virtual -> �����Լ��� ������ override �����ϰ� ��

int main3()
{
	A a;
	B b;
	
	A& ref = b;
	b.getThis()->print();
	//ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;
	return 0;
}

