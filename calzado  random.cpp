#include <iostream>
using namespace std;
//definicion de una clase 
class Calzado
{
	private:
		int talla;
		char LadoPie;
	public:
	
	Calzado()
	{
		talla=30;
		LadoPie='D';
	}
	Calzado(int tam)
	{
		LadoPie='d';
		talla=tam;
	}
	Calzado(int tam, char Lado)
	{
		LadoPie=Lado;
		talla=tam;
	}
	bool esParde(Calzado call)
	{
		bool resp;
		if (talla == call.talla && LadoPie!=call.LadoPie)
			resp =true;
		else
			resp =false;
		return  resp;
	}
	Calzado crearPar()
	{
		Calzado par;
		par.talla=talla;
		//expresion boleana? verdad:false;
		par.LadoPie=talla =='I'?'D':'I';
		/*if( LadoPie=='I')
		par.LadoPie='D';
		else
		par.LadoPie='I'
		*/
		return par;
	}
	
};

int main() {
	Calzado a,b(45),c(30,'I'),d(30,'D');
		if(a.esParde(b))
		cout<<"a es par de b"<<endl;
		else
			cout<<"a no es par de b"<<endl;
		Calzado x= b.crearPar();
		if(x.esParde(b))
			cout<<"x es par de b"<<endl;
		else
			cout<<"x no es par de b"<<endl;
		
		x.VerDatos();
		//La talla es 45
		//Lado Pie IZQUIERDA
		{
			unsigned int seed =(unsigned int)time(0);
			
			int ran=40;
			int rand=45
				
				int tallale= ran+(seed%(rand-ran+1));
				int tallale =seed%2
			cout<<"La talla es"<<\n<<endl;
			cout<<"Lado Pie es"<<(tallale==0?"IZQUIERDO";"DERECHO")<<\n<<endl;
		};
		
		
		x.randomizar();
		while(true)
		{
			a.randomizar();
			b.randomizar();
			cout<<"indica si a es par de b?"<<endl;
			a.VerDatos();
			b.VerDatos();
			int resp
			cin>>resp;
			
			if(a.esParde(b)&& resp==1 || resp==0)
				cout<<"Adivinaste"<<endl;
			else
				cout<<"No es Correcto"<<endl;
		}
		//crear 3 pares a,b,c=>ab.ac.bc-..-.-40-42
		//regalara un lab si mostramos un  grafico de un Calzado
	return 0;
}

