#include <stdio.h>
#include <string.h>
int main()
{
	int cont=0;
	int x=0;
	char oracion[50];
	printf("Ingrese una oracion: ");
	fgets(oracion, sizeof(oracion), stdin);
	printf("\nSu oracion es: %s",oracion);
	

	
	for(x=0;x<strlen(oracion);x++)
	{
		if(oracion[x]>=65 && oracion[x]<=90)
		{
		    oracion[x] = oracion[x] + 32;	
		}
	}
	printf("\nSu oracion en minusculas es: %s",oracion);
	
	for(x=0;x<strlen(oracion);x++)
	{
		if(oracion[x]>=97 && oracion[x]<=121)
		{
		    oracion[x] = oracion[x] - 32;	
		}
	}
	printf("\nSu oracion en mayusculas es: %s",oracion);
	
	for(x=0;x<strlen(oracion);x++)
	{
		if(oracion[x]>=65 && oracion[x]<=90)
		{
		    oracion[x] = oracion[x] + 32;	
		}
	}

	for(x=0;x<strlen(oracion);x++)
	{
		if(oracion[x]>=97 && oracion[x]<=121)
		{
		    oracion[x] = oracion[x] - 32;	
		    x++;
		}
	}
	printf("\nSu oracion en alternadas es: %s",oracion);
	
	for(x=0;x<strlen(oracion);x++)
	{
		if(oracion[x]>=65 && oracion[x]<=90)
		{
		    oracion[x] = oracion[x] + 32;	
		}
	}
	
	for(x=0;x<1;x++)
	{
		if(oracion[x]>=97 && oracion[x]<=121)
		    {
		    oracion[x] = oracion[x] - 32;
		    }
	}
		    
	for(x=0;x<strlen(oracion);x++)
	{
		if(oracion[x]==' ')
		{
		x++;
			if(oracion[x]>=97 && oracion[x]<=121)
		    {
		    oracion[x] = oracion[x] - 32;
		    }	
		}
	
	}
	printf("\nSu oracion con mayusculas iniciales es: %s",oracion);
}
