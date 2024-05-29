#include <iostream>
#include <fstream>

class	Harl
{
	private:
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
	public:
		Harl (void);
		~Harl (void);
		void	complain(std::string level);
};

Harl::Harl (void) {
	;
}

Harl::~Harl (void) {
	;
}

void	Harl::debug (void) {
	std::cout << "[DEBUG]		I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info (void) {
	std::cout << "[INFO]		I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning (void) {
	std::cout << "[WARNING] 	I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error (void) {
	std::cout << "[ERROR]		This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*ptrToLog[4]) (void) {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (lvls[i] == level) {
			(this->*ptrToLog[i])();
			break;
		}
	}
}

int	main(void)
{
	Harl	log;

	log.complain("DEBUG");
	log.complain("INFO");
	log.complain("WARNING");
	log.complain("ERROR");
	return (0);
}
