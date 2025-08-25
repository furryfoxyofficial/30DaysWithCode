#include "rw.h"

M_Result RW::Read()
{
    std::ifstream reader("mydoc.txt");
    std::string line;
    std::string content;
    if (!reader.is_open())
    {
        return M_Result(false,"Can't Open file!");
    }
    while (std::getline(reader,line))
    {
        content += line + "\n";
    }
    if (content.empty())
    {
        return M_Result(false,"(File was empty!)");
    }
    else
    {
        return M_Result(true,content);
    }
    reader.close();
}

M_Result RW::Write()
{
    std::ofstream writer("mydoc.txt");
    std::string text = "This is a simple text for testing the c++ writing skills!";
    if (writer.is_open())
    {
        writer << text;
        return M_Result(true,"data written in!");
    }
    else
    {
        return M_Result(true,"Can't write text into file.");
    }
}
