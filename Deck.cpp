#include <stdio.h>
#include <stdlib.h>
#include "Deck.h"


Deck::Deck()
{
	int ctr = 0;
	top = 0;
	char rank[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char suit[4] = { 'S', 'H', 'D', 'C' };
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			Card card(rank[j], suit[i]);
			deck[ctr] = card;
			ctr += 1;
		}
	}
};

void Deck::refreshDeck()
{
	int ctr = 0;
	top = 0;
	char rank[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char suit[4] = { 'S', 'H', 'D', 'C' };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			deck[ctr].setCard(rank[j], suit[i]);
			ctr += 1;
		}
	}
};
Card Deck::deal()
{
	Card first = deck[top];
	top ++;
	return first;
}
void Deck::shuffle()
{
	for (int i = 0; i < (100); i++)
	{
		int num1 = ((rand() % 52));
		int num2 = ((rand() % 52));
		Card card1 = deck[num1];
		Card card2 = deck[num2];
		deck[num1] = card2;
		deck[num2] = card1;
	}
}
int Deck::cardsLeft()
{
	return ((sizeof(deck) / sizeof(deck[0])) - top);
}
void Deck::showDeck()
{
	cout << "\nthe deck contains:\n";
	int ctr = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			deck[ctr].showCard();
			cout << " ";
			ctr += 1;
		}
		cout << endl;
	}
}
//    Son Dao
//    Class (CECS 282-04)
//    Project Name (Prog 1 – Solitaire Prime)
//    Due Date (9/14/2021)
// 
//    I certify that this program is my own original work. I did not copy any part of this program from 
//    any other source. I further certify that I typed each and every line of code in this program.