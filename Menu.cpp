#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

struct menuItemType 
{
	string menuItem;
	double menuPrice;
};

void getdata(menuItemType menuList[],int&);
void showMenu();
void printCheck(menuItemType menuList[], int&);

menuItemType menuList[8];

double totalPrice;
double tax; 
double amountdue;

int main()
{ 
	int count = 0;
	

	showMenu();
	getdata(menuList,count);
	printCheck(menuList,count);

	system("pause");
	return 0;
}

// Function prints check of menu items on screen // 

void printCheck(menuItemType menuList[8] , int& count)

{
	cout << "-------- Customer Receipt ---------- "<< endl << endl;

	for (int i = 1; i < count; i++)
	{
		cout << menuList[i].menuItem << " ....... " << "$" << menuList[i].menuPrice << endl;

		totalPrice = menuList[i].menuPrice + totalPrice; // calculates total price without tax //
	}

	tax = 0.05 * totalPrice; // calculates the tax of the check // 
	amountdue = tax + totalPrice; // calculates amount including tax //

	cout << endl;
	cout << "Tax:" << setprecision (2) << setw(15) << "$" << tax << endl; // tax // 
	cout << "Amount Due:" << setprecision (3) << setw (8) << "$" << amountdue << endl; // Amount Due // 

    cout << "----------------------------------- "<< endl;
}

// Function show menu items and price of each menu item // 

void showMenu()
{
	cout << "Welcome to The Don's Restaurant!" << endl << endl;

	cout << right; 

	cout << "Menu Item"<< setw(20) << "Price" << endl << endl;

	cout << "1) Plain Egg" << setw(17)
		 << " $1.45" << endl;

	cout << "2) Bacon and Egg" << setw(13)
		 << " $2.45" << endl;

	cout << "3) Muffin" << setw (20)
		 << " $0.99"<< endl; 

	cout << "4) French Toast" << setw (14)
		 << " $1.99" << endl;

	cout << "5) Fruit Basket" << setw(14)
		 << " $2.49"<< endl;

	cout << "6) Cereal" << setw(20)
		 << " $0.69"<< endl;

	cout << "7) Coffee" << setw(20)
		 <<" $0.50"<< endl;

	cout << "8) Tea" << setw (23)
		 << " $0.75"<<  endl;

}

// Function get data for each menu item and price storing it into an array. // 

void getdata(menuItemType menuList[8], int& count)
{
	int num = 1;
	count = 1;

	cout << "Please enter menu item. When you are done enter 0 to contiune." << endl << endl;

	while (num != 0)
	{
		cin >> num; // user input of item // 

		switch (num)
		{
		case 0:
			cout << endl;
			break;
		case 1:
			cout << "Plain Egg" << endl;
			menuList[count].menuItem = "Plain Egg";
			menuList[count].menuPrice = 1.45;
			break;
		case 2:
			cout << "Bacon and Egg" << endl;
			menuList[count].menuItem = "Bacon and Egg";
			menuList[count].menuPrice = 2.45;
			break;
		case 3:
			cout << "Muffin" << endl;
			menuList[count].menuItem = "Muffin";
			menuList[count].menuPrice = 0.99;
			break;
		case 4:
			cout << "French Toast" << endl;
			menuList[count].menuItem = "French Toast";
			menuList[count].menuPrice = 1.99;
			break;
		case 5:
			cout << "Fruit Basket" << endl;
			menuList[count].menuItem = "Fruit Basket";
			menuList[count].menuPrice = 2.49;
			break;
		case 6:
			cout << "Cereal" << endl;
			menuList[count].menuItem = "Cereal";
			menuList[count].menuPrice = 0.69;
			break;
		case 7:
			cout << "Coffee" << endl;
			menuList[count].menuItem = "Coffee";
			menuList[count].menuPrice = 0.50;
			break;
		case 8:
			cout << "Tea" << endl;
			menuList[count].menuItem = "Tea";
			menuList[count].menuPrice = 0.75;
			break;
		default:
			cout << "Selections must be between 1 and 8" << endl;
			break;
		}

		count++;
	}
}