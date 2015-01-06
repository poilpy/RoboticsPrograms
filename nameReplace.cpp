#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	ifstream textFile(argv[1]);
	ofstream textFile2("replacedText");
	string name = argv[2];
	string file;
	getline(textFile, file);

	for (int i = 0; i < argc; i++)
		printf("argv[%d] is: %s\n", i, argv[i]);

	cout << file;

	return 0;
}