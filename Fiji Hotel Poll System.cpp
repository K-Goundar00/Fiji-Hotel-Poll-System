/*

This program allows the user to cast vote(s) to determine the favourite hotel.
This program will provide the user with five hotels.

These hotels are Maui Palms, Six Senses Fiji, Fiji Gateway, Naviti Resort and Warwick Fiji. 
To view the results the user will be asked to enter '6'. 

*/

# include <iostream>
# include <iomanip>
# include <string>


using namespace std;

int main ()
{

	// Constant declarations
	
	const int HOTEL_1 = 1; // Maui Palms
	
	const int HOTEL_2 = 2; // Six Senses Fiji
	
	const int HOTEL_3 = 3; // Fiji Gateway
	
	const int HOTEL_4 = 4; // Naviti Resort
	
	const int HOTEL_5 = 5; // Warwick Fiji
	
	const int EXIT = 6; // Will end the loop
		
	const int HUNDRED_PERCENT = 100; 
	
	const double CONVERTER = 1.0; // Will be used to convert the integer values to decimal (percentage) 
	
	const int ZERO_VOTES = 0; 
	
	
	// Variable Declarations
	
	int user_input = 0;
	
	int hotel_1_counter = 0; // Maui Palms
	
	int hotel_2_counter = 0; // Six Senses Fiji
	
	int hotel_3_counter = 0; // Fiji Gateway
	
	int hotel_4_counter = 0; // Naviti Resort
	
	int hotel_5_counter = 0; // Warwick Fiji
	
	
	int invalid_votes_counter = 0;
	
	int total_votes = 0;
	
	int valid_votes = 0;
	

	double hotel_percentage_1 = 0; // Maui Palms
	
	double hotel_percentage_2 = 0; // Six Senses Fiji
	
	double hotel_percentage_3 = 0; // Fiji Gateway

	double hotel_percentage_4 = 0; // Naviti Resort
	
	double hotel_percentage_5 = 0; // Warwick Fiji
	
	
	string invalid = ""; 
	
	
	cout<<"\n\t\t:::::::::::::::::::: FAVORITE FIJIAN HOTELS OPINION POLL ::::::::::::::::::::"<<endl;
	
	cout<<"\n\t\t\t\tWELCOME USER\n"<<endl;
	cout<<"\tThis program calculates the votes received by each hotel in Fiji."<<endl;
	cout<<"\tPlease select the number beside the name of the hotel to cast your vote(s)."<<endl;
	cout<<"\tTo view the results of the voting process select \"6\". \n"<<endl;
	cout<<"\t\t\tNOTE: YOU CAN CAST MULTIPLE VOTES\n"<<endl;
	
	
	
	cout<<"\t1. Maui Palms \n"<<endl;
	
	cout<<"\t2. Six Senses Fiji  \n"<<endl;
	
	cout<<"\t3. Fiji Gateway \n"<<endl;
	
	cout<<"\t4. Naviti Resort \n"<<endl;
	
	cout<<"\t5. Warwick Fiji \n"<<endl;
	
	cout<<"\t6. Quit The Voting Process \n"<<endl;
	
	// Codes that will accept and record the votes
	
	while (user_input != EXIT)
	
	{
		
	cout<<"Please Cast Your Vote "<<endl;
	cin>>user_input;
	
	
	if (cin.fail())
	
	{
		cin.clear();
		cin>>invalid;
		cout<<"\tInvalid Vote\n"<<endl;
		invalid_votes_counter++;
			
	}
	
	else if ((user_input > EXIT) || (user_input <= ZERO_VOTES))
	
	{
		invalid_votes_counter++;
		cout<<"\tInvalid Vote\n"<<endl;
	}

	else if (user_input == HOTEL_1 )
	
	{
		hotel_1_counter++;
		cout<<"\tValid Vote\n"<<endl;
	}
	
	else if (user_input == HOTEL_2 )
	
	{
		hotel_2_counter++;
		cout<<"\tValid Vote\n"<<endl;
	}
	
	else if (user_input == HOTEL_3 )
	
	{
		hotel_3_counter++;
		cout<<"\tValid Vote\n"<<endl;
	}
	
	else if (user_input == HOTEL_4 )
	
	{
		hotel_4_counter++;
		cout<<"\tValid Vote\n"<<endl;
	}
	
	else if (user_input == HOTEL_5 )
	
	{
		hotel_5_counter++;
		cout<<"\tValid Vote\n"<<endl;
	}
		
	}
	

	total_votes = hotel_1_counter + hotel_2_counter + hotel_3_counter + hotel_4_counter + hotel_5_counter + invalid_votes_counter;
	
	valid_votes = hotel_1_counter + hotel_2_counter + hotel_3_counter + hotel_4_counter + hotel_5_counter;
	

	cout<<"\n\tTotal Votes Received :   "<<total_votes<<endl;
	cout<<"\n\tTotal Valid Votes    :   "<<valid_votes<<endl;
	cout<<"\n\tTotal Invalid Votes  :   "<<invalid_votes_counter<<endl<<endl;
	
	
	
	hotel_percentage_1 = ((CONVERTER * hotel_1_counter) / (CONVERTER * valid_votes)) * HUNDRED_PERCENT;
	
	hotel_percentage_2 = ((CONVERTER * hotel_2_counter) / (CONVERTER * valid_votes)) * HUNDRED_PERCENT;
	
	hotel_percentage_3 = ((CONVERTER * hotel_3_counter) / (CONVERTER * valid_votes)) * HUNDRED_PERCENT;
	
	hotel_percentage_4 = ((CONVERTER * hotel_4_counter) / (CONVERTER * valid_votes)) * HUNDRED_PERCENT;
	
	hotel_percentage_5 = ((CONVERTER * hotel_5_counter) / (CONVERTER * valid_votes)) * HUNDRED_PERCENT;
	
	cout<<fixed<<setprecision(2);
	
	cout<<"\n\t\t-_-_-_-_-_ FAVORITE FIJIAN HOTELS OPINION POLL -_-_-_-_-_"<<endl<<endl;
	
	cout<<"\tITEM\t"<<"\t   VOTE(S)"<<"       PERCENTAGE(S)"<<endl<<endl;	


	cout<<"\tMaui Palms      "<<setw(6)<<hotel_1_counter<<"\t  "<<setw(12)<<hotel_percentage_1<<" %"<<endl<<endl;
	cout<<"\tSix Senses Fiji "<<setw(6)<<hotel_2_counter<<"\t  "<<setw(12)<<hotel_percentage_2<<" %"<<endl<<endl;
	cout<<"\tFiji Gateway    "<<setw(6)<<hotel_3_counter<<"\t  "<<setw(12)<<hotel_percentage_3<<" %"<<endl<<endl;
	cout<<"\tNaviti Resort   "<<setw(6)<<hotel_4_counter<<"\t  "<<setw(12)<<hotel_percentage_4<<" %"<<endl<<endl;
	cout<<"\tWarwick Fiji    "<<setw(6)<<hotel_5_counter<<"\t  "<<setw(12)<<hotel_percentage_5<<" %"<<endl<<endl;
	

	
	//Codes that will decide which hotel has the majority votes.
	
	if (valid_votes == ZERO_VOTES)
	
	{
		cout<<"\n\tSorry No Vote Was Casted"<<endl;
	}
	
 	else if ((hotel_1_counter > hotel_2_counter ) && (hotel_1_counter > hotel_3_counter) && (hotel_1_counter > hotel_4_counter) && (hotel_1_counter > hotel_5_counter))
	
	{
		cout<<"\n\tAccording to this Poll, the hotel with majority of votes is :\tMaui Palms."<<endl;
	}

	else if ((hotel_2_counter > hotel_1_counter ) && (hotel_2_counter > hotel_3_counter) && (hotel_2_counter > hotel_4_counter) && (hotel_2_counter > hotel_5_counter))
	
	{
		cout<<"\n\tAccording to this Poll, the hotel with majority of votes is :\tSix Senses Fiji."<<endl;
	}
	
	else if ((hotel_3_counter > hotel_1_counter) && (hotel_3_counter > hotel_2_counter) && (hotel_3_counter > hotel_4_counter) && (hotel_3_counter > hotel_5_counter))
	
	{
		cout<<"\n\tAccording to this Poll, the hotel with majority of votes is :\tFiji Gateway."<<endl;
	}
	
	else if ((hotel_4_counter > hotel_1_counter) && (hotel_4_counter > hotel_2_counter) && (hotel_4_counter > hotel_3_counter) && (hotel_4_counter > hotel_5_counter))
	
	{
		cout<<"\n\tAccording to this Poll, the hotel with majority of votes is :\tNaviti Resort."<<endl;
	}
	
	else if ((hotel_5_counter > hotel_1_counter) && (hotel_5_counter > hotel_2_counter) && (hotel_5_counter > hotel_3_counter) && (hotel_5_counter > hotel_4_counter))
	
	{
		cout<<"\n\tAccording to this Poll, the hotel with majority of votes is :\tWarwick Fiji."<<endl;
	}
	
	else 
	{
		cout<<"\t Sorry, there is no favorite hotel "<<endl;
	}
	
	
	cout<<"\n\t :::::::::: HAVE A GREAT DAY :::::::::: "<<endl;

	return 0;
	
}




	
