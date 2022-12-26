#pragma once
class String
{
public:
	String();
	String(const String& arrc);	//복사생성자
	String(const char* arrc);	//문자열리터럴
	~String();

	String& operator += (const String& arrc);
	String operator + (const String& arrc);
	char& operator[](int idx);

	const char* ToConst();

public:
	static int GetLength(const char* arrc);
private:
	//엿장수 맘대로, 하지만 홀수 권장(1이상)
	//맨 마지막 문자열의 데이터는 nullptr
	const int initialSize = 16;
	
	char* buffer;
	int currentSize;
	int length;
};

