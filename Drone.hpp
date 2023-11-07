#pragma once
#include"Toy.hpp"
#include<vector>//std::vector
#include<algorithm>//std::sort

class Drone : public Toy {
private:
	unsigned int numberOfPropellers;
public:
	~Drone();
	Drone();
	Drone(std::string color, double fullPrice, unsigned int numberOfPropellers);
	void showDrone();
	int getNumberOfPropellers();
	bool operator>(Drone drone);
	bool compare(Drone drone1);
};

