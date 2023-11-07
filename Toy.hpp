#pragma once
#include<string>
class Toy {
protected:
	std::string color;
	double fullPrice;
public:
	void show();
	~Toy();
	Toy();
	Toy(std::string color, double fullPrice);
	void changeColor(std::string newColor);
};
