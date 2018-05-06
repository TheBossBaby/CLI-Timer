#include <iostream>
namespace Input {

	class NoInput{}; //used to throw exeption when no input is seen

	//------------------------INPUT OF LONG INT----------------------
	void skip_to_long_int()
	{
		if(std::cin.fail()){
			std::cin.clear();
			for(char ch; std::cin>>ch; ){
				if(isdigit(ch) || ch == '-'){
					std::cin.unget();
				return;
				}
		}
	}
	throw NoInput{};
	}

	//-----------------------------------------------------

	long int get_long_int()
	{
		long int n{0};
		while(true){
			if(std::cin>>n) return n;
			std::cout<<"\nNot a number; please enter a number:\n";
			skip_to_long_int();
		}
	}

	//-----------------------------------------------------

	long int get_long_int(long int low)
	{
		while(true){
			int n = get_long_int();
			if(low <= n) return n;
			std::cout<<"\nSoory number is not in [" << low <<"] range ; please tyr again:\n";
		}	
	}

	//------------------------INPUT OF INT SHORT----------------------
	void skip_to_short_int()
	{
		if(std::cin.fail()){
			std::cin.clear();
			for(char ch; std::cin>>ch; ){
				if(isdigit(ch) || ch == '-'){
					std::cin.unget();
				return;
				}
		}
	}
	throw NoInput{};
	}

	//-----------------------------------------------------

	short int get_short_int()
	{
		short int n{0};
		while(true){
			if(std::cin>>n) return n;
			std::cout<<"\nNot a number; please enter a number:\n";
			skip_to_short_int();
		}
	}

	//-----------------------------------------------------

	short int get_short_int(short int low)
	{
		while(true){
			int n = get_short_int();
			if(low <= n) return n;
			std::cout<<"\nSoory number is not in [" << low <<"] range ; please tyr again:\n";
		}	
	}
	//-----------------------------------------------------
	//
	////-----------------------------------Get char-------------
	
	char get_char(const char& ch)
	{
		char c{'`'};
		if(std::cin>>c)
			if(c==ch) return c;
			else
			{
				std::cout<<"\nThe given char is not \'"<<ch<<'\''<<"enter again: ";
				while(std::cin>>c)
					if(c == ch) return c;

			}
	}
} // Input
