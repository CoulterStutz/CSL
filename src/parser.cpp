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

        int parse_line(std::string& line, int line_number, bool isFile){
            if (line == "ban" && isFile == false){
                printf("\nCSL 1.0\n");
            }
        }

        int parse(std::string line=nullptr, int lineco){
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
                    parse_line(line, i, true);
                }
            } else {
                parse_line(line, lineco, false);
            }
        }
};