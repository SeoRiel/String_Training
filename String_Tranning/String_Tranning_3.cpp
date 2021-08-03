#include <iostream>

// 3. 문자열을 입력받아 모두 대문자로 변환해 보세요.
int main()
{
	char inputCharacter[7];
	const int SIZE = 6;

	std::cout << "문자열을 입력하세요. : ";
	std::cin >> inputCharacter;

	for (int next = 0; next < SIZE; next++)
	{
		if (inputCharacter[next] - 65 <= 24)
		{
			inputCharacter[next];
		}
		else if (inputCharacter[next] - 65 >= 32)
		{
			inputCharacter[next] -= 32;
		}
		else if (((inputCharacter[next] < 65 && inputCharacter[next] > 90)
			&& (inputCharacter[next] < 97 && inputCharacter[next] > 122)))
		{
			std::cout << "입력한 문자는 영어가 아닙니다." << std::endl;
		}

	}

	std::cout << inputCharacter << std::endl;

	return 0;
}