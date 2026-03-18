#include <iostream>
#include <cmath>

  using namespace std;

int main(int argc, char** argv) {
 
  string N1;	
  float a, c, b, X1, X2, Q, x;

  cout <<"informe seu nome: ";
  cin >> N1;
  cout << N1 << ", Me da um numero: ";
  cin >> a;
  
  if(a<=3) 
	cout << "QUE NUMERO PEQUENOOO, tenta de novo e pensa alto";
	
	else
	{
		cout << "iiiiiiiiiih, que grande hein, ta querendo compensa algo??? " << endl << endl;
	}
	
	cout << "Agora vamos brincar, vou uma equecao de segundo grau me de valores B e C. O A sera o que vc me deu. " << endl << endl;
    cout << "me valor para B: " ;
    cin >> b;
	cout << "Agora me de um valor para C: ";
	cin >> c;	
	Q=pow (b,2) -4*a*c;
	x= sqrt (Q);
	X1 =(-b+x)/ (2*a);
	X2 =(-b-x)/ (2*a);
	cout << "Os valores de X sao:" << X1 << " " << "E" << " " << X2 << endl;
	return 0;
}
