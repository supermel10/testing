#include <iostream>
using namespace std;

/* This is a practice program that simulates a vending machine. 
Program will print an inventory with a unit number. 
User will choose a product and input the unit number. 
Program will check to see if input is valid. 
Program will check with user if that is the product they want and display a price. 
User will say Yes or No. 
If yes program will print Congrats you have purchased product. 
If no program will print Please select a product and start process over. */

class Menu{ 
	public: 
		void Inventory(){
			cout << "Vending Machine Menu \n";
			cout << "Please select a product \n";
			cout << "---------------------------- \n";
			cout << "Lays  Cheetos  Doritos  Ruffles  SunChips \n";
			cout << " 01      02       03       04       05    \n";
			cout << "Fritos  Pretzle  CheezIt  Chex  Popcorn \n";
			cout << "  06       07       08     09      10   \n";
			cout << "Hersheys  Reeses  KitKat  Snickers  M&M \n";
			cout << "   11       12      13       14      15 \n";
			cout << "Tea  Gatorade  Juice  Milk  Snapple \n";
			cout << " 16     17       18    19     20    \n";
			cout << "Coke  Pepsi  Fanta  Monster  Sprite \n";
			cout << " 21     22     23      24      25   \n";
		}
};


int main(){
	Menu cust;
	cust.Inventory();
	int	userInput;
	bool check;
	float chips = 2.50;
	float candy = 1.75;
	float drinks = 2.75;
	cin >> userInput;
	cout << "You have selected " << userInput << "\n";
	if (userInput <= 10){
		cout << "Price: " << chips << "\n";
	}
	else if(userInput > 10 && userInput <= 15){
		cout << "Price: " << candy << "\n";
	}
	else{
		cout << "Price: " << drinks << "\n";
	}
	cout << "Would you like to continue with this selection (T/F)";
	cin >> check;
	if (check == true){
	cout << "Enjoy your purchase!";
	}
	else{
	cout << "Please select the desired item";
	userInput = 00;
	}
	userInput = 00;
	return 0;
}
	
	
	

		
