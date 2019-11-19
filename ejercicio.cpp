#include<iostream>
#include <fstream>
#include <sstream>
#include <math.h> 
#include<cmath>

using namespace std;
    static float dx = 2.23; 
    static float dt = 0.1;
    int Num = 30;
    int veces = 10;

void difu(string nombre_txt){
	ofstream file;
	file.open(nombre_txt.c_str());
	float datosx[Num][Num];
    int ident[Num][Num];
	float datosxn[Num][Num];
	for (int i = 0; i < Num; ++i)
	{
		for (int j = 0; j < Num; ++j)
		{	
			datosx[i][j]=10;
            if (i==j)
            {
                ident[i][j]=1;
            }
            else
            {
                ident[i][j]=0;
            }
		}
	}
	for (int k = 0; k <= veces; ++k)
	{
		file << "Intento:"<<k<<"\n";
		for (int i = 0; i < Num; ++i)
		{
			for (int j = 0; j < Num; ++j)
			{	
				datosxn[i][j]=(datosx[i+1][j]+datosx[i-1][j])/(dx*dx)-(2/(dx*dx)*datosx[i][j]);
				file << datosx[i][j]<< ",";
			}
			file << "\n";
		}
		for (int i = 0; i < Num; ++i)
		{
			for (int j = 0; j < Num; ++j)
			{
				datosx[i][j]=datosxn[i][j];
			}
		}
	}
	file.close();
}

int main()
{
    
	difu("parte1.dat");
	return 0;
}