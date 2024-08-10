#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> southpark_boys;
  
  // adiciona novos elementos:
  southpark_boys.push_back("stan");
  southpark_boys.push_back("kyle");
  southpark_boys.push_back("cartman");
  southpark_boys.push_back("kenny");
  
  std::cout << "\nTesting vectors\n\n";
  std::cout << "vector elements:   ";
  std::cout << southpark_boys[0] << " ";
  std::cout << southpark_boys[1] << " ";
  std::cout << southpark_boys[2] << " ";
  std::cout << southpark_boys[3] << " ";
  std::cout << "\n\n";


  std::cout << "popping elemnts from the vector\n\n";

  // remove todos elementos
  southpark_boys.pop_back();
  southpark_boys.pop_back();
  southpark_boys.pop_back();
  southpark_boys.pop_back();

  // checa o tamanho do vetor apos remover
  std::cout << "Size after popping: " << southpark_boys.size() << std::endl;

  // tenta acessar elementos depois do popping, else o vetor esta vazio
  if (!southpark_boys.empty()) {
      std::cout << southpark_boys[0] << " ";
      std::cout << southpark_boys[1] << " ";
      std::cout << southpark_boys[2] << " ";
      std::cout << southpark_boys[3] << " \n";
  } else {
      std::cout << "The vector is empty!\n\n";
  }
  
  return 0;
}
