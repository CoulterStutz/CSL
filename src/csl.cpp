#include <iostream>
#include <fstream>
#include <string>
#include "parser.h"

int main(int argc, char* argv[]){
    if (argc == 1) {
        
        while (true) {
            std::string cmd;
            printf("CSL>>: ");
            std::cin >> cmd;
        }
    } else if (argc == 2)
    {
       Parser parser;

       parser.ParserSettings.isFile = true;
       parser.ParserSettings.filepath = "";
       parser.parse();

       return 0;
    }
    return 0;
}