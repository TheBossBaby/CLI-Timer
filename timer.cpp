#include <iostream>
#include <ctime>

int timer()
{
	std::cout<<"Set timer in minutes: ";
	int min{-1};
	std::cin>>min;
	return min*60;
}

long int set_alarm_time(int min, int start_time)
{
	return (min + start_time);
}

int main()
{
	long int timer_duration = timer();
	time_t start_time{time(NULL)};
	long int alarm_time = set_alarm_time(timer_duration, start_time);
	std::cout<<"\ntimer duration: "<<timer_duration
			 <<"\nstart_time: "<<start_time
			 <<"\nalarm time: "<<alarm_time<<'\n';
	while(true) {
		if(alarm_time == time(NULL)){
			for(unsigned i = 0; i < 10; ++i) {
				std::cout<<"\nTime up\n";
			}
			return 0;
		}    
	}
}