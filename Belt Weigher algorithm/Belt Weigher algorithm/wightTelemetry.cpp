/*
 * weightTelemetry.cpp
 *
 * Version information
 * Author: Nathan Doherty
 * Date: 15/01/2019
 *
 * Copyright notice
 */
#include "weightTelemetry.h"
//#include <random>

weightTelemetry::weightTelemetry() {

}

void weightTelemetry::createInputData() {
	totalAmountPerHour_ = 0;
	millisecondTelemetry_.clear();
	for (int i = 0; i < 3600; ++i) {
		millisecondTelemetry_.push_back(generateRandomNumber()); //generateRandomNumber() would be replaced with data from sensor
		totalAmountPerHour_ += millisecondTelemetry_.at(i);
	}
}
void weightTelemetry::calculateAverage(int hour) {
	averagePerHour_[hour] = totalAmountPerHour_ / millisecondTelemetry_.size();
}
float weightTelemetry::getWeight() {
	return weight_;
}
int weightTelemetry::getSpeed() {
	return speed_;
}
float weightTelemetry::generateRandomNumber() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 0.1667);
	float outcome = dis(gen);
	return outcome;
}
float  weightTelemetry::getAverage(int position) {
	return averagePerHour_[position];
}