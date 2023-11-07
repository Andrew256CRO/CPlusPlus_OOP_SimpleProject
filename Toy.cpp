#include<iostream>
#include"Toy.hpp"

Toy::~Toy() {
	std::cout << "Toy destructor." << std::endl;
}
Toy::Toy() {
	this->color = "";
	this->fullPrice = 0.0;
}
Toy::Toy(std::string color, double fullPrice) {
	this->color = color;
	this->fullPrice = fullPrice;
}
void Toy::show() {
	std::cout << "Toy color: " << this->color << " ; " << "Price: " << this->fullPrice << "." << std::endl;
}

void Toy::changeColor(std::string newColor) {
	this->color = newColor;
}