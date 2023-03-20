#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1(3);			// 생성자
	std::vector<int> v2{ 3 };		// 유니폼 초기화

	for (int e : v1)
	{
		std::cout << e << std::endl;
	}

	std::cout << "----" << std::endl;

	for (int e : v2)
	{
		std::cout << e << std::endl;
	}

	// 둘은 완전히 의미가 다르다!!!
}