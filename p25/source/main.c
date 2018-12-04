#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int wdeck[4][13]);
void deal(const int wdeck[][13], const char*wface[], const char *wsuit[]);
int main(void)
{
	
	const char *suit[4] = {"hears","diamion","clubs","spades" };
	const char *face[13] = { "ace","deuce","three","four","five","six","secen","eight","nine","ten","jack","queen","king" };
	int deck[4][13] = { 0 };
	srand(time(0));
	shuffle(deck);
	deal(deck, face,suit );
	system("pause");

}
void shuffle(int wdeck[4][13])
{
	int a,b,c;
	for (a = 1; a < 53; a++)
	{
		do
		{
			b = rand() % 4;
			c = rand() % 13;

		} while (wdeck[b][c]!=0);
		wdeck[b][c] = a;
	}
	
}
void deal(const int wdeck[][13], const char*wface[], const char *wsuit[])
{
	int card, row, colume;
	for (card = 1; card < 53; card++)
	{ 
		for (row = 0; row < 4; row++)
		{
			for (colume = 0; colume < 13; colume++)
			{
				if (wdeck[row][colume] == card)
				{
					printf("%5s of %-8s%c", wface[colume], wsuit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
		
	}


}
