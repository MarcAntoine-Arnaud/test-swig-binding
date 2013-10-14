#ifndef _HELLO_WORLD_CPP_
#define _HELLO_WORLD_CPP_

#include <string>

void basicPrintTest();


class HelloWorld
{
public:
	HelloWorld();
	~HelloWorld();
	
	void setString( const std::string& str );
	std::string getString( );

	void setData( const char* data, const size_t size );
	char* getData( );
	
	void printElem();
	
private:
	std::string stringData;
	char* ptrData;
};

#endif
