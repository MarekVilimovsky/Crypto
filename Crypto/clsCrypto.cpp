#include "clsCrypto.h"
//konstruktor
clsCrypto::clsCrypto()
{
	//nastavení souboru na NULL
	p_mFileSource = NULL;
}
//otevøít soubor
bool clsCrypto::OpenFile(const char* p_chNameSource, const char* p_chNameDest)
{
	int lintLen;
	//kopie názvu souboru
	//pozor netestuju délku
	lintLen = strnlen_s(p_chNameSource, 1024);
	p_michFileNameSource = new char[lintLen+1];
	strcpy_s(p_michFileNameSource, lintLen+1, p_chNameSource);

	//otevøení názvu souboru
	fopen_s(&p_mFileSource, p_michFileNameSource, "r");
	
	//kopie názvu souboru
	//pozor netestuju délku
	lintLen = strnlen_s(p_chNameDest, 1024);
	p_michFileNameDest = new char[lintLen + 1];
	strcpy_s(p_michFileNameDest, lintLen + 1, p_chNameDest);

	//otevøení názvu souboru
	fopen_s(&p_mFileDest, p_michFileNameDest, "w");
	// !!! tady dodìlat test zda je otevøeno
	return false;
}
//zavøít soubor
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
//šiforvání souboru
bool clsCrypto::Crypt()
{
	//test zda je soubor otevøen
	if (p_mFileSource == NULL || p_mFileDest == NULL)
	{
		return false;
	}
	return false;
}