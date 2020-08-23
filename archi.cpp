#include <stdio.h>
#include <iostream>

using namespace std;

class Arreglo
{
	int tam;
	int * elem;
	
	public:
		Arreglo(int);
		void mostrar();
		void cargar();
		int burbuja();
};

Arreglo::Arreglo(int tam)
{
	this->tam=tam;
	elem = new int[tam];
}

void Arreglo::cargar()
{
	int temp;
	for(int i=0;i<tam;i++)
	{
		temp=0;
		cout<<"Ingrese elemento "<<i+1<<": ";
		cin>>temp;
		elem[i]=temp;
	}
}

int Arreglo::burbuja()
{
	int i, j, aux , op=0;
	for (i=0;i<tam-1;i++)
	{
		for (j=i+1;j<tam;j++)
		{
			op++;
			if (elem[i]>elem[j])
			{
				aux=elem[i];
				elem[i]=elem[j];
				elem[j]=aux;
			}
		}
	}
	return op;
}

void Arreglo::mostrar()
{
	cout<<"[ ";
	for(int i=0;i<tam;i++)
	{
		cout<<elem[i]<<", ";
	}
	cout<<" ]"<<endl;
}

int main(int argc, char *argv[])
{
	int n;
	cout<<"Ingrese el tamaño del arreglo"<<endl;
	cin>>n;
	Arreglo A(n);
	cout<<"Ingrese los datos del arreglo"<<endl;
	A.cargar();
	cout<<"El arreglo sin ordenar seria"<<endl;
	A.mostrar();
	cout<<"Se ordenan los elementos"<<endl;
	int oper=A.burbuja();
	cout<<"El arreglo ordenado seria"<<endl;
	A.mostrar();
	cout<<"El Numero de operaciones hechas es: "<<oper<<endl;
}
