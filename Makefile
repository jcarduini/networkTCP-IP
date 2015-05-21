CXX := gcc

all:

	$(CXX) -o serverUDP udp-server.c #api-server.c
	$(CXX) -o clientUDP udp-client.c api-client.c api-client.h
	
	$(CXX) -o serverTCP tcp-server.c #api-server.c
	$(CXX) -o clientTCP tcp-client.c #api-client.c

clean:
	rm *.o serverUDP clientUDP serverTCP clientTCP
