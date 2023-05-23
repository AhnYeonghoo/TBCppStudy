#include <iostream>

int main(void)
{
	int x = 123; 
	int y;
	y = 111; // assignment
	
	// 주소를 알 수 있으면 LValue
	// 주소를 실질적으로 알 수 없으면 RValue
	// x는 주소를 알 수 있으므로 LValue
	// 123은 OS나 컴파일러가 작동시키므로 RValue

	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	std::cout << y << std::endl;
	std::cout << &y << std::endl;

	int z;  // 초기화
	z = 10; // 할당

	int* pz = new int(100);
	int count(100);
	
	std::cout << pz << std::endl;
	std::cout << *pz << std::endl;
	return 0;
}