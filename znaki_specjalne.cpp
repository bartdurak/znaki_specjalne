#include <iostream>

/*  przejście do nowego wiersza	\n	std::endl
tabulacja	\t	(brak - patrz zapis języka C)
backslash	\\	(brak - patrz zapis języka C)
\n New line (nowa linia)
\'
Single quote (apostrof)
\"
Double quote (cudzysłów)
*/
int main()
{
    std::cout << "\t tekst \"C:\\Hej\\ho.txt.\"" << std::endl;
    printf( "Uczymy sie \" pisac \t tekst C:\\Hej\\ho.txt. w stylu C\n" );
    printf( "\n\na tu konczymy zabawe" );
    std::cout << std::endl << std::endl << "zrob sobie przerwe :)" << std::endl;

    return 0;
}

