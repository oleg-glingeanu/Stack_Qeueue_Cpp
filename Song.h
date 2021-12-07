#pragma once
#include <string>


using namespace std;

class song {
private:
	string songTitle;
	int duration;
public:
	song(string title, int dur);
	string getTitle()  const { return songTitle;}
	void setTitle(string title_in) {songTitle = title_in; }
	int getDuration() const { return duration; }
	void setDuration(int duration_in) { duration = duration_in; }
};