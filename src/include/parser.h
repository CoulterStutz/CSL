#ifndef PARSER_H
#define PARSER_H

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

        int parse_line(std::string& line, int line_number, bool isFile);

        int parse(std::string line = "", int lineco = 0);
};

#endif // PARSER_H
