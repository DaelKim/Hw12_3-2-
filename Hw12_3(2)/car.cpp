#include "car.h"
#include <iostream>  //  for cout

void Car::speedUp(float x) {
	speed += x;
};
void Car::speedDown(float x) {
	speed -= x;
}


void Car::speedUpthirty(float speedplusthirty) {
	speed = speed + speedplusthirty;
}


void Car::setPrice(float x) {
	price = x;
}
float Car::getPrice() {
	return price;
}
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWheels(int n) {
	wheels = n;
}
int Car::getWheels() {
	return wheels;
}
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";
	}
}


void Car::howmanyseat(int seat) {
	std::cout << seat;
}