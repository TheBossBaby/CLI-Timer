namespace Input {

	class NoInput{}; //used to throw exeption when no input is seen

	//------------------------INPUT OF LONG INT----------------------
	void skip_to_long_int();

	//-----------------------------------------------------

	long int get_long_int();

	//-----------------------------------------------------

	long int get_long_int(long int low);

	//------------------------INPUT OF INT SHORT----------------------
	void skip_to_short_int();

	//-----------------------------------------------------

	short int get_short_int();

	//-----------------------------------------------------

	short int get_short_int(short int low);
	//-----------------------------------------------------
	//
	////-----------------------------------Get char-------------
	
	char get_char(const char& ch);
} // Input
