#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char petition[100];
	char result[100];
	strcpy(petition,"Brais/21/Pablo/14/Maria/41/Sara/22");
	
	
	char name[20];
	int age;
	char *p = strtok (petition, "/");
	while(p!=NULL)
	{
		strcpy(name,p);
		p= strtok(NULL,"/");
		age = atoi (p);
		if (age>18)
			sprintf(result,"%s%s*%d-",result,name,age);
		p=strtok(NULL,"/");
		
	}
	result[strlen(result)-1]='\0';
	printf("Result: %s\n",result);
	
	
	
	
	
}

