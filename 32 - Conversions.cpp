#include <iostream>

double convert(double x)
{
    return (5.0 / 9.0) * (x - 32);
}

int main()
{
    float temperature = 0;
    float temperature_celsius;
    std::cout << "Please type in the temperature in Fahrenheit: \n";
    std::cin >> temperature;
    temperature_celsius = convert(temperature);
    std::cout << "The temperature in Celsius is: " << temperature_celsius;
}