import time #for getting system current time
import playsound #for playing song

def letsPlayMusic():
	playsound.playsound('/home/bossbaby/Desktop/CLI-Timer/ChadhChadhJana.mp3')

#-------------------------TIMER SECTION-------------------------------
def min_to_sec(minits):
	return minits * 60

#----------------------------------------------------------------------

def hour_to_sec(hour):
	return hour * 60 * 60

#----------------------------------------------------------------------

def timer():
	print "Enter the time in HH:MM:SS formart: "
	hh = int(input())
	
	mm = int(input())
	
	ss = int(input())
	return hour_to_sec(hh) + min_to_sec(mm) + ss 

#----------------------------------------------------------------------

def set_alarm_time(end_time, start_time):
	return end_time + start_time

#----------------------------------------------------------------------

def blow_alarm(alarm_time):
	while True:
		if alarm_time == time.time():
			letsPlayMusic()
			print "TIME UP"
			return True

#---------------------------------------------------------------------

def run_timer():
	end_time = timer()
	alarm_time = set_alarm_time(end_time, time.time())
	blow_alarm(alarm_time)

run_timer()