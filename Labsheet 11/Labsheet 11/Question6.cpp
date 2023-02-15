// Login: C00286445
// Name: Harvey McNevin
// Date: 15/2/23
// Approximate time taken: 10 minutes
//---------------------------------------------------------------------------------------------------------
// Program: Allows the user to enter numbers continuously until they enter a 0 which terminates the program
// --------------------------------------------------------------------------------------------------------
// Known Bugs:
// Zero error checking on user input


#include <iostream>
#include <string>

std::string findPlayerName (std::string t_aName, std::string t_playerNames[], int t_scoresArray[],  int t_noOfPlayers);
std::string findPlayerScore (std::string t_aName, std::string t_playerNames[], int t_scoresArray[],  int t_noOfPlayers);
void initializeArrays(std::string t_nameArray[], int t_scoreArray[]);

const int MAX_PLAYERS = 10; int main() 
{	
	std::string playerNames[MAX_PLAYERS]; //local arrays
    int playerScores[MAX_PLAYERS];	
	int noOfPlayers = 8; 	//the number of active players	
	initializeArrays(playerNames, playerScores);


	std::string aName = "";
	std::string foundPlayer = "";

	std::cin >> aName;
	foundPlayer = findPlayerName(aName, playerNames,playerScores,noOfPlayers);

	std::cout << foundPlayer;
} 


void initializeArrays(std::string t_nameArray[], int t_scoreArray[]) // Initialize the two arrays
 { t_nameArray[0] = "David"; 
	t_nameArray[1] = "Jake"; 
	t_nameArray[2] = "Aoife";
	t_nameArray[3] = "Ki";
	t_nameArray[4] = "Joe";
	t_nameArray[5] = "Ray";
	t_nameArray[6] = "Dave";
	t_nameArray[7] = "Sue";

	t_scoreArray[0] = 75;
	t_scoreArray[1] = 65;
	t_scoreArray[2] = 25;
	t_scoreArray[3] = 35;
	t_scoreArray[4] = 40;
	t_scoreArray[5] = 80; 
	t_scoreArray[6] = 55;
	t_scoreArray[7] = 65; 
}

std::string findPlayerName(std::string t_aName, std::string t_playerNames[], int t_scoresArray[], int t_noOfPlayers)
{
	std::string returnMessage = "";
	bool found{ false };//changes if we find our name
	for (int i = 0; i < t_noOfPlayers; i++)
	{
		if(t_playerNames[i] == t_aName)
		{	
			found = true;
			returnMessage = t_aName + " has a score of: " + std::to_string(t_scoresArray[i]);
			break;
		}
	}
	if (!found)
	{
		returnMessage = "Player was not found in the array. ";
	}

	return returnMessage;
}
