#include <iostream>

int main()
{
	srand(time(0));

	const int Scissors = 1;
	const int Rock = 2;
	const int Paper = 3;
	
	double win = 0;
	double total = 0;

	while (true)
	{
		std::cout << "가위(1) 바위(2) 보(3) 골라주세요!" << std::endl;
		std::cout << " > " ;

		if (total == 0)
		{
			std::cout << "현재승률 : 없음" << std::endl;
		}
		else
		{
			double winlate = (win / total) * 100;
			std::cout << "현재승률 : " << winlate <<std::endl;
		}

		//컴퓨터 
		int computerchoice = 1 + (rand() % 3);
		//사용자
		int input;
		std::cin >> input;
		

		if (input == Scissors)
		{
			switch (computerchoice)
			{
			case Scissors:
				std::cout << "가위(나) vs 가위(컴퓨터) 비겼습니다!" << std::endl;
				break;
			case Rock:
				std::cout << "가위(나) vs 바위(컴퓨터) 컴퓨터가 이겼습니다!" << std::endl;
				total++;
				break;
			case Paper:
				std::cout << "가위(나) vs 보(컴퓨터) 내가 이겼습니다!" << std::endl;
				win++;
				total++;
				break;
			default:
				break;
			}
		}
		else if (input == Rock)
		{
			switch (computerchoice)
			{
			case Scissors:
				std::cout << "바위(나) vs 가위(컴퓨터) 내가 이겼습니다! " << std::endl;
				win++;
				total++;
				break;
			case Rock:
				std::cout << "바위(나) vs 바위(컴퓨터) 비겼습니다!" << std::endl;
				break;
			case Paper:
				std::cout << "바위(나) vs 보(컴퓨터) 컴퓨터가 이겼습니다!" << std::endl;
				total++;
				break;
			default:
				break;
			}
		}
		else if (input == Paper)
		{
			switch (computerchoice)
			{
			case Scissors:
				std::cout << "보(나) vs 가위(컴퓨터) 컴퓨터가 이겼습니다!" << std::endl;
				total++;
				break;
			case Rock:
				std::cout << "보(나) vs 바위(컴퓨터) 내가 이겼습니다!" << std::endl;
				win++;
				total++;
				break;
			case Paper:
				std::cout << "보(나) vs 보(컴퓨터) 비겼습니다!" << std::endl;
				break;
			default:
				break;
			}
		}
		else
		{
			break;
		}
	}
}

