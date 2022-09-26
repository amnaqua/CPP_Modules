#include <iostream>
#include <cstring>

void ArgvToUpper(char** argv, int argc)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
            argv[i][j] = std::toupper(argv[i][j]);
            std::cout << argv[i][j];
        }
	}
	std::cout << std::endl;
}

int	main(int argc, char** argv)
{
    setlocale(LC_ALL, "RUS");
	std::string	temp;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		ArgvToUpper(argv, argc);
    return (0);
}