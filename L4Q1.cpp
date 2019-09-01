#include <iostream>

using namespace std;

///Exercício 1

/*Quociente e resto da divisão
Crie uma função que permita extrair e retornar o resto e o quociente de uma divisão
sem utilizar os referidos operados disponíveis na Linguagem C/C++. Note que devemos retornar dois valores.
Isto é possível? Que estratégia podemos utilizar?*/

void divisao (int a , int b , int &q, int &r);

int main (){

    int a,b,q,r;

    cout << "Insira o divisor e o dividendo: "<< endl;
    cin >> a >> b;

    divisao(a,b,q,r);

    cout << "Divisao de " <<a<<" por "<< b <<endl;
    cout << "Quociente = "<<q<<" Resto = "<<r;

return 0;

}

void divisao (int a , int b , int &q, int &r)
{
    q = 0;

    while (a>=b){
        q++;
        a-=b;
}
    r = a;

}
