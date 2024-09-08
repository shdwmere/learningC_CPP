#include <string>

class Song {
  
  // attributes
  std::string title;
  std::string artist;

public:
  // Add a constructor here:
  Song(std::string new_title, std::string new_artist);
  // Add a destructor here:
  ~Song();
  
  std::string get_title();
  
  std::string get_artist();
  
};