#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string line;
    std::string join;

    if (ac == 4)
    {
        size_t i = 0;
        filename = av[1];
        s1 = av[2];
        s2 = av[3];
        std::ifstream file(filename);
        if (!file.is_open())
        {
            std::cout << "can't open the file\n";
            return(1);
        }
        join = filename + ".replace";
        std::ofstream replace(join);
        if (!replace.is_open())
        {
            std::cout << "can't open the file\n";
            return(1);
        }
        while (std::getline(file, line))
        {
            i = line.find(s1);
            if (i > line.size())
            {
                replace << line << std::endl;
                continue;
            }
            while (i < line.size())
            {
                line.erase(i, s1.size());
                line.insert(i, s2);
                i = line.find(s1);
                if (i > line.size())
                    break;
            }
            replace << line << std::endl;
        }
        file.close();
        replace.close();
    }
    else
        std::cout << "invalid argument" << std::endl;
}