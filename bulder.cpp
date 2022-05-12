#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
//button building
int main(int argc, char **argv)
{
    char a;
    std::system("cd /home/rus/src/ && g++ -c main.cpp -I /usr/include/SFML/ >/home/rus/src/wall.txt");
    std::cout << std::ifstream("/home/rus/src/wall.txt").rdbuf();
    std::system("cd /home/rus/src/ && g++ main.o -o sfml-app -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system");
    std::system("cd /home/rus/src/ && ./sfml-app");
    
    std::cin >> a;
    return 0;  

}
