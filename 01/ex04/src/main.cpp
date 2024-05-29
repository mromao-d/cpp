#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	size_t	pos = 0;

	if (argc < 4) {
		std::cout << "wrong number of args: ./sed_fo_losers <filename> <str_to_search> <str_to_replace>" << std::endl;
		return (0);
	}
	std::string	input_file = argv[1];
	std::string	output_file = argv[1];
	// create output file with the replaces --> I can overwrite the original file and delete the "_replace" if I want to
	output_file += "_replace";
	if ((output_file.find(".")) != std::string::npos) {
		std::string	extensions = output_file.substr(output_file.find("."), output_file.length());
		output_file = output_file.substr(0, output_file.find(".")) + extensions;
	}
	std::string	string_search = argv[2];
	std::string	string_to_replace =  argv[3];
	// reads Makefile into variable called file --> I can call whatever I want to
	std::ifstream in_file(input_file.c_str());
	if (!in_file.is_open()) {
		std::cerr << "Error: Could not open input file " << "	" << in_file << input_file.c_str() << std::endl;
		return (1);
	}
	std::ofstream out_file(output_file.c_str());
	if (!out_file) {
		std::cerr << "Could not open/ create out_file " << out_file << "	" << output_file.c_str() << std::endl;
		return (2);
	}
	std::string	line;
	while (std::getline(in_file, line)) {
		if ((pos = line.find(string_search)) != std::string::npos) {
			out_file << line.substr(0, pos) << string_to_replace << line.substr(pos + string_search.length(), line.length()) << std::endl;
		}
		else
			out_file << line << std::endl;
	}
	in_file.close();
	out_file.close();
	return (0);
}
