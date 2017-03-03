#ifndef PLAYLIST_H_
#define PLAYLIST_H_

#include <string>
#include "Song.h"

using namespace std;

class Playlist
{
private:
	string Name;
	const int MAX_SONGS = 9;
	int numSongs;
	Song songs[9];
	//array of songs, constant max number of songs, number of songs in array, similar to the array in main

public:
	Playlist(string name); //constructor for the playlist
	string getName(); //get the name of the playlist
	bool hasGenre(string genre); //returns true when at least one song of this genre is present
	void addSong(Song song); //add a new song
	int numberOfSongs(); //how many songs are in this playlist
	string playSong(int songNumber); //play a song, return empty string if there is no such song
};

#endif
