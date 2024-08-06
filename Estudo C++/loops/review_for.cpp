#include <windows.h>
#include <iostream>

int main() {
    SetConsoleOutputCP(CP_UTF8);
  
    bool alive = true;
    int count;
    
    std::cout << "\n🖤 Code to Death! ☠️\n\n";

    while (alive == true) {
      std::cout << "🍕      eat\n";
      std::cout << "😴      sleep\n";
      std::cout << "👨🏽‍💻 code\n";
      std::cout << "🔄      repeat\n";

      count++;
      if(count >= 10)
        alive = false;
        std::cout << "\n🖤 Code to Death! ☠️\n\n";
    }
  
    for (int i = 0; i < 10; i++) {
      std::cout << "Great job! 👏 🥳 🏆! \n";
    }

    std::cout << "\n";
  
  return 0;
  
}