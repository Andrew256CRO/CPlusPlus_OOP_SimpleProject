#include <iostream>
#include"Toy.hpp"
#include"ToyCar.hpp"
#include"Drone.hpp"
#include"DroneVector.hpp"
#include<vector>//std::vector
#include<algorithm>//std::sort

int main()
{
	Toy toy1("red", 485.5);
	Toy toy2("black", 50);
	Toy toy3("blue", 96.54);
	Toy toy4("orange", 12);
	toy1.show();
	toy2.show();
	toy3.show();
	toy4.show();
	toy2.changeColor("rainbow");//the new color for toy2 will change from BLACK to RAINBOW.
	toy2.show();//will display the newly updated color
	ToyCar toycar1("purple", 96.45, 4);
	ToyCar toycar2("yellow", 180, 3);
	ToyCar toycar3("white", 680.96, 6);
	ToyCar toycar4("green", 63.54, 2);
	toycar1.showCars();
	toycar2.showCars();
	toycar3.showCars();
	toycar4.showCars();
	std::cout << (toycar1 < toycar2) << std::endl;//will show 0 because 4 < 3 is false.
	std::cout << (toycar1 < toycar3) << std::endl;//will show 1 because 4 <6 is true.
	Drone drone1("mixed", 86.42, 4);
	Drone drone2("bright red", 862, 8);
	Drone drone3("blue", 100.50, 6);
	Drone drone4("brown", 53.46, 2);
	drone1.showDrone();
	drone2.showDrone();
	drone3.showDrone();
	drone4.showDrone();
	std::vector<Drone>drones;
	drones.push_back(drone1);
	drones.push_back(drone2);
	drones.push_back(drone3);
	drones.push_back(drone4);
	showVectorOfDrones _drones;
	_drones.vectorOfDrones(drones);
	//std::sort(drones.begin(), drones.end(),Drone::compare);//???????????????
	//_drones.vectorOfDrones(drones);
	return 0;
}
