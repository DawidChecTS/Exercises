#include "Header_Source_File.h"
#include <iostream>
#include <set>
#include <vector>

// dir path for UCRT64: /c/Users/checd/OneDrive/Pulpit/Excercies/Week.1

// DATA TYPES

// 1. Hello World
// This is an ode to the original release of the K&R C book from the 70s. Create a program that prints out the universal greeting: "Hello, World".

void helloWorld() {
    std::cout << "Hello World!" << std::endl;
}

// 2. Year Calculator
// Create a program that asks the user which year they were born and then tells them how old they are today.

void yearCalculator(){

    int UserInput;
    int CurrentYear = 2026;

    std::cout << "Please enter what year you where born and I will calculate your age: " << std::endl;
    std::cin >> UserInput;

    int UserAge = CurrentYear - UserInput;
    
    std::cout << "Your age is: " << UserAge << std::endl;
}

// 3. Present yourself
// The Intergalactic Council requires you to register your identity before entering the system. Create a struct Person with name, age, address, phone number and email. 
// Write a program that asks for your name, age, address, phone number and email, then prints them back in a tidy format—your digital passport!

// TO DO

// 4. Calculator: Addition
// You’ve found two treasure chests with gold coins inside. Write a program that asks how many coins are in each chest, 
// then calculates the total treasure by adding them together.

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

// 5. Calculator: Division
// Two bottles of mysterious liquid must be divided between two adventurers. Create a program
// that takes in two numbers (representing volumes) and divides one by the other, showing the result. Be careful: division is trickier than addition!

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

// 6. Time Calculator
// A wise old Timekeeper gives you a certain number of minutes (at least 60) and asks you 
// to convert them into hours and minutes. Write a program that performs this magical conversion.

void timeCalculator(){
    double TimeGiven;
    double HourInMinutes = 60.0;

    std::cout << "Please give me an amount of minutes so I can convert them to hours: " << std::endl;
    std::cin >> TimeGiven;

    double ConvertedTime = TimeGiven / HourInMinutes;

    std::cout << "The given converted time is " << ConvertedTime << " hours." << std::endl;
}

// 7. No Loose Change
// You’re helping a merchant at the market. A customer hands over a pile of SEK, and you need to give them change using the fewest bills and coins possible.
// Write a program that takes an amount of SEK and breaks it down into the largest possible denominations first.

// TO DO

// 8. I am very loud
// The sound is very loud on your computer, forcing you to change all your input to caps lock. Create a program that takes in a 
// lower case string and turns it into uppercase.
void iAmVeryLoud(){
    std::string UserInput;

    std::cout << "Type in something you would like me to say louder: " << std::endl;
    
    std::getline(std::cin, UserInput);

    //Go through every character inside the string UserInput, and convert each one to uppercase.
    for (char &ConvertedString : UserInput)
    {
        ConvertedString = std::toupper(ConvertedString);
    }
    
    std::cout << "Your input louder would be: " << UserInput << "!" << std::endl;
}

// 9. Wordfeud this!
// You are about to loose in a wordfeud game, luckily your programming skills comes in handy. Write a program that takes in two words and the combines 
// the first half of the first word with the second half of the second word.

void wordFeudThis(){
    std::string firstWord;
    std::string secondWord;

    std::cout << "Enter your first word: " << std::endl;
    std::cin >> firstWord;

    std::cout << "Enter your second word: " << std::endl;
    std::cin >> secondWord;

    // Finding midpoints
    int mid1 = firstWord.length() / 2;
    int mid2 = secondWord.length() / 2;

    // First halv of the FirstWord
    std::string firstHalv = firstWord.substr(0,mid1);

    // First halv of the SecondWord
    std::string secondHalv = secondWord.substr(mid2);

    // Combining the two words
    std::string combinedString = firstHalv + secondHalv;

    std::cout << "The result is: " << combinedString <<std::endl;
}

// 10. Initials maker
// Everything is in such a hurry, we need you to be named after your initials from now on. 
// Make a program that takes in your full name and then prints out your initials.

