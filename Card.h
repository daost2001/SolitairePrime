#ifndef Card_H
#define Card_H
#include <iostream>
#include <string>
using namespace std;

class Card
{
private:
	char rank;
	char suit;
public:
	Card();
	Card(char r, char s);
	void setCard(char r, char s);
	int getValue();
	void showCard();
};
#endif

//    Son Dao
//    Class (CECS 282-04)
//    Project Name (Prog 1 – Solitaire Prime)
//    Due Date (9/14/2021)
// 
//    I certify that this program is my own original work. I did not copy any part of this program from 
//    any other source. I further certify that I typed each and every line of code in this program.