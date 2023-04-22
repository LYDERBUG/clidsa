#include<iostream>
#include<string>
#include<fstream>


#include"application.h"

Application::Application() {

}
Application::~Application() {}


void Application::Run() {
	std::string userInput;

	std::cout << "CLIdsa Windows 1.0r0\nType 'help' to open the user manual\n\n";
	do {
		std::getline(std::cin, userInput);
		if (userInput == "accesslog") {

		}
	} while (true);
}

void Application::SeeLogs() {

}

void Application::AddNewEntry() {

}

void Application::DeleteEntry() {

}