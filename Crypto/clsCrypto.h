#pragma once
#include <string.h>
#include <stdio.h>
class clsCrypto
{
public:
	clsCrypto();//konstruktor
	bool OpenFile(const char* p_chNameSource, const char* p_chNameDest);//otevøít soubor
	bool CloseFile();
	bool Crypt();
private:
	char* p_michFileNameSource;//název souboru odkud
	FILE* p_mFileSource;
	char* p_michFileNameDest;//název souboru cíle
	FILE* p_mFileDest;
};

