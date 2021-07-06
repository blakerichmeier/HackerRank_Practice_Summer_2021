#include <iostream>
#include <string.h>
#include <math.h>

//2) return the number of valleys traversed 
//example string [DDUUDD] 
int traverse(std::string s)
{
    int y = 0;
    int valleycount = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(y == 0)
        {
            valleycount++;
        }
        if(s.at(i) == 'D')
        {
            y--;
        }
        else if(s.at(i) == 'U')
        {
            y++;
        }
    }

    return(valleycount/2);
}

// 1) write the hello world function in c++!!!!
void hello_world()
{
    std::cout << "Hello World!\nGoodbye Moon\n";
}

int main()
{
    std::string myString = "UDDDUDUUU";
    std::cout << traverse(myString) << "\n";

    return(0);
}
