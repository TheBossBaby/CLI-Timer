def min_to_sec(minits):
	return minits * 60

//----------------------------------------------------------------------

def hour_to_sec(hour):
	return hour * 60 * 60

//----------------------------------------------------------------------

def timer():
	print "Enter the time in HH:MM:SS formart: "
	hh = int(input())
	ch1 = input()
	mm = int(input())
	ch2 = input()
	ss = int(input())
	return hour_to_sec(hh) + min_to_sec(mm) + ss 

//----------------------------------------------------------------------

def set_alarm_time(end_time, start_time):
	return end_time + start_time

//----------------------------------------------------------------------

def blow_alarm(alarm_time):
	while True:
		if alarm_time == system_current_time :
			#play some song
			print "TIME UP"
			return true

//---------------------------------------------------------------------