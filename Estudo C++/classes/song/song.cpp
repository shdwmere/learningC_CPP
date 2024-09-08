#include "song.hpp"
#include <iostream>

/*
alternativamente, pode-se criar um constructor da seguinte forma:

  Song::Song(std::string new_title, std::string new_artist) {
      title = new_title;
      artist = new_artist;
  }
*/

// Song constructor:
Song::Song(std::string new_title, std::string new_artist)
    : title(new_title), artist(new_artist) {}

// Song destructor:
Song::~Song() {
  std::cout << "\n\n" << "Goodbye " << title << "\n";
}

std::string Song::get_title()
{

  return title;
}

std::string Song::get_artist()
{

  return artist;
}