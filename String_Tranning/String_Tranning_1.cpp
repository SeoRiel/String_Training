#include <iostream>

// 1. ���ڿ��� �Է¹޾� �Ųٷ� ����� ������.
int main()
{
	char inputString[5] = { "\0", };
	char swap = '\0';
	const int CHAR_SIZE = 13;
	std::ostringstream stringStream;

	std::cout << "1. ���ڿ��� �Է¹޾� �Ųٷ� ����� ������." << std::endl;
	std::cout << std::endl;
	std::cout << "���ڿ��� �Է��ϼ���. : ";
	std::cin >> inputString;

	stringStream << "�Է��� ���ڿ��� \"" << inputString << "\" �Դϴ�." << std::endl;

	std::cout << "�Է��� ���ڿ��� �Ųٷ��ϸ� \"";
	for (int next = 5; next >= 0; next--)
	{
		std::cout << inputString[next];
	}
	std::cout << "\" �Դϴ�." << std::endl;

	return 0;
}