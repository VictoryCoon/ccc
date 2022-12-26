#include "String.h"
#include <iostream>

String::String()
{
	buffer = new char[initialSize];
	currentSize = initialSize;
	length = 0;
}

String::String(const String& arrc)
{
	buffer = new char[arrc.currentSize];
	currentSize = arrc.currentSize;
	length = arrc.length;
	//�̷��� ����
	/*
	for (int i = 0; i < arrc.currentSize; i++)
	{
		buffer[i] = arrc.buffer[i];

	}
	*/
	//�̷��� ����
	/* memcpy(����, �������, ���������) */
	memcpy(buffer, arrc.buffer, arrc.currentSize/*ByteSize*/);
}

String::String(const char* arrc)
{
	// +1 : nullptr
	int length = GetLength(arrc);
	int size = length + 1;
	this->buffer = new char[size];
	this->currentSize = size;
	this->length = length;
	memcpy(buffer, arrc, currentSize/*ByteSize*/);
}

String::~String()
{
	delete[] buffer;
}

String& String::operator+=(const String& arrc)
{
	int size = this->length + arrc.length + 1;
	char* newBuffer = new char[size];
	//�޸𸮰迭 �ʱ�ȭ, null�� ������ �����Ѵ�
	memset(newBuffer, 0, size);
	memcpy(newBuffer, buffer, this->length);
	memcpy(&newBuffer[this->length], arrc.buffer, arrc.length);

	delete[] buffer;
	buffer = newBuffer;
	this->currentSize = size;
	this->length = size - 1;


	return *this;
}

String String::operator+(const String& arrc)
{
	String str = *this;
	str += arrc;

	return str;
}

char& String::operator[](int idx)
{
	return buffer[idx];
}

const char* String::ToConst()
{
	return (const char*)buffer;
}

int String::GetLength(const char* arrc)
{
	int result = 0;
	char* iterator = (char*)arrc;
	while (*iterator != '\0')
	{
		result++;
		iterator++;
	}

	return result;
}
