#include "clsCrypto.h"
//konstruktor
clsCrypto::clsCrypto()
{
	//nastaven� souboru na NULL
	p_mFileSource = NULL;
}
//otev��t soubor
bool clsCrypto::OpenFile(const char* p_chNameSource, const char* p_chNameDest)
{
	int lintLen;
	//kopie n�zvu souboru
	//pozor netestuju d�lku
	lintLen = strnlen_s(p_chNameSource, 1024);
	p_michFileNameSource = new char[lintLen+1];
	strcpy_s(p_michFileNameSource, lintLen+1, p_chNameSource);

	//otev�en� n�zvu souboru
	fopen_s(&p_mFileSource, p_michFileNameSource, "r");
	
	//kopie n�zvu souboru
	//pozor netestuju d�lku
	lintLen = strnlen_s(p_chNameDest, 1024);
	p_michFileNameDest = new char[lintLen + 1];
	strcpy_s(p_michFileNameDest, lintLen + 1, p_chNameDest);

	//otev�en� n�zvu souboru
	fopen_s(&p_mFileDest, p_michFileNameDest, "w");
	// !!! tady dod�lat test zda je otev�eno
	return false;
}
//zav��t soubor
bool clsCrypto::CloseFile()
{
	if (p_mFileSource != NULL)
	{
		fclose(p_mFileSource);
		p_mFileSource = NULL;
	}
	if (p_mFileSource != NULL)
	{
		fclose(p_mFileDest);
		p_mFileDest = NULL;
	}
	return false;
	if (p_mFileSource == NULL || p_mFileDest == NULL)
	{
		return true;
	}
	return false;
}
//�iforv�n� souboru
bool clsCrypto::Crypt()
{
	//test zda je soubor otev�en
	if (p_mFileSource == NULL || p_mFileDest == NULL)
	{
		return false;
	}
	return false;
}