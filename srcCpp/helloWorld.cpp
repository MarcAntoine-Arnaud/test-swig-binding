#include "helloWorld.hpp"

#include <iostream>
#include <cstring>

HelloWorld::HelloWorld()
	: stringData( "" )
	, ptrData( nullptr )
{
}

HelloWorld::~HelloWorld()
{
	if( ptrData != nullptr )
		delete[] ptrData;
}

void HelloWorld::setString( const std::string& str )
{
	stringData = str;
}

std::string HelloWorld::getString( )
{
	return stringData;
}

void HelloWorld::setData( const char* data, const size_t size )
{
	if( ptrData != nullptr )
		delete[] ptrData;
	
	ptrData = new char[size];
	std::memcpy( ptrData, data, size );
}

void HelloWorld::printElem()
{
	if( ptrData != nullptr )
		std::cout << this << "\t" << &ptrData[0] << "\t" << stringData << std::endl;
	else
		std::cout << this << "\t" << stringData << std::endl;
}

char* HelloWorld::getData( )
{
	return ptrData;
}
