// Project 01 Stone Paper Scissor Game

/*
Requiremets:
- Ask for how many rounds the game will be.
- start each round Player vs Computer.
- Show the results with each round.
- if Computer wins the round ring a bill, and screen red.
- if player won the round show green screen.
- After all rounds show game over and print game results,
  then ask the user if s/he want to play again.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

short ReadShortPositiveNumber(string Message)
{
	short Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 1 || Number > 10);

	return Number;
}

enum enChoice { 
	Stone = 1, Paper = 2, Scissors = 3
};

enum enWinner {
	PlayerWon=1,ComputerWon=2,NoWinner=3
};

struct stRound {
	enChoice PlayerChoice=Stone;
	enChoice ComputerChoice=Paper;
	string RoundWinner = "";
};

enChoice ReadPlayerChoice()
{
	short Choice = 0;

	do
	{
		cout << "Your Choice: [1]Stone, [2]Paper, [3]Scissors: ";
		cin >> Choice;
	} while (Choice < 1 || Choice > 3);
	
	return enChoice(Choice);
}

int GetRandomNumber(int from ,int to)
{
	return rand() % (to - from + 1) + from;
}

enChoice GetComputerChoice()
{
	return enChoice(GetRandomNumber(1, 3));
}

enWinner WhoWinRound(enChoice PlayerChoice, enChoice ComputerChoice)
{
	if (PlayerChoice == ComputerChoice)
	{
		system("COLOR 6F");
		return enWinner::NoWinner;
	}

	if ((PlayerChoice == enChoice::Paper && ComputerChoice == enChoice::Scissors) ||
		(PlayerChoice == enChoice::Scissors && ComputerChoice == enChoice::Stone) ||
		(PlayerChoice == enChoice::Stone && ComputerChoice == enChoice::Paper))
	{
		system("COLOR 4F");
		cout << '\a';
		return enWinner::ComputerWon;
	}
	else
	{
		system("COLOR 2F");
		return enWinner::PlayerWon;
	}
}

string WinnerStirng(enWinner Winner)
{
	string arr[3] = { "[Player]","[Computer]","[No Winner]" };

	return arr[Winner - 1];
}

string ChoiceString(enChoice choice)
{
	string arr[3] = { "Stone","Paper","Scissors" };

	return arr[choice - 1];
}

stRound GameRound()
{
	stRound Round;

	Round.PlayerChoice = ReadPlayerChoice();
	Round.ComputerChoice = GetComputerChoice();
	Round.RoundWinner = WhoWinRound(Round.PlayerChoice, Round.ComputerChoice);

	return Round;
}

void PrintRoundResult(enChoice PlayerChoice,enChoice ComputerChoice,string GameWinner)
{
	cout << "\nPlayer   Choice: " << ChoiceString(PlayerChoice) << '\n';
	cout << "Computer Choice: " << ChoiceString(ComputerChoice) << '\n';
	cout << "Round Winner   : " << GameWinner <<'\n';
}

void PrintGameOver()
{
	cout << "\n\t\t________________________________________________\n";
	cout << "\n\t                   +++ G a m e O v e r +++";
	cout << "\n\t\t________________________________________________\n";

}
struct stGameResults {
	short GameRounds = 0;
	short PlayerWonTimes = 0;
	short ComputerWonTimes = 0;
	short DrawTimes = 0;
	enWinner FinalWinner = enWinner::ComputerWon;
};

enWinner WhoWinTheGame(short PlayerWonTimes, short ComputerWonTimes)
{
	return (ComputerWonTimes > PlayerWonTimes) ? enWinner::ComputerWon :
		(PlayerWonTimes > ComputerWonTimes) ? enWinner::PlayerWon : enWinner::NoWinner;
}

stGameResults Play()
{
	stGameResults GameResults;
	short HowManyRounds = ReadShortPositiveNumber("Enter How Many Rounds (1-10): ");
	
	for (int i = 1; i <= HowManyRounds; i++)
	{
		cout << "\nRound [" << i << "] begins: \n";
		stRound Round = GameRound();
		GameResults.GameRounds = HowManyRounds;

		cout << "\n____________Round [" << i << "]____________\n";
		Round.RoundWinner = WinnerStirng(WhoWinRound(Round.PlayerChoice, Round.ComputerChoice));

		PrintRoundResult(Round.PlayerChoice,Round.ComputerChoice,Round.RoundWinner);
		cout << "\n_________________________________\n";
	

		if (Round.RoundWinner == "[Player]")
			GameResults.PlayerWonTimes++;

		else if (Round.RoundWinner == "[Computer]")
			GameResults.ComputerWonTimes++;

		else
			GameResults.DrawTimes++;		
	}

	GameResults.FinalWinner = WhoWinTheGame(GameResults.PlayerWonTimes, GameResults.ComputerWonTimes);

	return GameResults;

}

void GameWinner(stGameResults GameResults)
{
	cout << "\n\t\t__________________[Game Results]__________________\n";
	cout << "\t\tGame Rounds       : " << GameResults.GameRounds;
	cout << "\n\t\tPlayer Won Times  : " << GameResults.PlayerWonTimes;
	cout << "\n\t\tComputer Won Times: " << GameResults.ComputerWonTimes;
	cout << "\n\t\tDraw Times        : " << GameResults.DrawTimes;
	cout << "\n\t\tFinal Winner      : " <<
		WinnerStirng(GameResults.FinalWinner);
	cout << "\n\t\t________________________________________________\n";

}

void StartGame()
{

	char PlayAgain = 'N';

	do{
		
		system("CLS");
		stGameResults Game= Play();
		PrintGameOver();
		GameWinner(Game);
		cout << "\n\t\tDo you want to Play Again (Y/N): ";
		cin >> PlayAgain;

	}while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
	srand((unsigned)time(NULL));

	StartGame();


	return 0;
}