void initialMaker(){
    std::string name;
    std::string surname;

    std::cout << "Enter your first word: " << std::endl;
    std::cin >> name;

    std::cout << "Enter your second word: " << std::endl;
    std::cin >> surname;

    // First halv of the FirstWord
    std::string firstInitial = name.substr(0, 1);

    // First halv of the SecondWord
    std::string secondInitial = surname.substr(0, 2);

    // Combining the two words
    std::string initials = firstInitial + secondInitial;

    std::cout << "Your Initial are: " << initials <<std::endl;
}

// 11. Whats the size?
// Create a program that writes out the size of all the primitive data types we've talked about so far.

void whatTheSize(){
    std::cout << "The size of int is: " << sizeof(int) << "bytes" << std::endl;
    std::cout << "The size of unsign int is: " << sizeof(unsigned int) << "bytes" << std::endl;
    std::cout << "The size of char is: " << sizeof(char) << "bytes" << std::endl;
    std::cout << "The size of string is: " << sizeof(std::string) << "bytes" << std::endl;
    std::cout << "The size of double is: " << sizeof(double) << "bytes" << std::endl;
    std::cout << "The size of float is: " << sizeof(float) << "bytes" << std::endl;
    std::cout << "The size of short is: " << sizeof(short) << "bytes" << std::endl;
    std::cout << "The size of long is: " << sizeof(long) << "bytes" << std::endl;
    std::cout << "The size of long long is: " << sizeof(long long) << "bytes" << std::endl;
    std::cout << "The size of signed char is: " << sizeof(signed char) << "bytes" << std::endl;
}

// CONTROL STATEMENTS

/*
1. Compare a Number with 10
Ask the user to enter a number.

If the number is greater than 10, print: “The number is greater than 10.”
If the number is less than 10, print: “The number is less than 10.”
*/

void compareNumberWith10(){
    double userNumber;

    std::cout << "Enter your number and I will compare it with 10: " << std::endl;
    std::cin >> userNumber;

    if(userNumber > 10){
        std::cout << "The number is greater than 10." << std::endl;
    }
    else if (userNumber < 10){
        std::cout << "The number is less than 10." << std::endl;
    }
}


/*
2. Got milk?
Ask the user how many milk cartons are left.

If the number is less than 10, print: "Order 30 cartons.”
If the number is between 10 and 20 (inclusive), print: “Order 20 cartons.”
Otherwise, print: “You don’t need to order any milk.”
*/
void gotMilk(){
    int milkCartonsLeft;

    std::cout << "how many milk cartons are left?: " << std::endl;
    std::cin >> milkCartonsLeft;

    if(milkCartonsLeft < 10){
        std::cout << "Order 30 cartons." << std::endl;
    }
    else if (milkCartonsLeft >= 10 && milkCartonsLeft <= 20){
        std::cout << "Order 20 cartons." << std::endl;
    }
    else
    std::cout << "You dont need to order any milk." << std::endl;
}

/*
3. Fever Check
Ask the user to enter their temperature from a thermometer.

If the temperature is above 39.5, print: “You should see a doctor.”
Else if it is above 37.8, print: “You have a fever.”
If the temperature is below or equal to 37.8, print: “You do not have a fever.”
*/

void feverCheck(){

    double userTemp;

    std::cout << "Enter their temperature from a thermometer: " << std::endl;
    std::cin >> userTemp;

    if(userTemp > 39.5){
        std::cout << "You should see a doctor." << std::endl;
    }
    else if (userTemp > 37.8 && userTemp <= 39.5){
        std::cout << "You have a fever." << std::endl;
    }
    else
    std::cout << "You do not have a fever." << std::endl;
}

/*
4. Age Check
Ask the user to enter their age.

If the age is less than 18, print: “You are not an adult.”
If the age is over 65, print: “You are a pensioner.”
Otherwise, print: “You are an adult but not a pensioner.”
Bonus Task: Check that the input is a valid number. If the user enters anything other than digits, print: “Invalid input. Please enter a valid age.”
*/

void ageCheck(){

    double userAge;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> userAge;

    if(userAge < 18){
        std::cout << "You are not an adult." << std::endl;
    }
    else if (userAge > 65){
        std::cout << "You are a pensioner." << std::endl;
    }
    else
    std::cout << "You are an adult but not a pensioner." << std::endl;
}

