#include <iostream>
#include <cmath>
#include <limits> //makes sure terminal via hotdogcooker.exe file remains open to see results outside of vs
#include "hotdogcooker.h"
#define _USE_MATH_DEFINES

int main(){
    isHotdograw();

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  //clear leftover input
    std::cin.get(); // wait for Enter 

    return 0;
}

int isHotdograw(){
    bool weenieraw;
    double weenieCircumference;
    double weenieLength;        
    double weenieRadius;        
    double weenieVolume;
    const double PI = 3.141592653589793; 
    double cookTime;  

        //prompt for cooked status
    std::cout << "Is your hot dog cooked? (1 for YES 0 for NO): ";
    while (!(std::cin >> weenieraw)){
        //ensure input
    std::cin.clear();                            
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cout << "Invalid input. Please enter a number: ";
    }

    if (weenieraw == false){

        std::cout << "Time to enter details about the hotdog: \n";
        std::cout << "Circumference of your hotdog: ";
        while (!(std::cin >> weenieCircumference)){
            //ensure input
        std::cin.clear();                            
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Invalid input. Please enter a number: ";
        }

        std::cout << "Your hotdogs circumference is: " << weenieCircumference << '\n';
        std::cout << "Enter the length of your hotdog in inches: ";
        while (!(std::cin >> weenieLength)){
            //ensure input
        std::cin.clear();                            
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Invalid input. Please enter a number: ";
        }
        
        weenieRadius = weenieCircumference / (2 * PI);
        weenieVolume = PI * weenieRadius * weenieRadius * weenieLength;
        cookTime = 4 * pow(weenieRadius, 1.5) + 0.05 * pow(weenieLength, 1.2);

        std::cout << "Approximate volume of your hotdog is: " << weenieVolume << " cubic inches.\n";
        std::cout << "Your cooktime is " << cookTime << "Minutes long"; 
    }
    else{
        std::cout << "Then Leave";
    }
    
    return cookTime;
}