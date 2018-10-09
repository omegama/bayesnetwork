//juan carlos gama flores

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>


struct node{
	char name[20]={'*'};
	node *left;
	node *right;
}


int main(int argc, char const *argv[])
{
	//names
	char node_names[1024] = {'*'};
	fgets(node_names, 1024, stdin);
	//number of var
	char nvars = fgets(nvars,1,stdin);
	int nvar = atoi(nvars);

	for (int i =1; i<nvar; i++){
		//fill nodes
		char node_names[1024] = {'*'};
		fgets(node_names, 1024, stdin);
	}

	nvars = fgets(nvars,1,stdin);
	nvar = atoi(nvars);

	for (int i =1; i<nvar; i++){
		//fill nodes
		char node_names[1024] = {'*'};
		fgets(node_names, 1024, stdin);
	}

	return 0;
}