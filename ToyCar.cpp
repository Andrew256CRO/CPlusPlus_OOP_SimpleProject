#include"ToyCar.hpp"
#include<iostream>

ToyCar::~ToyCar() {
	std::cout << "ToyCar destructor." << std::endl;
}

ToyCar::ToyCar() :Toy() {
	this->numberOfBatteries = 0;
}

ToyCar::ToyCar(std::string color, double fullPrice, unsigned int numberOfBatteries) :Toy(color, fullPrice) {
	this->numberOfBatteries = numberOfBatteries;
}

void ToyCar::showCars() {
	std::cout << "Car color: " << this->color << " ; " << "Price: " << this->fullPrice << " ; " << "Number of batteries:" << this->numberOfBatteries << "." << std::endl;
}

int ToyCar::getNumberOfBatteries() {
	return this->numberOfBatteries;
}

bool ToyCar::operator<(ToyCar toycar) {
	return this->numberOfBatteries < toycar.getNumberOfBatteries();
}