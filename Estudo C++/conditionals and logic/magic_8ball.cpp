#include <iostream>
#include <cstdlib>

int main() {

  // For our program to work, we need to get a different random number for each execution. 
  // To do so, we need to add this line of code before the declaration of answer:
  srand(time(NULL));   // This sets the “seed” of the random number generator.

  // We want a random number from 0-9.
  int answer = std::rand() % 10;

  std::cout << "MAGIC 🎱 BALL SAYS: \n\n";

  // numeros aleatorios
  std::cout << answer;

  if(answer == 0) {
    std::cout << " - It is certain.\n\n";
  }
  else if (answer == 1) {
    std::cout << " - Outlook not so good.\n\n";
  }
    else if (answer == 2) {
    std::cout << " - My sources say no.\n\n";
  }
    else if (answer == 3) {
    std::cout << " - My reply is no.\n\n";
  }
    else if (answer == 4) {
    std::cout << " - Don't count on it.\n\n";
  }
    else if (answer == 5) {
    std::cout << " - Concentrate and ask again.\n\n";
  }
    else if (answer == 6) {
    std::cout << " - Reply hazy, try again.\n\n";
  }
    else if (answer == 7) {
    std::cout << " - Signs point to yes.\n\n";
  }
    else if (answer == 8) {
    std::cout << " - Yes.\n\n";
  }
  else {
    std::cout << " - Very doubtful.\n\n";
  }

  return 0;
}