#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
using namespace std;
bool isPrime(int n)
{
	bool isPrime = true;

	// 0 and 1 are not prime numbers
	if (n <= 1) {
		isPrime = false;
	}
	else {
		for (int i = 2; i <= n / 2; ++i) {
			if (n % i == 0) 
			{
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;
}

int main() 
{
	srand((time(NULL)));
	string menu = "\n1)	New Deck\n2)	Display Deck\n3)	Shuffle Deck\n4)	Play Solitaire Prime\n5)	Exit";
	Deck deck;
	deck = Deck();
	int choice = 0;
	cout << menu << endl;
	cin >> choice;
	while (choice != 5)

	{
		if (choice == 1)
		{
			cout << "refreshing deck..."<< endl;
			deck.refreshDeck();
		}
		else if (choice == 2)
		{
			cout << "Displaying deck..." << endl;
			deck.showDeck();
		}
		else if (choice == 3)
		{
			cout << "shuffling deck..."<<endl;
			deck.shuffle();
		}
		else if (choice == 4)
		{
			int sum = 0;
			cout << "playing solitaire prime..."<< endl;
			while (deck.cardsLeft() > 0)
			{
				sum = 0;
				Card card;
				card = deck.deal();
				card.showCard();
				cout << ", ";
				sum += card.getValue();

				while (not isPrime(sum) && deck.cardsLeft() > 0)
				{
					card = deck.deal();
					card.showCard();
					cout << ", ";
					sum += card.getValue();
				}
				if (isPrime(sum))
				{
					cout << " prime: " << sum<< endl;
				}
			}
			if (isPrime(sum))
			{
				cout << "winner!!! woooooooo"<< endl;
			}
			else
			{
				cout << "not a prime...looooooooser"<< endl;
			}
			
		}
		else
		{
			cout << "invalid input, try again(1-5)" << endl;
			cin >> choice;
		}
		cout << menu << endl;
		cin >> choice;
	}
	cout << "thank you for playing! bai bai";
}
	
	
//    Son Dao
//    Class (CECS 282-04)
//    Project Name (Prog 1 – Solitaire Prime)
//    Due Date (9/14/2021)
// 
//    I certify that this program is my own original work. I did not copy any part of this program from 
//    any other source. I further certify that I typed each and every line of code in this program.