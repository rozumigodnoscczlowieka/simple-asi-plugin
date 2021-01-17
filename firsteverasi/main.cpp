#include "main.h"


void mainThread(char * args)
{
	while (true)
	{
		*reinterpret_cast<byte *>(0xB7CEE4) = true;
		Sleep(50);
	}
}




class Plugin
{
public:
	Plugin()
	{

		CreateThread(NULL, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(mainThread), NULL, 0, 0);

	}
	~Plugin()
	{
		*reinterpret_cast<byte *>(0xB7CEE4) = false;
	}
} Plugin;