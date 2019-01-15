/*
 * Main.cpp
 *
 * Version information
 * Author: Nathan Doherty
 * Date: 15/01/2019
 *
 * Copyright notice
 */
#include "weightTelemetry.h"
#include <iostream>

using namespace std;
weightTelemetry terexMachine;
int main() {
	cout << "Terex - Weight Detection Simulator" << endl<<endl;
	
	for (int i = 0; i < 12; i++) {
		terexMachine.createInputData();
		terexMachine.calculateAverage(i);
		cout << "The Average for Hour " << i<<": "<< terexMachine.getAverage(i)<<endl;
	}
	return 0;
}