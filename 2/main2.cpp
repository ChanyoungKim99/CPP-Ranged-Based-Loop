#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;

	// �ƹ��͵� ���� v�� ���Ҹ� �ְ� �ʹٸ�?
	v.push_back(2);
	v.push_back(3);				// ��ġ ����ó�� �ڿ� �߰��� �ȴ�

	std::cout << v.size() << std::endl;
	for (int e : v)
	{
		std::cout << e << std::endl;
	}
}