#include <iostream>

// 2. 두 문자열을 입력하여 하나의 문자열로 만들고 출력해 보세요.
int main()
{
	char fChar[7], sChar[7];
	char totalChar[15] = { "\0", };
	const int CHAR_SIZE = 7;
	const int TOTAL_SIZE = 14;

	std::cout << "두 개의 문자열을 입력하세요. : ";
	std::cin >> fChar >> sChar;

	for (int next = 0; next < CHAR_SIZE; next++)
	{
		totalChar[next] = fChar[next];
	}

	for (int next = 7; next < TOTAL_SIZE; next++)
	{
		totalChar[next] = sChar[next - 7];
	}

	for (int next = 0; next < TOTAL_SIZE; next++)
	{
		std::cout << totalChar[next];
	}

	std::cout << std::endl;

	return 0;
}