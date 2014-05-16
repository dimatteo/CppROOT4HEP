// This macro contains a main macro that calls a simple function
// This macro is also setup to be compiled
// -------------------------------------------------------------

#include <iostream>

// Define the function: pass object - expensive since you double the memory needs
float funcDouble(float input) {

    // Implement the doubling algorithm
    input = input*2;
    // Return the result
    return input;
}

// Define the function: pass object by reference - much faster way to do it, but careful!
float funcDoubleByRef(float& input) {

    // Implement the doubling algorithm
    input = input*2;
    // Return the result
    return input;
}

void functions() {

	std::cout << "First we call a function that doubles a float" << std::endl;

    // Prepare the variable to be doubled
	float myFloatBefore = 2.3;
    // Prepare the variable to contain the result of the doubling operation
	float myFloatAfter;
    // Double the input number
	myFloatAfter = funcDouble(myFloatBefore);
    
    // Verify that all went well
	std::cout << myFloatBefore << " x 2 = " << myFloatAfter << std::endl;

	std::cout << "Now we do the same thing but instead of passing the object itself we will pass "
              << "the reference(aka memory address) to the object" 
	          << std::endl;

    // Prepare the variable to be doubled
	myFloatBefore = 2.3;
    // Double the input number
	myFloatAfter = funcDoubleByRef(myFloatBefore);

    // Verify that all went well
	std::cout << myFloatBefore << " x 2 = " << myFloatAfter << std::endl;
    // What was going on here?

    return;
}