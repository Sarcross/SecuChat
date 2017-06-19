#pragma once

#ifndef CONNECTION_H
#define CONNECTION_H
#include <winsock2.h>
#include <process.h>
#include <conio.h>
#include <stdio.h>

void handleConnections();
void handleShutDown(void*);
void listenToClient(SOCKET*);
void closeClientConnection(SOCKET);

#endif