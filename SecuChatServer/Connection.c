#include "Connection.h"

void handleConnections() {

}

void handleShutDown(void* arg) {
	printf("Listening for Shutdown\n");
	int ch = 0;
	do
	{
		Sleep(100);
		ch = _getch();
		ch = toupper(ch);
	} while (ch !='Q');

	printf("Shutdown Command Sent\n");
	
	

	WSACleanup();
	return;
}

void listenToClient(SOCKET* connectedSocket) {
	if (connectedSocket == NULL)
		return;
}

void closeClientConnection(SOCKET connectedSocket) {
	int result = shutdown(connectedSocket, SD_SEND);
	if (result == SOCKET_ERROR) {
		int error = WSAGetLastError();
		
		printf("shutdown failed with error: %d\n", error);
		closesocket(connectedSocket);
	}
	printf("Socket Closed\n");
	//_endthread();
}