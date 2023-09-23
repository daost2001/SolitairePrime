
#ifndef Deck_H
#define Deck_H
#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

class Deck
{
private:
	Card deck[52] = {};
	int top;

public:
	Deck();
	void refreshDeck();
	Card deal();
	void shuffle();
	int cardsLeft();
	void showDeck();
};
#endif
//    Son Dao
//    Class (CECS 282-04)
//    Project Name (Prog 1 – Solitaire Prime)
//    Due Date (9/14/2021)
// 
//    I certify that this program is my own original work. I did not copy any part of this program from 
//    any other source. I further certify that I typed each and every line of code in this program.