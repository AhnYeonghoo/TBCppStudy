#include <iostream>

int main(void)
{
	int x = 123; 
	int y;
	y = 111; // assignment
	
	// �ּҸ� �� �� ������ LValue
	// �ּҸ� ���������� �� �� ������ RValue
	// x�� �ּҸ� �� �� �����Ƿ� LValue
	// 123�� OS�� �����Ϸ��� �۵���Ű�Ƿ� RValue

	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	std::cout << y << std::endl;
	std::cout << &y << std::endl;

	int z;  // �ʱ�ȭ
	z = 10; // �Ҵ�

	int* pz = new int(100);
	int count(100);
	
	std::cout << pz << std::endl;
	std::cout << *pz << std::endl;
	return 0;
}