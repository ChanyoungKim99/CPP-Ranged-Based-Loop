#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1(3);			// ������
	std::vector<int> v2{ 3 };		// ������ �ʱ�ȭ

	for (int e : v1)
	{
		std::cout << e << std::endl;
	}

	std::cout << "----" << std::endl;

	for (int e : v2)
	{
		std::cout << e << std::endl;
	}

	// ���� ������ �ǹ̰� �ٸ���!!!
}