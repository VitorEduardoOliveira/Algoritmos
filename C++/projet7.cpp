#include<stdio.h>
#include<stdlib.h>
int main()
{
    int calorias,prato,sobremesa,bebida,totalcalorias;
    printf("PRATO\n1 - Vegetariano 180 cal\n2 - Peixe 230 cal\n3 - Frango 250 cal\n4 - Carne 350 cal\n");
    printf("Escolha um prato:");
    scanf("%d",&prato);
    if(prato==1)
    { 
       calorias=180;
       prato=calorias;
    }
    else
    {
       if(prato==2)
       {
           calorias=230;
           prato=calorias;
       }
       else
       {
           if(prato==3)
           {
               calorias=250;
               prato=calorias; 
           }
           else
           {
               if(prato==4)
               {
                   calorias=350;
                   prato=calorias;
               }
           }
        }
    }

    printf("\nSOBREMESA\n1 - Abacaxi 75 cal\n2- Sorvete diet 110 cal\n3 - Mousse diet 170 cal\n4 - Mousse chocolate 200 cal\n");
    printf("Escolha a opção da sobremesa:");
    scanf("%d",&sobremesa);
    if(sobremesa==1)
    {
       calorias=75;
       sobremesa=calorias;
    }
    else
    {
        if(sobremesa==2)
        {
            calorias=110;
            sobremesa=calorias;
        }
        else
        { 
           if(sobremesa==3)
           {
               calorias=170;
               sobremesa=calorias;
           }
           else
           {
                if(sobremesa==4)
                {
                    calorias=200;
                    sobremesa=calorias;
                }
           }
        }
    }
   
    printf("\nBEBIDA\n1 - Chá 20 cal\n2 - Suco de laranja 70 cal\n3 - Suco de melão 100 cal\n4 - Refrigerante diet 65 cal");
    printf("Escolha a opção da bebida: ");
    scanf("%d",&bebida);
    if(bebida==1)
    {
       calorias=20;
       bebida=calorias;
    }
    else
    {
         if(bebida==2)
         {
           calorias=70;
           bebida=calorias;
        }
        else
        {
           if(bebida==3)
           {
               calorias=100;
               bebida=calorias;
           }  
           else
           {
                   if(bebida==4)
                   {
                   calorias=65;
                   bebida=calorias;
                }
            }
        } 
    }
    totalcalorias=prato+sobremesa+bebida;
    printf("Total de calorias é: %d\n", totalcalorias);
    system("pause");
    return 0;
}
