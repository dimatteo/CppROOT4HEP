// This macro contains simple printout example with ROOT (c++ based)
// -----------------------------------------------

{
    // Use std::cout to start printing out to screen
    // Use std::endl to end the line
  	std::cout << "Hello!" << std::endl;
  
    // Printout simple variables
    int myInt = 3;
    float myFloat = 2.5;
    std::string myString = "hola";
	
	std::cout << "Hello " << std::endl;
    // Hint : you can also use the \n character combo 
    // to go to a new line without breaking the print out
	std::cout 
	<< "This is an int: " << myInt << "\n"
	<< "This is a float: " << myFloat << "\n"
	<< "This is a string: " << myString
	<< std::endl;
 
    return;
}