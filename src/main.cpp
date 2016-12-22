#include <iostream>
#include "io.h"
#include "math.h"

int main() {
	int radius {getRadius()};
	double circumference {calcCircumference(radius)};

	displayAnswer(circumference);

	return 0;
}
