/*I affirm that all code given below was written solely by me, Lindsey Moon,
and that any help I received adhered to the rules stated for this exam.*/

#include "Playlist.h"
#include <string>

using namespace std;

Playlist::Playlist(string name)
{
	Name = name;
}

string Playlist::getName()
{
	return Name;//how do you make it get the name of the playlist? cout statement? "iRandomMusic"?
}

bool Playlist::hasGenre(string genre)
{
	return true; //is this right because of what is in main?
}

void Playlist::addSong(Song song)
{
	if (numSongs < MAX_SONGS)
		songs[numSongs];
		++numSongs;
}

int Playlist::numberOfSongs()
{
	return numSongs; //if you can't use numsongs, how do you tell how many numbers are in the playlist? what do you return in this?
}

string Playlist::playSong(int songNumber)
{
		return "";
}