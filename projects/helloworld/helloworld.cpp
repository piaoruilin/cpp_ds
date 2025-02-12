#include <iostream> //this is needed for std::cout and stt:endl//

/*
//helloworld
int main()
{
    std::cout << "Hello World" << std::endl; //still dk what's std::endl
}

//define integers
int main()
{
    int x; //define 1 integer
    int y, z; //define 2 integers

    return 0;
}

//assignment of integers
int main()
{
    int width;
    width = 5;

    std::cout << width; //prints 5

    width = 7;

    std::cout << width; //prints 57

    return 0;
}
*/

//initialisation = specifying an intitial value for object
int main()
{
    int width{5}; //define variable and initialise
    std::cout << width; //prints 5

    return 0;
}