/*
5. Tickets please!
Ask the user to enter their category: adult, pensioner, or student.

If the user is a pensioner or student, print: “The ticket costs 20 SEK.”
If the user is an adult, print: “The ticket costs 30 SEK.”
Otherwise, print: “Invalid category entered.”
*/

void ticketsPlease(){

    double userAge;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> userAge;

    if(userAge < 18){
        std::cout << "You are not an adult." << std::endl;
    }
    else if (userAge > 65){
        std::cout << "You are a pensioner." << std::endl;
    }
    else
    std::cout << "You are an adult but not a pensioner." << std::endl;
}

/*
6. Scandinavia Check
Ask the user to enter the name of the country they live in.

If it is Sweden, Denmark, or Norway, print: “You live in Scandinavia.”
Otherwise, print: “You do not live in Scandinavia.”
*/

void scandinaviaCheck(){

    std::string userInput;
    std::set<std::string> scandinavia = {"Sweden", "Denmark", "Norway"};

    std::cout << "Enter the name of the country they live in: " << std::endl;
    std::cin >> userInput;

    if(scandinavia.count(userInput)){
        std::cout << "You live in Scandinavia." << std::endl;
    }
    else
    std::cout << "You dont live in Scandinavia." << std::endl;
}

/*
7. Fast food choices
Ask the user how much money they have and then ask if they have a discount.

Decide what they can buy:

If they have 15–25 (no discount) → “You can buy a small hamburger.”
If they have 15–25 (with discount) → “You can buy a small hamburger and fries.”
If they have 26–50 (no discount) → “You can buy a large hamburger.”
If they have 26–50 (with discount) → “You can buy a large hamburger and fries.”
If they have more than 60, or between 50–60 with discount → “You can buy a meal with a drink.”
*/
void fastFoodChoices(){

    bool discountApplied;
    double usersCash;
    std::string doesUserHaveDiscount;

    std::cout << "How much money do you have?: " << std::endl;
    std::cin >> usersCash;

    std::cout << "Do you have a discount?(y/n): " << std::endl;
    std::cin >> doesUserHaveDiscount;

    if (doesUserHaveDiscount == "y"){
        discountApplied = true;
    }
    else
    discountApplied = false;

    if (!discountApplied && (usersCash > 15 && usersCash < 25)){
        std::cout << "You can buy a small hamburger." << std::endl;
    }
    else if (discountApplied && (usersCash > 15 && usersCash < 25)){
        std::cout << "You can buy a small hamburger and fries." << std::endl;
    }
    else if (!discountApplied && (usersCash > 26 && usersCash < 50)){
        std::cout << "You can buy a large hamburger." << std::endl;
    }
    else if (discountApplied && (usersCash > 26 && usersCash < 50)){
        std::cout << "You can buy a large hamburger and fries." << std::endl;
    }
    else if ((discountApplied && (usersCash > 50 && usersCash < 60)) || usersCash > 60){
        std::cout << "You can buy a meal with a drink." << std::endl;
    }

}
/*
LOOPS
1. Print Numbers 0 to 10
Write a program that prints the numbers 0 to 10 on the screen. 
Solve this using a for-loop and then a while-loop */

void printNumbers(){
    
    std::cout <<"Created by for loop." << std::endl;
    for(int i = 1; i <=10; i++)
    std::cout << i << " ";

    std::cout << std::endl;
    std::cout <<"Created by while loop." << std::endl;

    int j = 1;
    while (j <= 10){
        std::cout << j << " ";
        j++;
    }
}

/*
2. Numbers Between Two Values
Ask the user to enter two numbers. Print all the numbers between those two values on the screen. 
Solve this using a for-loop and then a while-loop
*/
void numbersBetweenTwoValues(){
    int firstNumber;
    int secondNumber;

    std::cout << "Give me the first whole number: " << std::endl;
    std::cin >> firstNumber;
    std::cout << "Give me the second whole number: " << std::endl;
    std::cin >> secondNumber;

    std::cout <<"Created by for loop." << std::endl;
    for(int i = firstNumber; i <=secondNumber; i++)
    std::cout << i << " ";

    std::cout << std::endl;
    std::cout <<"Created by while loop." << std::endl;

    int j = firstNumber;
    while (j <= secondNumber){
        std::cout << j << " ";
        j++;
    }
}

