#include <iostream>
#include <iomanip>
#include <string>
#include "functions.h"

void yearChosen()
{
	int choiceYear;


	//First do while loop
	do {
		system("CLS");

		std::cout << std::setw(WIDTH_BTW_LINES + 2) << "" << "Years a world cup was held on:\n\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "1)  1930\t\t\t2)  1934\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "3)  1938\t\t\t4)  1950\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "5)  1954\t\t\t6)  1958\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "7)  1962\t\t\t8)  1966\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "9)  1970\t\t\t10) 1974\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "11) 1978\t\t\t12) 1982\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "13) 1986\t\t\t14) 1990\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "15) 1994\t\t\t16) 1998\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "17) 2002\t\t\t18) 2006\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "19) 2010\t\t\t20) 2014\n";
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "0) EXIT\n";

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter your choice: ";
		std::cin >> choiceYear;
		std::cout << "\n\n";
		switch (choiceYear)
		{
		case 1:yearChosen(); break;
		case 2:yearChosen(); break;
		case 3:yearChosen(); break;
		case 4:yearChosen(); break;
		case 5:yearChosen(); break;
		case 6:yearChosen(); break;
		case 7:yearChosen(); break;
		case 8:yearChosen(); break;
		case 9:yearChosen(); break;
		case 10:yearChosen(); break;
		case 11:yearChosen(); break;
		case 12:yearChosen(); break;
		case 13:yearChosen(); break;
		case 14:yearChosen(); break;
		case 15:yearChosen(); break;
		case 16:yearChosen(); break;
		case 17:yearChosen(); break;
		case 18:yearChosen(); break;
		case 19:yearChosen(); break;
		case 20:yearChosen(); break;
		case 0:	system("CLS"); break;
		default: 	system("CLS");
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "INVALID CHOICE. Please choose between 1 - 20!" << std::endl; break;
			system("CLS");
		}
		std::cin.clear();					//it takes care of the strings entered
		std::cin.ignore(INT_MAX, '\n');
	} while (choiceYear != 0);	//End of main do while loop

	system("CLS");              //it makes the UI cleaner
}

//IMPORTANT NOTICE: how to print year if someone adds one?
void add()
{
	//*******************************************************************************************
	//The user should be given a choice to exit in the middle of entering the data
	//*******************************************************************************************
	const int MAX_NUM_TEAMS = 50;
	int year;
	int numberOfTeams;
	int goalScoredFirstTeam, goalScoredSecondTeam;
	std::string teams[MAX_NUM_TEAMS];
	std::string FirstTeamFinalMatch, SecondteamFinalMatch;
	std::string stadiumName;
	std::string cityHost;


	try {
		system("CLS");

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the year: " << "                            ";
		std::cin >> year;					                                               // to be changed with writing in the file
		if (std::cin.fail()) throw "\n\t\t\t\t\t\t\t\tINVALID YEAR";
		std::cin.ignore(INT_MAX, '\n');

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the number of teams: " << "                 ";
		std::cin >> numberOfTeams;
		if (std::cin.fail()) throw "\n\t\t\t\t\t\t\t\tINVALID INPUT";
		std::cin.ignore(INT_MAX, '\n');

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the teams: " << std::endl;
		for (int n = 0; n < numberOfTeams; n++)
		{
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "                                          " << ">";

			getline(std::cin, teams[n], '\n');
			std::cin.ignore(INT_MAX, '\n');
		}

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the teams in the final match: " << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Team #1: " << "                                   ";
		getline(std::cin, FirstTeamFinalMatch);
		std::cin.ignore(INT_MAX, '\n');
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Team #2: " << "                                   ";
		getline(std::cin, SecondteamFinalMatch);
		std::cin.ignore(INT_MAX, '\n');

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the result of the final match: " << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Goals made by " << FirstTeamFinalMatch << " were: " << "                      ";
		std::cin >> goalScoredFirstTeam;
		if (std::cin.fail()) throw "\n\t\t\t\t\t\t\t\tINVALID INPUT";
		std::cin.ignore(INT_MAX, '\n');

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Goals made by " << SecondteamFinalMatch << " were: " << "                      ";
		std::cin >> goalScoredSecondTeam;
		if (std::cin.fail()) throw "\n\t\t\t\t\t\t\t\tINVALID NUMBER OF GOALS";
		std::cin.ignore(INT_MAX, '\n');

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the stadium's name? " << "                  ";
		getline(std::cin, stadiumName);
		std::cin.ignore(INT_MAX, '\n');

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter the city that hosted the Final match: ";
		getline(std::cin, cityHost);
		std::cin.ignore(INT_MAX, '\n');
	}
	catch (char *msg)
	{
		std::cout << msg << std::endl;
	}
	catch (...)
	{
		std::cout << "ERROR" << std::endl;
	}
}

