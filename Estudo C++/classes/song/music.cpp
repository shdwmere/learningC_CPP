#include <iostream>
#include "song.hpp"

int main() {

  // instantiating a new object from Song
  Song backToBlack("Back to Black", "Amy Winehouse");
  
  // accessing methods
  std::cout << backToBlack.get_artist() << std::endl;
  std::cout << backToBlack.get_title();
  
}