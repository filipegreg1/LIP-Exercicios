#include <iostream>
#include <ctype.h>
#include <cstring>
#define MAX_TXT 100

/* Escreva a função equalsIgnoreCase que recebe duas strings e seus tamanhos e retorna verdadeiro se as duas strings são iguais sem levar
em consideração se as letras são maiúsculas ou minúsculas. Por exemplo, para as strings "aBc"a "Abc", a função retorna verdadeiro, mas para
"aBc"e "aB"ou "aBc"e "Xbz", a função retorna falso.*/

bool equalsIgnoreCase (char a[MAX_TXT], char b[MAX_TXT]);

using namespace std;

int main()
{
    char a[MAX_TXT],b[MAX_TXT];

    cin >> a;

    cin >> b;


    if (equalsIgnoreCase (a,b))
    {

        cout << "São iguais"<< endl;

    }
    else

        cout << "São diferentes"<< endl;


}

bool equalsIgnoreCase (char a[MAX_TXT], char b[MAX_TXT])
{

    int ta = strlen(a);

    int tb = strlen(b);

    if ( ta!=tb )
    {

        return false;

    }

    for (int i = 0; i < ta; i++)
    {

        if ( tolower(a[i]) != tolower (b[i]) )
        {

            return false;

        }


    }
    return true;

}


