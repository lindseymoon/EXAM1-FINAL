/*I affirm that all code given below was written solely by me, Lindsey Moon,
and that any help I received adhered to the rules stated for this exam.*/

#include "song.h"
#include <string>

using namespace std;

Song::Song() {}

Song::Song(string title, string artist, string genre)
{
	//allow caller to set up the song??
	genre == "ModernPop" || "Grunge" || "Classical" || "Americana"; //valid genre
}

const string Song::getTitle()
{
	return title;
}

const string Song::getArtist()
{
	return artist;
}

const string Song::getGenre()
{
	return genre;
}

bool Song::isOfGenre(string genre)
{
	return true;
}