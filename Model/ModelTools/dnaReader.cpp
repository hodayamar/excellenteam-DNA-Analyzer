#include "dnaReader.h"

bool dneReader::fileIsExist(const char * fileName)
{
    std::ifstream infile(fileName);
    return infile.good();
}

std::string dneReader::readSeqFromFile(std::string fileName)
{
    std::filebuf fb;

    fb.open(fileName.c_str(), std::ios::in);

    std::istream is(&fb);

    std::string seq((std::istreambuf_iterator<char>(is)),
                    std::istreambuf_iterator<char>());
    fb.close();

    return  seq;
}