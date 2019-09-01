#include <iostream>

using namespace std;

///Exerc�cio 1

/*Quociente e resto da divis�o
Crie uma fun��o que permita extrair e retornar o resto e o quociente de uma divis�o
sem utilizar os referidos operados dispon�veis na Linguagem C/C++. Note que devemos retornar dois valores.
Isto � poss�vel? Que estrat�gia podemos utilizar?*/

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
