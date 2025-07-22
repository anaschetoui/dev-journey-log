#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enQuestionsLevel { Easy = 1, Medium = 2, Hard = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5 };

short ReadHowManyQuestions()
{
	short NumberOfQuestions = 0;

	do
	{
		cout << "How Many Questions Do You Want To Answer (1-10): ";
		cin >> NumberOfQuestions;

	} while (NumberOfQuestions < 1 || NumberOfQuestions > 10);

	return NumberOfQuestions;
}

enQuestionsLevel ReadQuestionLevel()
{
	short UserChoice = 0;
	do
	{
		cout << "Enter Questions Level [1] Easy, [2] Medium, [3] Hard, [4] Mix : ";
		cin >> UserChoice;

	} while (UserChoice < 1 || UserChoice > 4);

	return enQuestionsLevel(UserChoice);
}

enOperationType ReadOperationType()
{
	short OpType = 0;

	do
	{
		cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix : ";
		cin >> OpType;

	} while (OpType < 1 || OpType >5);

	return enOperationType(OpType);
}

short UserAnswer()
{
	short Answer = 0;
	cin >> Answer;
	return Answer;
}

string getQuestionsLevelText(enQuestionsLevel QuestionLevel)
{
	string arr[4] = { "Easy","Medium","Hard","Mix" };

	return arr[QuestionLevel - 1];
}

string getOperationTypeText(enOperationType OpType)
{
	string arr[5] = { "Add","Sub","Mul","Div","Mix" };
	return arr[OpType - 1];
}

struct stQuestionsList
{
	enQuestionsLevel QuestionLevel=enQuestionsLevel::Easy;
	enOperationType OpType=enOperationType::Add;
	short PLayerAnswer = 0;
	short CorrectAnswer=0;
	short Num1 = 0;
	short Num2 = 0;
	bool isRight = true;
};

struct stQuizz
{
	stQuestionsList QuestionList[100];
	short NumberOfRightQuestion = 0;
	short NumberOfQuestions = 0;
	short NumberOfWrongQuestion = 0;
	bool isPass = false;
	enOperationType OperationType=enOperationType::Add;
	enQuestionsLevel QuestionLevel=enQuestionsLevel::Easy;
};

short Calculator(short Num1, short Num2, enOperationType Optype)
{
	switch (Optype)
	{
	case enOperationType::Add:
		return Num1 + Num2;
		break;
	case enOperationType::Sub:
		return Num1 - Num2;
		break;
	case enOperationType::Mul:
		return Num1 * Num2;
		break;
	case enOperationType::Div:
		return Num1 / Num2;
		break;
	default:
		return 0;
		break;
	}
	
}

int RandomNumber(int from, int to)
{
	return (rand() % (to - from + 1) + from);
}

enOperationType getMixOperation()
{
	short MixOp = RandomNumber(1, 4);
	return enOperationType(MixOp);
}

