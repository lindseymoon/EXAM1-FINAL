#ifndef SONG_H_
#define SONG_H_

#include <string>

using namespace std;

class Song
{
private:
	string title;
	string artist;
	string genre;

public:

	Song(); //default song
	Song(string title, string artist, string genre); //allow caller to set up the song, valid genres
	const string getTitle(); //return the song title
	const string getArtist(); //return the artist who performed the song
	const string getGenre(); //return the genre of the song
	bool isOfGenre(string genre); //return true if song is of the genre
};

#endif

