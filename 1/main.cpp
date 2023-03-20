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


	//	Range-based Loop  (범위 기반 반복문)
	for (int element : v)
	{
		std::cout << element << std::endl;
	}

	// 조건 = 처음부터 끝까지
	// 따로 인덱스를 만들 수는 없음
	// Call by Value로 작동
	// v 원소에 직접 관여 X

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

	// 배열에서도 작동!