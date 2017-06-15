#include "stdafx.h"


namespace SecuChatData
{
	Packet::Packet() {
		messageBuffer = new char[BUFFER_LENGTH];
	}

	Packet::~Packet() {
		delete[] messageBuffer;
	}
}