/*
3. Repeat Until User Quits
Ask the user to enter two numbers.

Print the sum of the two numbers.

Then ask: “Do you want to continue (Y/N)?”

If the user enters Y, repeat the steps.
If the user enters N, stop the program.
*/

void repeatUntilUserQuits(){
    std::string userInput;

    std::cout << "Do you wish to play?(y/n): " << std::endl;
    std::cin >> userInput;

    while(userInput == "y")
    { 
        double a;
        double b;

        std::cout << "Give me the first number: " << std::endl;
        std::cin >> a;
        std::cout << "Give me the second number: " << std::endl;
        std::cin >> b;
        double sum = a + b;
        std::cout << "A sum of a and b is: " << sum << std::endl;
        std::cout << "Do you wish to play again? (y/n): " << std::endl;
        std::cin >> userInput;
    }
}

/*
4. Sum of 10 Inputs
Ask the user to enter a number. Repeat this 10 times, adding each input to a total.
After all inputs, print: “The sum of the numbers you entered is: [total].
*/
void sumOf10Inputs(){

    int userInput;
    int numberOfInputs = 0;
    // vector to store the integers
    std::vector<int> numbers;
    int sum = 0;

    while(numberOfInputs < 10)
    { 
        std::cout << "Give me a number: "<< std::endl;
        std::cin >> userInput;
        // put a number into the vector
        numbers.push_back(userInput);

        // calculate the numbers stored in vector

        // Calculate the number of loops
        numberOfInputs++;
    }
    
    for(int n : numbers) {
    sum +=n;
    }
    std::cout << "The sum of the numbers you entered is: " << sum << std::endl;
}

/*
5. Temperature Alarm
Continuously ask the user to enter temperature values.

Calculate the average of the last three values entered.

If the average is greater than 25, print: “Alarm!”

6. Numbers Less Than Input
Ask the user to enter a number.

Print all the numbers that are greater than 0 but less than the entered number.

Solve this using a loop.

7. Rolling Dice
Simulate rolling two dice and display the result.

After each roll, ask the user: “Roll again (y/yes)?”

Keep rolling until the user enters something other than “y” or “yes”.


//////////////HARDER EXERCIES/////////////
These are made to touch on all subjects we've learned this week. Make sure that all I/O operations are protected with try/catch.

1. Make it secret
We are trying to send a secret message but we need to make it more secretive. Create an application that takes in a sentence and then replace every vowel with *.

2. The Bandit Language
In Sweden we have a secret language called "the bandit language". This is made of extending every consonante with 'o' and itself. For example, my name would be Cocarorlol.

Write a program that takes in a name and translates it into the bandit language. Make sure that you handle exceptions.

3. Finally a good Calculator
Create a program that works like a simple calculator with the following rules:

Input format

The user enters numbers and operators (+, -, *, /) one at a time.

Example: 5, then +, then 3.
Performing calculations

If the user enters number → operator → number, the program performs the calculation and shows the result.

Example: 5 + 3 = 8.
Replacing inputs

If the user enters a number directly after another number, the new number replaces the previous one.

Example: 5 then 7 → the calculator keeps 7.
If the user enters an operator directly after another operator, the new operator replaces the previous one.

Example: + then - → the calculator keeps -.
Exit condition

If the user enters X, the program should stop.

4. Caesar Cipher
This cipher-method was used by Julius Caeser for his private correspondence, therefore name the Caeser Cipher. This works by shifting the characters N times to the right in the alphabet. So for example if the key is 4, 'A' would be 'E'.

Write a program that:

Asks the user for a number to encrypt the message.
Encrypt the message by the Caeser method and print out the result
Decrypt the message and print out the result
5. The Guessing Game
Generate a random number between 0 and 100 and then let the user guess until they give the correct answer.

Add hints to the user
If the user enters 'X' - end the game
After a round is finished, give the user the option to play another round or finish the game
Save their highscore of amount of tries
When they decide to stop playing, print out their best round
*/