stQuestionsList GenerateOneQuestion(enQuestionsLevel QuestionLevel,enOperationType OpType)
{
	stQuestionsList Question;

	if (QuestionLevel == enQuestionsLevel::Mix)
	{
		QuestionLevel = enQuestionsLevel(RandomNumber(1, 3));
	}
	if (OpType == enOperationType::MixOp)
	{
		OpType = getMixOperation();
	}
	Question.OpType = OpType;

	switch (QuestionLevel)
	{
	case Easy:
		Question.Num1 = RandomNumber(1, 10);
		Question.Num2 = RandomNumber(1, 10);
		Question.CorrectAnswer = Calculator(Question.Num1, Question.Num2, OpType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
		break;
	case Medium:
		Question.Num1 = RandomNumber(10, 50);
		Question.Num2 = RandomNumber(10, 50);
		Question.CorrectAnswer = Calculator(Question.Num1, Question.Num2, OpType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
		break;
	case Hard:
		Question.Num1 = RandomNumber(50, 100);
		Question.Num2 = RandomNumber(50, 100);
		Question.CorrectAnswer = Calculator(Question.Num1, Question.Num2, OpType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
		break;
	default:
		return Question;
		break;
	}
}
string getOperationSympol(enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return "+";
		break;
	case enOperationType::Sub:
		return "-";
		break;
	case enOperationType::Mul:
		return "*";
		break;
	case enOperationType::Div:
		return "/";
		break;
	default:
		return "Mix";
		break;	
	}
}

void GenarateQuestions(stQuizz& Quizz)
{
	for (int i = 0; i < Quizz.NumberOfQuestions; i++)
	{
		Quizz.QuestionList[i] = GenerateOneQuestion(Quizz.QuestionLevel, Quizz.OperationType);
	}
}


void PrintQuestion(stQuizz& Quizz, short QuestionNumber)
{
	cout << "\nQuestion [" << QuestionNumber + 1 << "/"<<Quizz.NumberOfQuestions<<"] \n";
	cout << Quizz.QuestionList[QuestionNumber].Num1 << endl;
	cout << Quizz.QuestionList[QuestionNumber].Num2;
	cout << "\t" << getOperationSympol(Quizz.QuestionList[QuestionNumber].OpType);
	cout << "\n__________\n";
	
}

void CorrectQuestion(stQuizz& Quizz, short QuestionNumber)
{
	if (Quizz.QuestionList[QuestionNumber].PLayerAnswer != Quizz.QuestionList[QuestionNumber].CorrectAnswer)
	{
		cout << "\nWrong Answer :(\n";
		cout << "The Right Question is: ";
		Quizz.QuestionList[QuestionNumber].isRight = false;
		Quizz.NumberOfWrongQuestion++;
		cout << Quizz.QuestionList[QuestionNumber].CorrectAnswer;
		system("COLOR 4F");
		system("echo \a");
	}
	else
	{
		cout << "\nCorrect Answer :)\n";
		Quizz.QuestionList[QuestionNumber].isRight = true;
		Quizz.NumberOfRightQuestion++;
		system("COLOR 2F");
	}
}

void AskAndCorrectQuestion(stQuizz& Quizz)
{
	for (int i = 0; i < Quizz.NumberOfQuestions; i++) {
		PrintQuestion(Quizz, i);
		Quizz.QuestionList[i].PLayerAnswer = UserAnswer();
		CorrectQuestion(Quizz, i);
	}

	Quizz.isPass = Quizz.NumberOfRightQuestion >= Quizz.NumberOfWrongQuestion ;
}

string PASSFAIL(bool isPass)
{
	if (isPass == false)
		return "YOU FAILL";

	else
		return "YOU PASS";

}

void PrintQuizzFinalResults(stQuizz Quizz)
{
	cout << "\n__________________________________\n";
	cout << "      Final Results: " << PASSFAIL(Quizz.isPass);
	cout << "\n__________________________________\n";
	cout << "\nNumber Of Questions      : " << Quizz.NumberOfQuestions;
	cout << "\nQuestion Level           : " << getQuestionsLevelText(Quizz.QuestionLevel);
	cout << "\nOperation Type           : " << getOperationTypeText(Quizz.OperationType);
	cout << "\nNumber Of Right Questions: " << Quizz.NumberOfRightQuestion;
	cout << "\nNumber Of Wrong Questions: " << Quizz.NumberOfWrongQuestion;
	cout << "\n____________________________________\n";
}

void PlayMathGame()
{
	stQuizz Quizz;
	Quizz.NumberOfQuestions = ReadHowManyQuestions();
	Quizz.QuestionLevel = ReadQuestionLevel();
	Quizz.OperationType = ReadOperationType();

	GenarateQuestions(Quizz);
	AskAndCorrectQuestion(Quizz);
	PrintQuizzFinalResults(Quizz);
}

void RestScreen()
{
	system("CLS");
	system("COLOR 0F");
}

void StartGame()
{
	char PlayAgain = 'y';

	do
	{
		RestScreen();
		PlayMathGame();

		cout << "Do You Want to Play Again (Y/N): ";
		cin >> PlayAgain;

	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
	srand((unsigned)time(NULL));

	StartGame();
	
	return 0;
}
