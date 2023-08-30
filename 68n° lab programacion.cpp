#include <bits/stdc++.h>
using  namespace std;
string AgregarPunto(string f);

int main (){
	string frase;
	cout<<"ingrese una cadena: ";
	getline(cin,frase);
	
	cout<<AgregarPunto( frase);
return 0;
}

string AgregarPunto(string f) {
int cont=0;
string n;
for(int i=0; i<f.size();i++){
if (cont==3){
n+= '.';
cont=0;	
}
if (cont!=3) {
n+=f[i];

cont ++;	
}

	
}
	
	
return n;	
}
