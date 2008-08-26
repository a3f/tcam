#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include "Globals.h"
#include "Constants.h"

class CFileHandler
{
public:
	CFileHandler();
	~CFileHandler();
	void Open(char *cFileName);
	void Write(unsigned char *cBuffer, int nSize);
	void Write(int nBuffer, int nSize); 
	void WriteDelay();
	void WritePacket(unsigned char *cBuffer, unsigned int nSize, unsigned int nPacketID);
	void Export();
	

	long nOffset; // Current offset in the data pointer
	unsigned char *cData; // Stores the packets as they arrive
	
	ofstream myRecording; // File stream
	clock_t startClock;
	unsigned int delayTime;
private:
	char fileName[MAX_PATH]; // Output file path 
	bool bStreamBusy;
};

#endif