#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enChoice {Stone=1,Paper=2,Scissors=3 };
enum enWinner {Player=1,Computer=2,Draw=3};

struct stRoundIfo
{
	string RoundWinner = "";
	enChoice PlayerChoice = enChoice::Paper;
	enChoice ComputerChoice = enChoice::Scissors;
};

struct stGameResult
{
	short GameRounds = 0;
	short PlayerWonTimes = 0;
	short ComputerWonTimes = 0;
	short DrawTime = 0;
	enWinner FinalWinner=enWinner::Computer;
};

enWinner FinalWinner(short PlayerWonTimes, short ComputerWonTimes)
{
	
	if (PlayerWonTimes > ComputerWonTimes)
	{
		return enWinner::Player;
	}
	if (PlayerWonTimes < ComputerWonTimes)
	{
		return enWinner::Computer;
	}
	else
		return enWinner::Draw;
}

string ChoiceName(enChoice Choice)
{
	string arr[3] = { "Stone","Paper","Scissors" };

	return arr[Choice - 1];
}

string WinnerName(enWinner Winner)
{
	string arr[3] = { "[Player]","[Computer]","[No Winner]" };
	return arr[Winner - 1];
}

short HowManyRounds()
{
	int GameRound = 0;
	do
	{
		cout << "How many Rounds do you want to play(1-10): ";
		cin >> GameRound;
	} while (GameRound < 1 || GameRound >10);

	return GameRound;
}

int RandomNum(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

enChoice ReadPlayerChoice()
{
	short Choice=1;
	do
	{
		cout << "Your Choice: [1]:Stone,  [2]:Paper,  [3]:Scissors : ";
		cin >> Choice;
		cout << "_______________________________________\n";
	} while (Choice <1 || Choice >3);

	return enChoice(Choice);
}

enChoice getComputerChoice()
{
	return enChoice(RandomNum(1, 3));
}

enWinner GameWinner(enChoice Player, enChoice Computer)
{
	if (Player == Computer)
	{
		system("color 6f");
		return enWinner::Draw;
	}

	switch (Player)
	{
	case enChoice::Paper:
		if (Computer == enChoice::Scissors)
		{
			system("echo \a");
			system("color 4f");
			return enWinner::Computer;
		}
		break;
	case enChoice::Scissors:
		if (Computer == enChoice::Stone)
		{
			system("echo \a");
			system("color 4f");

			return enWinner::Computer;
		}
		break;
	case enChoice::Stone:
		if (Computer == enChoice::Paper)
		{
			system("echo \a");
			system("color 4f");
			return enWinner::Computer;
		}
		break;
	}
	system("color 2f");
	return enWinner::Player;
}

string Tabs(int Num)
{
	string tabs = "";
	for (int i = 1; i < Num; i++)
	{
		
		tabs += '\t';
	}
	return tabs;
}

void RestScreen()
{
	system("CLS");
	system("COLOR 0F");
}

void GameOverInScreen()
{
	cout << endl;
	cout << Tabs(4) << "____________________________________\n";
	cout << Tabs(4) << "        +++G a m e O v e r+++        \n";
	cout << Tabs(4) << "____________________________________\n";
}

void FinalGameResults(stGameResult GameResult)
{
	cout << Tabs(4) << "___________[Game Results]__________\n";
	cout << Tabs(4) << "GameRounds        : "<<GameResult.GameRounds<<endl;
	cout << Tabs(4) << "Player won times  : "<<GameResult.PlayerWonTimes << endl;
	cout << Tabs(4) << "Computer won times: "<<GameResult.ComputerWonTimes << endl;
	cout << Tabs(4) << "Draw times        : "<<GameResult.DrawTime << endl;
	GameResult.FinalWinner = FinalWinner(GameResult.PlayerWonTimes, GameResult.ComputerWonTimes);
	cout << Tabs(4) << "Final Winner      : " << WinnerName(GameResult.FinalWinner) << endl;
	cout << Tabs(4) << "____________________________________\n";
	
}
void PrintResults(stRoundIfo RoundInfo)
{
	cout << "\nPlayer Choice   : " << ChoiceName(RoundInfo.PlayerChoice);
	cout << "\nComputer Choice : " << ChoiceName(RoundInfo.ComputerChoice);
	cout << "\nRound Winner    : " << RoundInfo.RoundWinner;
	cout << "\n____________________________________\n";
	
}

stGameResult FillGameResults(short Rounds, short PlayerWonTimes, short ComputerWontimes, short Draw)
{
	stGameResult GameResult;
	GameResult.GameRounds = Rounds;
	GameResult.PlayerWonTimes=PlayerWonTimes;
	GameResult.ComputerWonTimes=ComputerWontimes;
	GameResult.DrawTime=Draw;
	return GameResult;
	
}

stGameResult PlayGame()
{
	short GameRounds = HowManyRounds();
	stRoundIfo RoundInfo;
	short Rounds = 0, PlayerWonTimes = 0, ComputerWonTimes = 0, Draw = 0;

	for (int i = 1; i <= GameRounds; i++)
	{
		cout << "\nRound[" << i << "] begin: \n";
		RoundInfo.PlayerChoice = ReadPlayerChoice();
		RoundInfo.ComputerChoice = getComputerChoice();
		RoundInfo.RoundWinner = WinnerName(GameWinner(RoundInfo.PlayerChoice, RoundInfo.ComputerChoice));
		PrintResults(RoundInfo);

		if (RoundInfo.RoundWinner=="[Player]")
			PlayerWonTimes++;
		else if (RoundInfo.RoundWinner == "[Computer]")
			ComputerWonTimes++;
		else
			Draw++;
	}
	return FillGameResults(GameRounds, PlayerWonTimes, ComputerWonTimes, Draw);
}

void FinalWinnerColor(short PlayerWonTimes, short ComputerWonTimes)
{
	if (PlayerWonTimes > ComputerWonTimes)
	{
		system("color 2f");
	}

	else if (PlayerWonTimes < ComputerWonTimes)
	{
		system("echo \a");
		system("color 4f");
	}
	else
	{
		system("color 6f");
	}
	
}

void StartGame()
{
	char PlayAgain = 'N';
	do
	{
		RestScreen();
		stGameResult GameResults=PlayGame();
		GameOverInScreen();
		FinalGameResults(GameResults);
		FinalWinnerColor(GameResults.PlayerWonTimes, GameResults.ComputerWonTimes);

		cout <<endl<<Tabs(4)<< "Do you want play again (Y/N): ";
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}