# include <iostream>
# include <stdlib.h>
# include <conio.h>
# include <string.h>
char nota[10];
char canciones[17][10]={"brr","fiu","cric-cric ","brrah","pep","birip","trri-trri","croac","bri-bri","plop","cric-cric","brrah"};

void Cancion()
{
	for (int i=0;i<17;i++)
   {
   	if (strcmp(nota,canciones[i])==0)
      {
       	for (int j=i; j<i+3;j++)
   		{
      		cout<<"  "<<canciones[j];
      	}
      }
   }
}

int main ()
{

		cout<<"ingrese nota de una cancion:";
      cin>>nota;

      if ((strcmp(nota,"croac")!=0)&&(strcmp(nota,"brrah")!=0))
         {
         Cancion();
         }

    
getch();
return 0;
}