#include <iostream>
#include <unistd.h>

void check_with_jenn() {
    // Check in with Jenn
    std::cout << "- Oh hi Jenn!\n";
    sleep(3);
}

void check_with_roy() {
    // Check in with Roy
    std::cout << "- You stole the stress machine? But that's stealing!\n";
    sleep(3);
}

char conduct_IT() {
  std::cout << "- Hello. IT.\n";
  std::cout << "- Have you tried turning it off and on again? y/n\n";
  char on_off_attempt;
  std::cin >> on_off_attempt;

  if(on_off_attempt == 'y' || 'n') {
    return on_off_attempt;
  }

}

int main() {

    // Conduct IT support
    conduct_IT();
  
    // Check in with Jenn
    check_with_jenn();

    // Conduct IT support again...
    conduct_IT();

    // Check in with Roy
    check_with_roy();

    // Conduct IT support yet again...zzzz...
    conduct_IT();
  
}