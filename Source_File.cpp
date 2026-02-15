#include "Header_Source_File.h"
#include <iostream>

void helloWorld() {
    std::cout << "Hello World!" << std::endl;
}

void yearCalculator(){

    int UserInput;
    int CurrentYear = 2026;

    std::cout << "Please enter what year you where born and I will calculate your age: " << std::endl;
    std::cin >> UserInput;

    int UserAge = CurrentYear - UserInput;
    
    std::cout << "Your age is: " << UserAge << std::endl;
}

void calculatorAddition(){
    int FirstChest;
    int SecondChest = 2026;

    std::cout << "Type in how much coins there are in the first chest: " << std::endl;
    std::cin >> FirstChest;
    std::cout << "Type in how much coins there are in the second chest: " << std::endl;
    std::cin >> SecondChest;

    int ChestTogether = FirstChest + SecondChest;
    
    std::cout << "In both chests there are: " << ChestTogether << " coins." << std::endl;
}

void calculatorDivision(){

    double FirstNumber;
    double SecondNumber;

    std::cout << "Type in the volume of the first bottle in liters: " << std::endl;
    std::cin >> FirstNumber;
    std::cout << "Type in the volume of the second bottle in liters: " << std::endl;
    std::cin >> SecondNumber;

    double DevidedVolumeOfBttles = (FirstNumber + SecondNumber) / 2.0;
    
    std::cout << "Each adventurer should get: " << DevidedVolumeOfBttles << "liter of the liquid." << std::endl;
}

void timeCalculator(){
    double TimeGiven;
    double HourInMinutes = 60.0;

    std::cout << "Please give me an amount of minutes so I can convert them to hours: " << std::endl;
    std::cin >> TimeGiven;

    double ConvertedTime = TimeGiven / HourInMinutes;

    std::cout << "The given converted time is " << ConvertedTime << " hours." << std::endl;
}

void iAmVeryLoud(){
    std::string UserInput;

    std::cout << "Type in something you would like me to say louder: " << std::endl;
    
    std::getline(std::cin, UserInput);

    //Go through every character inside the string UserInput, and convert each one to uppercase.
    for (char &ConvertedString  : UserInput)
    {
        ConvertedString = std::toupper(ConvertedString);
    }
    
    std::cout << "Your input louder would be: " << UserInput << "!" << std::endl;
}