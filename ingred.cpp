// This program adjusts a cookie recipe based on how many cookies the user wants to make
// The base recipe makes 48 cookies. The program calculates the needed sugar, butter,and flour using a multiplier based on the user's desired number of cookies.
//enter the number of desired cookies!
#include <iostream>
using namespace std;

int main()
{
    // Base recipe constants
    const int BASE_COOKIES = 48;
    const double SUGAR_PER_BATCH = 1.5;
    const double BUTTER_PER_BATCH = 1.0;
    const double FLOUR_PER_BATCH = 2.75;
    
    int desiredCookies;
    cout << "Cookie Recipe Adjuster\n";
    cout << "This program calculates the amount of ingredients needed\n";
    cout << "based on how many cookies you want to make.\n\n";

    cout << "How many cookies would you like to make? ";
    cin >> desiredCookies;

    double multiplier = static_cast<double>(desiredCookies) / BASE_COOKIES;
    double sugarNeeded = SUGAR_PER_BATCH * multiplier;
    double butterNeeded = BUTTER_PER_BATCH * multiplier;
    double flourNeeded = FLOUR_PER_BATCH * multiplier;

    cout << "\nIngredient amounts needed:\n";
    cout << "---------------------------------\n";
    cout << "Sugar:  " << sugarNeeded  << " cups\n";
    cout << "Butter: " << butterNeeded << " cups\n";
    cout << "Flour:  " << flourNeeded  << " cups\n";

    return 0;
}
