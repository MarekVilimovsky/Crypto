﻿#include <iostream>
#include "clsCrypto.h"

int main()
{
	clsCrypto* p_lobjCrypto;
	//vytvořit objekt
	p_lobjCrypto = new clsCrypto();

	//otevřít soubor
	p_lobjCrypto->OpenFile("c:\\Temp\\test.txt","c:\\Temp\\");

	//zavřít soubor
	p_lobjCrypto->CloseFile();
	
	//zrušit objekt
	delete(p_lobjCrypto);

}
