//Ronald Forte
// 
// 
// 
// 
// 
// 

#include <iostream>
using namespace std;

class Time{
    public:
        int h;
        int m;
};

int minutesSinceMidnight(Time time){
    int minspassed = (time.h * 60)+time.m;
    return minspassed;
}

int minutesUntil(Time earlier, Time later){
    int time_passed = minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
    return time_passed;
}

Time addMinutes(Time time0, int min){
    Time new_time;
    new_time.h = time0.h+(time0.m+min)/60;
    new_time.m = (time0.m+min)%60;
    return new_time;
}

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie {
public:
string title;
Genre genre; // only one genre per movie
int duration; // in minutes
};
class TimeSlot {
public:
Movie movie; // what movie
Time startTime; // when it starts
};

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

void printTimeSlot(TimeSlot ts){
    printMovie(ts.movie);
    cout << " [starts at ";
    printTime(ts.startTime);
    cout << ", ends by ";
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    printTime(endTime);
    cout << "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    Time new_start = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot new_ts;
    new_ts.startTime = new_start;
    new_ts.movie = nextMovie;
    return new_ts;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    int ts1_mins = minutesSinceMidnight(ts1.startTime);
    int ts2_mins = minutesSinceMidnight(ts2.startTime);
    TimeSlot earlier;
    if(ts1_mins<ts2_mins){
        earlier = ts1;
    }
    else{
        earlier= ts2;
    }
    int difference = ts1_mins - ts2_mins;
    if(difference<0){
        difference = difference*(-1);
    }
    if(earlier.movie.duration>difference){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    /* TASK A
    Time first;
    Time second;
    cout << "Enter first time: ";
    cin >> first.h >> first.m;
    cout << "Enter second time: ";
    cin >> second.h >> second.m;
    cout << "These moments of time are " << minutesSinceMidnight(first) << " minutes after midnight." << endl;
    cout << "The interval between them is " << minutesUntil(first, second) << " minutes.";
    */
    /* TASK B
    Time time;
    Time result;
    cout << "Enter a time: ";
    cin >> time.h >> time.m;
    result = addMinutes(time, 75);
    cout << "The new time is " << result.h << " hours and " << result.m << " minutes" << endl;
    */
}