void display_year_data()
{
	int choiceYear;

	do {
		system("CLS");

		try {
			std::cout << std::setw(WIDTH_BTW_LINES + 2) << "" << "Years a world cup was held on:\n\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "1)  1930\t\t\t2)  1934\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "3)  1938\t\t\t4)  1950\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "5)  1954\t\t\t6)  1958\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "7)  1962\t\t\t8)  1966\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "9)  1970\t\t\t10) 1974\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "11) 1978\t\t\t12) 1982\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "13) 1986\t\t\t14) 1990\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "15) 1994\t\t\t16) 1998\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "17) 2002\t\t\t18) 2006\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "19) 2010\t\t\t20) 2014\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "0) EXIT\n";

			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter your choice: ";
			std::cin >> choiceYear;
			std::cout << "\n\n";
			if (std::cin.fail() || choiceYear < 0 || choiceYear > 20) throw "INVALID CHOICE PLEASE ENTER A CHOICE 1-20! ";
		}
		catch (char *msg)
		{
			std::cout << msg << std::endl;
		}

		//search function to traverse BST and find year
		//
		// cout >> year.getData();
	} while (choiceYear != 0);
}

//USELESS CODE FOR NOW
/*void checkPreviousYears()
{

	system("CLS");
	int choice;
	do {

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "What do you want to check? " << "" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "1) Teams in the World Cup" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "2) Final match information" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "3) Best Player " << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "4) Number of games" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "5) Goal per game" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "6) Average Attendence" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "7) Total attendence" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "8) Host country" << std::endl;
		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "0) EXIT\n";

		std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter your choice: ";
		std::cin >> choice;
		std::cout << "\n\n";
		switch (choice)
		{
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: break;
			case 8: break;

		default: 	system("CLS");
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "INVALID CHOICE. Please enter a number 1 - 8!" << std::endl; break;

		}

		std::cin.clear();             //it takes care of the strings entered
		std::cin.ignore(INT_MAX, '\n');

	} while (choice != 0);	//End of main do while loop


};*/

void hashtable_list()
{
	//call hashtable file io function (get data from txt, put into hashtable)
}

void sort_data_by_choice()
{
	int user_choice;
	do
	{

		try {
			std::cout << std::setw(WIDTH_BTW_LINES + 2) << "" << "By which information do you want our database to be sorted in?:\n\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "1)  Year\t\t\t2)  Stadium name\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "3)  Number of goals\t\t\t4)  City\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "5)  Country\t\t\t6)  Finalists\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "0) EXIT\n";

			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter your choice: ";
			std::cin >> user_choice;
			if (std::cin.fail() || user_choice <= 0 || user_choice > 6)throw "INVALID CHOICE. PLEASE ENTER A CHOICE 1-20 !";

			std::cout << "\n\n";
			switch (user_choice)
			{
			//insert sort functions
			case 1: break; // sort bst by year
			case 2: break; //sory bst by the stadium
			case 3: break; //sort bst by most goals
			case 4: break; //sort bst by City
			case 5: break; //sort bst by Country
			case 6: break; //sort bst by the Finalists
			default: 	system("CLS");
				std::cout << std::setw(WIDTH_BTW_LINES) << "" << "INVALID CHOICE. Please enter a number 1 - 6!" << std::endl; break;
				system("CLS");
			}
		}
		catch (char *msg)
		{
			std::cout << msg << std::endl;
		}
		catch (...)
		{
			std::cout << "ERROR" << std::endl;
		}
	} while (user_choice >= 1 && user_choice <= 5);

}

void pretty_print()
{
	//call bst.print();
}

//IMPORTANT NOTE: How to print years if someone deletes a year?
void remove_year()
{
	int choiceYear;

	do {
		system("CLS");

		try {
			std::cout << std::setw(WIDTH_BTW_LINES + 2) << "" << "Years a world cup was held on:\n\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "1)  1930\t\t\t2)  1934\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "3)  1938\t\t\t4)  1950\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "5)  1954\t\t\t6)  1958\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "7)  1962\t\t\t8)  1966\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "9)  1970\t\t\t10) 1974\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "11) 1978\t\t\t12) 1982\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "13) 1986\t\t\t14) 1990\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "15) 1994\t\t\t16) 1998\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "17) 2002\t\t\t18) 2006\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "19) 2010\t\t\t20) 2014\n";
			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "0) EXIT\n";

			std::cout << std::setw(WIDTH_BTW_LINES) << "" << "Enter your choice: ";
			std::cin >> choiceYear;
			std::cout << "\n\n";
			if (std::cin.fail() || (choiceYear < 0) || choiceYear >= 20) throw "PLEASE ENTER AN VALID CHOICE 1-20 !";
		}
		catch (char *msg)
		{
			std::cout << msg << std::endl;
		}
		//search function to traverse BST and find year
		//
		// call bst.remove(value)
	} while (choiceYear != 0);
}