/*
 * weightTelemetry.h
 *
 * Version information
 * Author: Nathan Doherty
 * Date: 15/01/2019
 *
 * Copyright notice
 */
#pragma once
#include <vector>
#include <string>
#include <random>

class weightTelemetry {
	float weight_;
	float totalAmountPerHour_;
	int speed_;
	float averagePerHour_[12];
	int vibration_;
	std::vector<float> millisecondTelemetry_;
	float generateRandomNumber();
public:
	weightTelemetry();
	void createInputData();
	void calculateAverage(int);
	float getWeight();
	int getSpeed();
	float getAverage(int);
};