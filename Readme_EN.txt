Football League Management Project
This project is designed to manage a football league, including the creation of leagues, clubs, and players, as well as managing data related to them.
The program allows users to interact through a menu to perform various operations such as adding clubs, players, modifying data, and calculating salary expenses.

Project Description:
This C project enables the creation and management of a football league, where users can register clubs, introduce players, modify their data, and perform calculations on salary expenses.
Each league consists of a set of clubs, and each club has an associated set of players. Below are the main features of the project:

Data Structures:
Date: Represents a date with three fields: day, month, and year.
Player: Represents a football player with attributes such as First Name, Last Name, Nickname, Shirt Number, Position, and Salary.
Club: Represents a football club, including the club's Name, Number of Subscribers, Budget, Foundation Date, and associated Players.
League: Represents the football league, with attributes such as Name, Category, Organizer, Status, Number of Teams, Budget, and participating Clubs.

Functionalities:
Create League: Enables the creation of a league with basic information like name, category, organizer, status, number of teams, and budget.
Add Clubs: Allows the addition of clubs to the league, specifying the name, number of subscribers, budget, and foundation date.
Add Players: Allows players to be added to a club by providing their first name, last names, nickname, shirt number, position, and salary.
Modify Player Data: Enables the modification of information about a registered player.
List Data: Displays information about the league, clubs, and players.
Remove Players: Allows the removal of players from a club.
Calculate Salary Expenses: Calculates and displays the total salary expenses of players for each club.

Menu Options:

The menu includes the following options:
Enter league data.
Add clubs to the league.
List league data.
List club data.
Add players to a club.
Modify player data.
List players in a club.
Remove players from a club.
Calculate salary expenses for clubs.
Exit the program.

Requirements:
Compiler: A C compiler compatible with the C99 standard or higher is required.
Operating System: Works on Windows, Linux, and macOS operating systems.

Usage Instructions:
Compilation and Execution:
To compile the project, use a C compiler (e.g., GCC) with the following command:

gcc -o league_management league_management.c

To run the program, use the following command:

./league_management

Interaction:
The program will display a menu of options. Users can select options by entering the corresponding number.
The program allows users to add, modify, and list data about leagues, clubs, and players.
It also calculates salary expenses for players in each club.

Example Usage:
Create a league: Users can input the league name, category, organizer, status, number of teams, and budget.
Add clubs: Users can add multiple clubs to the league, including information such as the club name, number of subscribers, budget, and foundation date.
Add players to a club: Players can be added to a club with data such as their name, surnames, nickname, shirt number, position, and salary.
Modify players: Users can modify the data of a previously entered player.
Remove players: Players can be removed from a club.
Calculate expenses: The program calculates and displays the salary expenses of all players in a club.

Contributions:
Contributions to the project are welcome. If you want to improve the code, add new features, or fix bugs, please follow these steps:

Fork the repository.
Create a new branch for your changes:
	git checkout -b feature/new-feature
Make your changes and commit them:
	git commit -am 'Add new feature'
Push to the branch:
	git push origin feature/new-feature
Create a pull request describing the changes made.