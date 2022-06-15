
#include <iostream>
void rightorwrong(bool ans);
int main()
{
	srand(time(NULL));
	int ranquest = rand() % 4 + 1;
	int answer;
	switch (ranquest)
	{
	case 1:
		std::cout << "Which snake is venomous?\n1. Garter Snake\n2. Milk Snake\n3. CottonMouth\n4. park footer\n";
		std::cin >> answer;
		if (answer == 3)
		{
			rightorwrong(true);
		}
		else
		{
			rightorwrong(false);
		}
		break;
	case 2:
		std::cout << "Which is the deadliest spider?\n1. Sydney Funnel-Web Spider\n2. Wolf Spider\n3. Widow Spiders\n4. Huntsman Spider\n";
		std::cin >> answer;
		if (answer == 1)
		{
			rightorwrong(true);
		}
		else
		{
			rightorwrong(false);
		}
		break;
	case 3:
		std::cout << "Which brid has the fastest wing beat?\n1. Blue Jay\n2. Ruby-Throated Hummingbird\n3. American Robin\n4. European Starling\n";
		std::cin >> answer;
		if (answer == 2)
		{
			rightorwrong(true);
		}
		else
		{
			rightorwrong(false);
		}
		break;
	case 4:
		std::cout << "Which animalw is the fastest?\n1. Cheetah\n2. Sailfish\n3. Ostrich\n4. Peregrine falcon\n";
		std::cin >> answer;
		if (answer == 4)
		{
			rightorwrong(true);
		}
		else
		{
			rightorwrong(false);
		}
		break;
	default:
		break;

	}

}
void rightorwrong(bool ans)
{
	if (ans == true)
	{
		std::cout << "\nthat is correct.\n";
	}
	else
	{
		std::cout << "\nthat is incorrect.\n";
	}
}
