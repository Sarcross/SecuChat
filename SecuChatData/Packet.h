#pragma once
#ifdef SecuChatData_Exports
#define SecuChatData_API __declspec(dllexport)
#else
#define SecuChatData_API __declspec(dllimport)
#endif

#define BUFFER_LENGTH 512

#include "stdafx.h"

namespace SecuChatData
{
	class Packet
	{
	public:
//		PacketType packetType;
//		ClientInfo clientInfo;
		char* messageBuffer;

		Packet();
		~Packet();

	};

	enum PacketType
	{
		Connect,
		Disconnect,
		Message
	};
}