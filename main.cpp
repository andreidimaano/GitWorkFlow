#include "c-echo.h"
#include "c-count.h"
#include <iostream>
#include <string>

int main(int argv, char** argc) {
	std::cout << "Count of output: " << count(echo(argv,argc)) << std::endl;}


/*
int CountWords(int length, char** chars) {
    int ret = 0;
    for(int i = 1; i < length; i++) {
        if(i < length - 1) {
            ++ret;
        }
    } 
    std:: cout << "Number of words: " << ret << "\n";
    return ret;
}

int main(int argv, char** argc){
	std::cout << echo(argv, argc);
	std::cout << "\n";

	int numWords = 0;
	numWords = CountWords(argv,argc);
<<<<<<< HEAD
	
}*/
