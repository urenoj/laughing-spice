# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main()
{
	unsigned seed;      // random number generator for when X can't win or block
	seed = time(0);
	srand(seed);

	bool madeMove = 0;
	int num = 0;
	int boardState[10];
	cout << "Enter board state as 9 integers, 0-2: ";
	
	for (int i = 0; i < 9; i++)
	cin >> boardState[i];
	
	// this generates the tic tac toe board
	
	cout << "Current board state: " << endl;
	cout << "+-+-+-+" << endl;
	cout << "|" << boardState[0] << "|" << boardState[1] << "|" << boardState[2] << "|" << endl;
	cout << "+-+-+-+" << endl;
	cout << "|" << boardState[3] << "|" << boardState[4] << "|" << boardState[5] << "|" << endl;
	cout << "+-+-+-+" << endl;
	cout << "|" << boardState[6] << "|" << boardState[7] << "|" << boardState[8] << "|" << endl;
	cout << "+-+-+-+" << endl;
	
	

		// These lines pick winning move for X 

	if (boardState[0] == 0 && madeMove == 0)
	{
		if (boardState[3 && 6] == 1 || boardState[4 && 8] == 1 || boardState[1 && 2] == 1)
		{
			boardState[0] = 1;
			cout << "X takes the winning move on cell 1!" << endl;
			madeMove = 1;
		}
	
	}
	else if (boardState[1] == 0 && madeMove == 0)
	{
		if (boardState[4 && 7] == 1 || boardState[0 && 2] == 1)
		{
			boardState[1] = 1;
			cout << "X takes the winning move on cell 2!" << endl;
			madeMove = 1;
		}
	}
		
	else if (boardState[2] == 0 && madeMove == 0)
	{
		if (boardState[4 && 6] == 1 || boardState[5 && 8] == 1 || boardState[0 && 1] == 1)
		{
			boardState[2] = 1;
			cout << "X takes the winning move on cell 3!" << endl;
			madeMove = 1;
		}
	}
		// these lines block O from winning

	if (boardState[0] == 0 && madeMove == 0)
	{
		if (boardState[3 && 6] == 2 || boardState[4 && 8] == 2 || boardState[1 && 2] == 2)
		{
			boardState[0] = 1;
			cout << "X blocks the winning move on cell 1!" << endl;
			madeMove = 1;
		}
	}
	
	else if (boardState[1] == 0 && madeMove == 0)
	{
		if (boardState[4 && 7] == 2 || boardState[0 && 2] == 2)
		{
			boardState[1] = 1;
			cout << "X blocks the winning move on cell 2!" << endl;
			madeMove = 1;
		}
	}
	else if (boardState[2] == 0 && madeMove == 0)
	{
		if (boardState[4 && 6] == 2 || boardState[5 && 8] == 2 || boardState[0 && 1] == 2)
		{
			boardState[2] = 1;
			cout << "X blocks the winning move on cell 3!" << endl;
			madeMove = 1;
		}
	}
		
	if (madeMove == 0)
		{	
			num = rand() % 3;

			while (boardState[num] == 1 || boardState[num] == 2);
			{
				num = rand() % 3;
			}
			/***************************************************
			num = rand() % 3;

			if (boardState[num == 1 || 2])
			{
				num = rand() % 3;
			}
			**************************************************/
			boardState[num] = 1;
			cout << " X chose cell " << boardState[num]  << "!" << endl;

		}
			cout << "New board:" << endl;
	cout << "+-+-+-+" << endl;
	cout << "|" << boardState[0] << "|" << boardState[1] << "|" << boardState[2] << "|" << endl;
	cout << "+-+-+-+" << endl;
	cout << "|" << boardState[3] << "|" << boardState[4] << "|" << boardState[5] << "|" << endl;
	cout << "+-+-+-+" << endl;
	cout << "|" << boardState[6] << "|" << boardState[7] << "|" << boardState[8] << "|" << endl;
	cout << "+-+-+-+" << endl;

	system("pause/n");
}
