//juan carlos gama flores
//Eduardo Josué Contreras Álvarez
#include <iostream.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct node{
	char name[20]={'*'};
	node *left;
	node *right;
}

int main()
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

	cout << "Hello world!" << endl;
    return 0;
}
