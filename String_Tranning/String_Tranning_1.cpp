#include <iostream>

// 1. 문자열을 입력받아 거꾸로 출력해 보세요.
int main()
{
	char inputString[5] = { "\0", };
	char swap = '\0';
	const int CHAR_SIZE = 13;
	std::ostringstream stringStream;

	std::cout << "1. 문자열을 입력받아 거꾸로 출력해 보세요." << std::endl;
	std::cout << std::endl;
	std::cout << "문자열을 입력하세요. : ";
	std::cin >> inputString;

	stringStream << "입력한 문자열은 \"" << inputString << "\" 입니다." << std::endl;

	std::cout << "입력한 문자열을 거꾸로하면 \"";
	for (int next = 5; next >= 0; next--)
	{
		std::cout << inputString[next];
	}
	std::cout << "\" 입니다." << std::endl;

	return 0;
}