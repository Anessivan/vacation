
#include <iostream>

bool ask_1()
{
	char c;
	std::cout << " like snow? if YES print Y if No print N" << std::endl;
	std::cin >> c;
	if (c == 'Y')
		return true;
	return false;
}
bool ask_2()
{
	char c;
	std::cout << "Like heat?\n if Yes print Y if No print N" << std::endl;
	std::cin >> c;
	if (c == 'Y')
		return true;
	return false;
}

bool ask_3()
{
	char c;
	std::cout << "Like koals?\n if Yes print Y if No print N" << std::endl;
	std::cin >> c;
	if (c == 'Y')
		return true;
	return false;
}

bool ask_4()
{
	char c;
	std::cout << "Like sea?\n if Yes print Y if No print N" << std::endl;
	std::cin >> c;
	if (c == 'Y')
		return true;
	return false;
}
bool ask_5()
{
	char c;
	std::cout << "Like ice?\n if Yes print Y if No print N" << std::endl;
	std::cin >> c;
	if (c == 'Y')
		return true;
	return false;
}
bool ask_6()
{
	char c;
	std::cout << "Like cold?\n if Yes print Y if No print N" << std::endl;
	std::cin >> c;
	if (c == 'Y')
		return true;
	return false;
}
int main()
{
	bool ask1 = ask_1(), ask2 = ask_2(), ask3 = ask_3(), ask4 = ask_4(), ask5 = ask_5(), ask6 = ask_6();
	if (ask1 && ask4 && ask5 && ask6)
	{
		std::cout << "On the NORTH!!" << std::endl;
		return 0;
	}
	if (ask2 && ask3 && ask4)
	{
		std::cout << "Go to Australia, not in Austria!!!" << std::endl;
		return 0;
	}
	if (ask2 && !ask3 && ask4)
	{
		std::cout << "To the Turkey!!!" << std::endl;
		return 0;
	}
	if (ask1 && ask2 && !ask4)
	{
		std::cout << "Go to Alps" << std::endl;
		return 0;
	}
	if (!ask6 && ask5 && ask1)
	{
		std::cout << "Ton the rink!!" << std::endl;
		return 0;
	}
	std::cout << "Change your mind" << std::endl;
	return 0;
}