#include <iostream>
#include <cmath>
using namespace std;


int main()
{


//Valores iniciales calculados y otros dados para el ejercicio

int dt=0.01;
int c=1;
int nt=700;
int dx=0.02;
int puntosx=4000;

//Recorrido de x
double xmin=-2.0;
double xmax=2.0;

//Avances de x y de t
double avancex;
double avancet;


//double **U;
//double *Uforw;
//double **U=new double*[puntosx];

//for(int x=0;x<4000;x++)
//{U[x]=new double[700];}


//Poner los datos de las condiciones iniciales, llenando la matriz con los valores dados

double **Uforw=new double*[puntosx];

for(int x=0;x<4000;x++)
{Uforw[x]=new double[700];}

for(int j=0;j<4000;j++)
{
	if(avancex<=abs(0.5))
	{ Uforw[j][0]=0.5;	}

	if(avancex>=abs(0.5))
	{ Uforw[j][0]=0; }	
	avancex+=dx;
	
}

//Hace el recorrido que me determina los cambios de la posicion x con el tiempo
for(int i=0; i<699;i++)
{
	for(int j=1;j<4000;j++)
	{
		
		Uforw[j][i+1]=Uforw[j][i]-c*(dt/dx)*(Uforw[j][i]-Uforw[j-1][i]);
		
		cout<<Uforw[j][i+1]<<" ";

	}
	cout<<"\n";
	avancet+=dt;

}

		

return 0;

}
