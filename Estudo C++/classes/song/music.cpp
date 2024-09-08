#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation;

  // accessing methods
  electric_relaxation.add_title("Electric Relaxation\n");
  std::cout << electric_relaxation.get_title();
  
  electric_relaxation.add_artist("A Tribe Called Quest");
  std::cout << electric_relaxation.get_artist();

}