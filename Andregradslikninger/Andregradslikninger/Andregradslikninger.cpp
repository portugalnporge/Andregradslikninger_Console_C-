#include <iostream>
#include <cmath>

using namespace std;
void main(){	
	
		 double X1 =0, X2 =0, a = 0, b = 0, c = 0, s=0, y1=0, y2=0;

		cout << " Dette programmet regner ut andregradslikninger. \n\n";
		cout << " aX2 + bx + c \n\n";
		cout << " Vennligst. tast inn: \n\n";
		cout << " Tast inn verdi av a:\n\n ";
		cin >> a;
		if (a == 0)
		{
			X1 = X2 = -c / b;

		}
		else if (pow(b,2) -((4*a*c) < 0))

		cout << " Tast inn verdi av b:\n\n";
		cin >> b;
		cout << " Tast inn verdi av c:\n\n";
		cin >> c;

		y1 = (pow(b, 2) - (4 * a*c));
		s = sqrt(y1);
		X1 = ((-b + s) / (2 * a));

		y2 = pow(b, 2) - (4 * a*c);
		s = sqrt(y2);
		X2 = ((-b - s) / (2 * a));


		cout << " Verdi av X1 = " << X1 << endl;
		cout << " Verdi av X2 = " << X2 << endl;
		
		system("pause");
}

/*
# include <iostream>
#include <cmath>
using namespace std;
void main()
{

	double a = 0,
		b = 0,
		c = 0,
		x1 = 0,
		x2 = 0,
		rotLedd;

	cout << " Dette programmet regner ut andregradslikninger på formen ax ";
	cout << " vennligst skriv inn a, b, c med mellomrom : \n";
	cin >> a >> b >> c;
	cout << endl;

	rotLedd = (b*b) - (4.0 * a*c);

	if (a == 0)
	{
		x1 = -c / b;
		cout << "Dette er forstegradslikninger og x1 = x2 = " << x1 << endl;

	}

	else if (rotLedd < 0.0)
	{
		rotLedd = -rotLedd;
		rotLedd = sqrt(rotLedd);


		x1 = -b / (2.0 * a);
		x2 = rotLedd / (2.0*a);


		cout << " Likningen har en kompleks losning: \n" << x1 << " +j " << x2 << endl << x1 <<" -j " << x2 << endl;
	}

	else
	{
		rotLedd = sqrt(rotLedd);

		x1 = (-b + rotLedd) / (2.0 *a);
		x2 = (-b - rotLedd) / (2.0 *a);

		cout << "---------------------------------------------------------------\n";
		cout << "likningen har losningen : nx1: " << x1 << endl << "x2: " << endl;
		cout << "----------------------------------------------------------------\n";
	}

	system("pause");
}*/

