#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[])
{
	std::ifstream mystream;
	mystream.open("Mandela.txt");
	std::string story;
	std::string nameToReplace(argv[1]);
	std::string replacingName(argv[2]);
	std::size_t position;

	while(std::getline(mystream, story))
	{
	}
	while((position = story.find(nameToReplace))!= string::npos)
	{
		story.replace(position, nameToReplace.length(), replacingName);
	}
	std::cout << story;
	std::cin.ignore();
}