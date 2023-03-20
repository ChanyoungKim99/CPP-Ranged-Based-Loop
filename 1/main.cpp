#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v{ 2, 3, 1, 5, 6 };		// container

	//for (int i = 0; i < v.size(); i++)		
	//{
	//	std::cout << v[i] << " ";
	//}


	//	Range-based Loop  (���� ��� �ݺ���)
	for (int element : v)
	{
		std::cout << element << std::endl;
	}

	// ���� = ó������ ������
	// ���� �ε����� ���� ���� ����
	// Call by Value�� �۵�
	// v ���ҿ� ���� ���� X

	for (int& element : v)
	{
		std::cout << element << std::endl;
	}
	// Call by Reference


	int array[]{ 1,2,3,4 };
	for (int& e : array)
	{
		std::cout << e << std::endl;
	}

	// �迭������ �۵�!