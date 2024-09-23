///////////////////////////////////////////////
//				Simple ToDo List			 //
//                 Build: Beta				 //
//      Developer: Logan Connors/PPRClip	 //
//                version 1.0                //
//											 //
///////////////////////////////////////////////

#include <thread>
#include <chrono>
#include <iostream>
#include <thread>
#include <string>
#include <fstream>

using namespace std;

// All Variables
string task, date, title;
int ID, currentTask;

// Declaring the functions
void errorHandling();
void closeApp();
void viewTask();
void createTask();
void updateTask();
void deleteTask();
void searchTask();

//	Main Window
void main() {

	// Create and open a text file
	ofstream MyFile("TasksToDo.txt");

	// Write to the file
	// MyFile << "Files can be tricky, but it is fun enough!";

	cout << "\t\t\t*************************************************************************\n";
	cout << "\t\t\t*                       Welcome to Your ToDo List                       *\n";
	cout << "\t\t\t*************************************************************************\n";

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "\t\t\t1.View All Tasks\n";
	cout << "\t\t\t2.Create New Task\n";
	cout << "\t\t\t3.Update Task\n";
	cout << "\t\t\t4.Delete Task\n";
	cout << "\t\t\t5.Search for Task\n";
	cout << "\t\t\t6.Close ToDo List\n";
	cout << "\n";
	cout << "\t\t\tEnter Choice:"; cin >> currentTask;

	if (currentTask == 1) {

		viewTask();

	}
	else if (currentTask == 2) {

		createTask();

	}
	else if (currentTask == 3) {

		updateTask();

	}
	else if (currentTask == 4) {

		deleteTask();

	}
	else if (currentTask == 5) {

		searchTask();

	}
	else if (currentTask == 6) {

		closeApp();

	}
	else {

		errorHandling();

	}

	// Close the file
	MyFile.close();

}

// Function for closing program
void closeApp() {

	cout << "\n";
	cout << "\t\t\tThank you for using my ToDo List.\n";
	this_thread::sleep_for(chrono::seconds(3));
	cout << "\t\t\tExiting in 5 Seconds\n";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\t\t\tExiting in 4 Seconds\n";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\t\t\tExiting in 3 Seconds\n";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\t\t\tExiting in 2 Seconds\n";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\t\t\tExiting in 1 Seconds\n";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\t\t\tExiting Now!\n";
	this_thread::sleep_for(chrono::milliseconds(300));
	exit;

}

// Function for Error Handling
void errorHandling() {

	main();

}

// Function for Viewing all Tasks
void viewTask() {



}

// Function for Creating new Tasks
void createTask() {



}

// Function for Updating Tasks
void updateTask() {



}

// Function for Deleting Tasks
void deleteTask() {



}

// Function for Searching for Tasks
void searchTask() {



}