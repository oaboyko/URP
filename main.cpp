/*
 * main.cpp
 *
 *  Created on: Mar 18, 2014
 *      Author: Alex Boyko
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char** argv){

	ifstream pcn(argv[1]);
	string line;
	int number_of_cubes;
	int number_of_variables;
	stringstream ss;

	if(!pcn){
		cout << "Error opening the file" << endl;
		return -1;
	}

	for(int i = 1; getline(pcn, line); i++){
		ss(line);
		if(i == 1){
			ss >> number_of_variables;
		}
		if(i == 2){
			ss >> number_of_cubes;
		}
	}

	return 0;
}



