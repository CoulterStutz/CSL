#include <iostream>
#include <fstream>
#include <string>

struct parserSettings
{
    bool isFile;
    std::string filepath;
};


class Parser{
    public:
        parserSettings ParserSettings;
    
        int parse(){
            if (ParserSettings.isFile) {
                std::ifstream file(ParserSettings.filepath);
                if (!file.is_open()){
                    std::cerr << "CSL: Parser Failed Trying to Open Script: " << ParserSettings.filepath << std::endl;
                    return;
                }
            } 
        }
};