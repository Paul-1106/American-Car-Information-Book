#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

void createList() {
  std::cout << "Enter the car brand: \n";
  std::cin >> "\n\n";
  std::cout << "Enter the car model: \n";
  std::cin >> "\n\n";
  std::cout << "Enter the year of the car: \n";
  std::cin >> "\n\n";
  std::cout << "Enter the type of car (Truck, Car, SUV, etc.): \n";
  std::cin >> "\n\n";
  std::cout << "Enter the amount of horsepower: \n";
  std::cin >> "\n\n";
  std::cout << "Enter the acceleration of the vehicle (0-60 mph = x.x seconds): \n";
  std::cin >> "\n\n";
  std::cout << "Enter the gas amount (0 if electric):\n";
  std::cin >> "\n\n";
  std::cout << "Is the car electric? (True or False): \n";
  std::cin >> "\n\n";
  std::cout << "The car's maximum speed \n";
  std::cin >> "\n\n";
  std::cout << "The type of driventrain (in 'RWD' or '4WD' format): \n";
  std::cin >> "\n\n";

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

  char option = '';

  while (option != 'q') {
    
    switch (option) {

      case 'c':
        createdList();
        break;

      case 'r';
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
