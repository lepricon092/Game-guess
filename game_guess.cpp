#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  // Seed the random number generator
  srand(time(0));

  // Generate a random number between 1 and 100
  int secretNumber = rand() % 100 + 1;

  std::cout << "Welcome to the guessing game! I'm thinking of a number between 1 and 100. Can you guess what it is?" << std::endl;

  int guess;
  do {
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    if (guess > secretNumber) {
      std::cout << "Your guess is too high." << std::endl;
    } else if (guess < secretNumber) {
      std::cout << "Your guess is too low." << std::endl;
    }
  } while (guess != secretNumber);

  std::cout << "Congratulations! You guessed the correct number: " << secretNumber << std::endl;

  return 0;
}
