#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream		inFile;
	std::ofstream		outFile;
	std::string			contentOfInfile;
	std::stringstream	sStream;
	std::size_t			match;
	std::string			nameOfOutfile;

	if (argc != 4)
	{
		std::cout << "Program needs 3 arguments" << '\n';
		std::cout << "argument 1: name of input file" << '\n';
		std::cout << "argument 2: string1 that will be replaced by..." << '\n';
		std::cout << "argument 3: ...string2 in input file" << '\n';
		return (1);
	}
	if (!argv[1] || !argv[2] || !argv[3])
	{
		std::cout << "arguments shouldn't be empty" << '\n';
		return (1);
	}
	inFile.open(argv[1]);
	if (inFile.good() == false)
	{
		std::cout << "Failed to open infile" << '\n';
		return (1);
	}
	sStream << inFile.rdbuf();
	contentOfInfile = sStream.str();
	match = contentOfInfile.find(argv[2]);
	while (match != std::string::npos)
	{
		contentOfInfile.erase(match, strlen(argv[2]));
		contentOfInfile.insert(match, argv[3]);
		match = contentOfInfile.find(argv[2]);
	}
	nameOfOutfile = argv[1];
	nameOfOutfile.append(".replace");
	outFile.open(nameOfOutfile);
	if (outFile.good() == false)
	{
		std::cout << "Error with outfile" << '\n';
		return (1);
	}
	outFile << contentOfInfile;
	inFile.close();
	outFile.close();
	return (0);
}