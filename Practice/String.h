#pragma once
class String
{
public:
	String();
	String(const String& arrc);	//���������
	String(const char* arrc);	//���ڿ����ͷ�
	~String();

	String& operator += (const String& arrc);
	String operator + (const String& arrc);
	char& operator[](int idx);

	const char* ToConst();

public:
	static int GetLength(const char* arrc);
private:
	//����� �����, ������ Ȧ�� ����(1�̻�)
	//�� ������ ���ڿ��� �����ʹ� nullptr
	const int initialSize = 16;
	
	char* buffer;
	int currentSize;
	int length;
};

