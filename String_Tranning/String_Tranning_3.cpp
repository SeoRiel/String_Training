#include <iostream>

// 3. ���ڿ��� �Է¹޾� ��� �빮�ڷ� ��ȯ�� ������.
int main()
{
	char inputCharacter[7];
	const int SIZE = 6;

	std::cout << "���ڿ��� �Է��ϼ���. : ";
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
			std::cout << "�Է��� ���ڴ� ��� �ƴմϴ�." << std::endl;
		}

	}

	std::cout << inputCharacter << std::endl;

	return 0;
}