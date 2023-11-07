#include<iostream>
#include"DroneVector.hpp"

void showVectorOfDrones::vectorOfDrones(std::vector<Drone> drones) {
	std::vector<Drone>::iterator drone;
	for (drone = drones.begin(); drone != drones.end(); drone++) {
		(*drone).showDrone();
	}
}