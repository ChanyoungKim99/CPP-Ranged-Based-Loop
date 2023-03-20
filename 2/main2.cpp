#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;

	// 아무것도 없는 v에 원소를 넣고 싶다면?
	v.push_back(2);
	v.push_back(3);				// 마치 스택처럼 뒤에 추가가 된다

	std::cout << v.size() << std::endl;
	for (int e : v)
	{
		std::cout << e << std::endl;
	}
}