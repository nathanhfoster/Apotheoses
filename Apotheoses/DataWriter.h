#ifndef _DATAWRITER_h
#define _DATAWRITER_h
#include <iostream>
#include "GameState.h"

class DataWriter {
	virtual void save(GameState state) = 0;

	virtual ~DataWriter() { }
};

class TextFileDataWriter : public DataWriter {
	virtual void save(GameState state) {
		//write to text file
	}
};

class DatabaseDataWriter : public DataWriter {
	virtual void save(GameState state) {
		//write to database
	}
};
#endif