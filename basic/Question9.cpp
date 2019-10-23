#include <iostream>
using namespace std;
//************************************************************
// class cashRegister 
// This class specifies the members to implement a cash register.
//************************************************************

class cashRegister
{
    private:
	int cashOnHand; 
    public:
	cashRegister(); //Constructor Sets the cash in the register to a default amount.
	cashRegister(int cashIn); //Constructor Sets the cash in the register to a specific amount.
	int getCurrentBalance();	//The value of cashOnHand is returned.
	void acceptAmount(int amountIn);//Function to receive the amount deposited by the customer  
                                          //and update amount in the register.
};

//************************************************************
// class dispenserType
// This class specifies the members to implement a dispenser.
//************************************************************

class dispenserType
{
   private:
	int numberOfItems; //variable to store the number of items in the dispenser
	int cost; //variable to store the cost of an item
   public:
	dispenserType(); //Constructor Sets the cost and number of items in the dispenser to the default
	dispenserType(int setNoOfItems, int setCost); //Constructor Sets to the values specified
	int getNoOfItems();	//The value of numberOfItems is returned.
	int getCost();	//Function to show the cost of the item. The value of cost is returned.
	void makeSale(); //Function to reduce the number of items by 1.
};


cashRegister::cashRegister()
{
	cashOnHand = 500;
}

cashRegister::cashRegister(int cashIn)
{
	cashOnHand = cashIn;
}

int cashRegister::getCurrentBalance()
{
	return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn)
{

	cashOnHand = cashOnHand + amountIn;
}

dispenserType::dispenserType()
{
	numberOfItems = 50;
	cost = 50;
}

dispenserType::dispenserType(int setNoOfItems, int setCost)
{
	numberOfItems = setNoOfItems;
	cost = setCost;
}

int dispenserType::getNoOfItems()
{
	return numberOfItems;
}

int dispenserType::getCost()
{
	return cost;
}

void dispenserType::makeSale()
{
	numberOfItems--;
}


//*****************************************************
// This program uses the classes cashRegister and
// dispenserType to implement a candy machine.
// ****************************************************



void showSelection();
void sellProduct(dispenserType& product, cashRegister& pCounter);
int main()
{
	cashRegister counter;
	dispenserType candy(100, 50);
	dispenserType chips(100, 65);
	dispenserType gum(75, 45);
	dispenserType cookies(50, 85);
	int choice;
	showSelection();
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
			case 1:
				sellProduct(candy, counter);
				break;
			case 2:
				sellProduct(chips, counter);
				break;
			case 3:
				sellProduct(gum, counter);
				break;
			case 4:
				sellProduct(cookies, counter);
				break;
			default:
				cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >> choice;
	}	
	return 0;
}

void showSelection()
{
	cout << "*** Welcome to Candy Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for Candy" << endl;
	cout << "2 for Chips" << endl;
	cout << "3 for Gum" << endl;
	cout << "4 for Cookies" << endl;
	cout << "5 to exit" << endl;
}

void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount; //variable to hold the amount entered
	int amount2; //variable to hold the extra amount needed
	if (product.getNoOfItems() > 0) //if the dispenser is not empty
	{
		cout << "Please deposit " << product.getCost() << " cents" << endl;
		cin >> amount;
		if (amount < product.getCost())
		{
			cout << "Please deposit another " << product.getCost()- amount << " cents" << endl;
			cin >> amount2;
			amount = amount + amount2;
		}
		
		if (amount >= product.getCost())
		{
			pCounter.acceptAmount(amount);
			product.makeSale();
			cout << "Collect your item at the bottom and " << "enjoy." << endl;
		}

		else
			cout << "The amount is not enough. " << "Collect what you deposited." << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;
	}
	else
		cout << "Sorry, this item is sold out." << endl;
}
