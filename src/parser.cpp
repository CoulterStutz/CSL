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

        int parse_line(std::string& line, int line_number, std::ifstream& file_path){

        }
    
        int parse(){
            if (ParserSettings.isFile) {
                std::ifstream file(ParserSettings.filepath);
                if (!file.is_open()){
                    std::cerr << "CSL: Parser Failed Trying to Open Script: " << ParserSettings.filepath << std::endl;
                    return;
                }

                std::string line;
                int i = 0;
                while (std::getline(file, line)) {
                    i +=1;
                    parse_line(line, i, file);
                }
            } 
        }
};