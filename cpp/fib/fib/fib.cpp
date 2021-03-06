#include "stdafx.h"
#include <iostream>
#include <Windows.h>

long unsigned int fib(int x) {
	switch (x) {
	case 0:
		return 0l;
		break;
	case 1:
		return 1l;
		break;
	default:
		return fib(x - 1) + fib(x - 2);
		break;
	}
}

void ask() {
	int guess;
	std::cout << "Which fibonacci number should I print?" << std::endl;
	try {
		std::cin >> guess;
	}
	catch (...) {
		std::cout << "Enter natural number, please!" << std::endl;
	}
	if (guess == -1) {
		system("pause");
		return;
	}
	const DWORD64 time_start = GetTickCount64();
	std::cout << fib(guess) << std::endl;
	std::cout << "Delay: " << GetTickCount64() - time_start << "ms" << std::endl;
	if (guess != -1)
		ask();
}

int main()
{
	ask();
	return 0;
}

