#pragma once
#include <string.h>
#include <stdio.h>
class clsCrypto
{
public:
	clsCrypto();//konstruktor
	bool OpenFile(const char* p_chNameSource, const char* p_chNameDest);//otev��t soubor
	bool CloseFile();
	bool Crypt();
private:
	char* p_michFileNameSource;//n�zev souboru odkud
	FILE* p_mFileSource;
	char* p_michFileNameDest;//n�zev souboru c�le
	FILE* p_mFileDest;
};

