#include <iostream>
/*
* Considere o seguinte problema:
* Escreva um programa que imprime cada número de 1 até 100 em uma nova linha.
* Para cada múltiplo de 3, imprima "Foo", ao invés do número.
* Para cada múltiplo de 5, imprima "Baa", ao invés do número.
* Para números múltiplos simultaneamente de 3 e 5, imprima "FooBaa", ao invés do número.
* A sua solução deverá ser utilizando o menor número de linhas de código possível 
* porém deve produzir um código eficiente.
**/

//-------------------------------------------------
/**
 * The modulo operator, denoted by %, is an 
 * arithmetic operator.
 * The modulo division operator produces the 
 * remainder of an integer division. 
 * */
//-------------------------------------------------
int main(void)
{

   /* do loop execution */
   int a = 1;
   do 
   {     
      if(a%3 == 0)
      {
         std::cout << "Foo" << std::endl;
      }
      else if(a%5 == 0)
      {
         std::cout << "Baa" << std::endl;
      }
      else
      {
         std::cout << a << std::endl;
      }
      //acrescenta
      a++;
   }while( a <= 100 );
   //format
   std::cout << "\n\n\n\n";
  
}

