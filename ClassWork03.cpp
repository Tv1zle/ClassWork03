
#include <iostream>

int main()
{
    double Farangeitiki = 1.8000;


    double celsius;
    std::cout << "Celsius = ";
    std::cin >> celsius;


    double farangate;
    std::cout << "Farangates = ";
    std::cin >> farangate;


    double AnswerCelsiusToFarangate = celsius * Farangeitiki;
    double AnswerFarangateToCelsius = farangate / Farangeitiki;


    std::cout << "Celsius to farangate = " << AnswerCelsiusToFarangate << "\n";
    std::cout << "Farangate to celsius = " << AnswerFarangateToCelsius << "\n";
}
