#include "replace.hpp"

int main(int argc, char **argv)
{
    std::fstream    inFile;
    std::fstream    outFile;
    std::string     outFileName;
    std::string     line;
    std::string     replaceLine;

    if (argc != 4)
    {
        std::cerr << "Input error" << std::endl;
        return (-1);
    }
    inFile.open(argv[1], std::ofstream::in);
    if (!inFile.is_open())
    {
        std::cerr << "Open error" << std::endl;
        return (-1);
    }    
    outFileName = (std::string)argv[1] + (std::string)".replace";
    outFile.open(outFileName.c_str(), std::ofstream::trunc | std::ofstream::out);
    int i = 0;
    while (std::getline(inFile, line))
    {
        replaceLine = replace(line, (std::string)argv[2], (std::string)argv[3]);
        outFile << replaceLine;
        line.clear();
        replaceLine.clear();
        i++;
    }
    inFile.close();
    outFile.close();
    return 0;
}