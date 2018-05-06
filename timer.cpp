#include <iostream>
#include <ctime>

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
long int timer()
{
	while(true) {
	    int short choice{4};
	    std::cout<<"\nOption to set timer\n"
	    		 <<"\t\n1) Minutes"
	    		 <<"\t\n2) Hour"
	    		 <<"\t\n3) Second\n";
	    std::cin>>choice;

	    switch(choice)
	    {
	    	case 1:{
				std::cout<<"\nSet timer in minutes: ";
				long int min{-1};
				std::cin>>min;
				return min_to_sec(min);
				break;
			}
			case 2:{
				std::cout<<"\nSet timer in hours: ";
				long int hour{-1};
				std::cin>>hour;
				return hour_to_sec(hour);
				break;
			}
			case 3:{
				std::cout<<"Set timer in minutes: ";
				long int second{-1};
				std::cin>>second;
				return second;
				break;
			}
			default:
				std::cerr<<"\nInvalid choice\nPLease choose again\n";
		}
	}

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