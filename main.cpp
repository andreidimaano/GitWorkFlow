#include <iostream>
#include <string>

<<<<<<< HEAD
#include <iostream>
#include <string>

int CountWords(int length, char** chars) {
    int ret = 0;
    for(int i = 1; i < length; i++) {
        if(i < length - 1) {
            ++ret;
        }
    }
    std:: cout << "Number of words: " << ret;
    return ret;
}

int main(int argv, char** argc){

	std::cout << echo(argv, argc);
	std::cout << "\n";

	int numWords = 0;
	numWords = CountWords(argv,argc);
	

	std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;
	std::cout << "Hello " << name << "!" << std::endl;

	return 0;	
=======
int main()
{
  std::cout << "hello git" << std::endl;
  return 0;

  std::string name;
  std::cout << "What is your name?" << std::endl;
  std::cin >> name;
  std::cout << "Hello " << name << "!" << std::endl;

  return 0;
>>>>>>> parent of e7cc9a4... clone lab1 repo, add CMake test files
}
