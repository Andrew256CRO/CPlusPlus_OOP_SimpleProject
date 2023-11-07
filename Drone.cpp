#include<iostream>
#include"Drone.hpp"

Drone::~Drone() {
	std::cout << "Drone destructor." << std::endl;
}

Drone::Drone() :Toy() {
	this->numberOfPropellers = 0;
}

Drone::Drone(std::string color, double fullPrice, unsigned int numberOfPropellers) :Toy(color, fullPrice) {
	this->numberOfPropellers = numberOfPropellers;
}

void Drone::showDrone() {
	std::cout << "Drone color: " << this->color << " ; " << "Price: " << this->fullPrice << " ; " << "Number of propellers:" << this->numberOfPropellers << "." << std::endl;
}

int Drone::getNumberOfPropellers() {
	return this->numberOfPropellers;
}

bool Drone::operator>(Drone drone) {
	return this->numberOfPropellers > drone.getNumberOfPropellers();
}

bool Drone::compare(Drone drone) {
	return *this > drone;
}