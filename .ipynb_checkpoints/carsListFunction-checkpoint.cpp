#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

void createList() {

  std::string carBrand, carModel, carType, drivetrain;
  int carYear, horsepower, maxSpeed;
  double acceleration, gasAmount;
  bool electricCar;

  std::cout << "Enter the car brand: \n";
  std::cin >> carBrand;
  std::cout << "Enter the car model: \n";
  std::cin >> carModel;
  std::cout << "Enter the year of the car: \n";
  std::cin >> carYear;
  std::cout << "Enter the type of car (Truck, Car, SUV, etc.): \n";
  std::cin >> carType;
  std::cout << "Enter the amount of horsepower: \n";
  std::cin >> horsepower;
  std::cout << "Enter the acceleration of the vehicle (0-60 mph = x.x seconds): \n";
  std::cin >> acceleration;
  std::cout << "Enter the gas amount (0 if electric):\n";
  std::cin >> gasAmount; 
  std::cout << "Is the car electric? (True or False): \n";
  std::cin >> electricCar;
  std::cout << "The car's maximum speed \n";
  std::cin >> maxSpeed;
  std::cout << "The type of driventrain (in 'RWD' or '4WD' format): \n";
  std::cin >> drivetrain;

  std::cout << "One query is created to the database.\n";
}

void readList() {
  std::cout << "Search Query\n";
}

void updateList() {
  std::cout << "Update Query\n";
}

void removeList() {
  std::cout << "Remove Query\n";
}

int main() {

  char option = ' ';

  std::cout << "Select the option below\n\n";
  std::cout << "c = Creating a Query\n";
  std::cout << "r = Searching a Query\n";
  std::cout << "u = Updating a Query\n";
  std::cout << "d = Deleting a Query\n";
  std::cout << "q = Exit\n";

  while (option != 'q') {

    std::cin >> option;
    
    switch (option) {

      case 'c':
        createList();
        break;

      case 'r':
        readList();
        break;

      case 'u':
        updateList();
        break;

      case 'd':
        removeList();
        break;

      case 'q':
        std::cout << "You have exited the terminal.\n";
        break;

      default:
        std::cout << "The selected input is invalid.\n";
        std::cout << "options: c, r, u, d, q(exit)\n";
        break;

    }
  }

  return 0;
}
