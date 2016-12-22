#ifndef IO_H
#define IO_H

#include <iostream>

int getRadius() {
	std::cout << "Give me the radius of your circle: ";

	int radius;
	std::cin >> radius;

	return radius;
}

void displayAnswer(double circumference) {
	std::cout << "The circumference of your circle is: " << circumference << std::endl;
}
#endif
