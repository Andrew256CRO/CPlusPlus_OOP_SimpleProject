#pragma once
#include"Toy.hpp"

class ToyCar : public Toy {
private:
	unsigned int numberOfBatteries;
public:
	~ToyCar();
	ToyCar();
	ToyCar(std::string color, double fullPrice, unsigned int numberOfBatteries);
	void showCars();
	int getNumberOfBatteries();
	bool operator<(ToyCar toycar);
};
