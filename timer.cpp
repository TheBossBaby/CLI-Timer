#include <iostream>
#include <ctime>
#include "input.h"

long int min_to_sec(long int min)
{
	return min*60;
}
//-------------------------------------------

long int hour_to_sec(long int h)
{
	return h*60*60;
}
//--------------------------------------------
const char breaker{':'};
long int timer()
{
	std::cout<<"Set the timer: format is: \'HH"<<breaker<<"MM"<<breaker<<"SS \'";
	long int hour = Input::get_long_int(0);
	char ch1 = Input::get_char(breaker);
	long int minits = Input::get_long_int(0);
	char ch2 = Input::get_char(breaker);
	long int second = Input::get_long_int(0);

	std::cout<<"The timer is set for: "<<hour<<ch1<<minits<<ch2<<second;

	return hour_to_sec(hour) + min_to_sec(minits) + second;
}
//--------------------------------------------------------
long int set_alarm_time(long int end_time, time_t start_time)
{
	return (end_time + start_time);
}
//--------------------------------------------------------
bool blow_alarm(long int alarm_time)
{
	while(true) {
		if(alarm_time == time(NULL)){
			//play some song
			for(unsigned i = 0; i < 10; ++i)
				std::cout<<"\nTime up\n";
			return true;
		}    
	}	
}
//-----------------------------------------------------
int main()
{
	try{
		long int timer_duration = timer();
		time_t start_time{time(NULL)};
		long int alarm_time = set_alarm_time(timer_duration, start_time);
		
		if(blow_alarm(alarm_time)) return 0;
	}
	catch(Input::NoInput)
	{
		std::cerr<<"No Input";
		return 1;
	}
}