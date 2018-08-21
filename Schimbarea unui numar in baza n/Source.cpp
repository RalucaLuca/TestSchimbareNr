#include <iostream>
#include <math.h>

void Baza2(int nr) {
	int nrInBaza2, p = 1;
	while (nr != 0)
	{
		nrInBaza2 = nr % 2 * p;
		nr /= 2;
		p *= 10;
	}
	std::cout << nrInBaza2;
}

void Baza4(int nr) {
	int nrInBaza4, p = 1;
	while (nr != 0)
	{
		nrInBaza4 = nr % 4 * p;
		nr /= 4;
		p *= 10;
	}
	std::cout << nrInBaza4;
}

void Baza8(int nr) {
	int nrInBaza8, p = 1;
	while (nr != 0)
	{
		nrInBaza8 = nr % 8 * p;
		nr /= 8;
		p *= 10;
	}
	std::cout << nrInBaza8;
}

void Baza16(int nr) {
	char conv[32], i = 0;

	while (nr != 0)
	{
		if (nr % 16 < 10)
		{
			if (nr % 16 == 0)
				conv[i] = '0';
			else
			if (nr % 16 == 1)
				conv[i] = '1';
			else
				if (nr % 16 == 2)
					conv[i] = '2';
				else
					if (nr % 16 == 3)
						conv[i] = '3';
					else
						if (nr % 16 == 4)
							conv[i] ='4';
						else
							if (nr % 16 == 5)
								conv[i] = '5';
							else
								if (nr % 16 == 6)
									conv[i] = '6';
								else
									if (nr % 16 == 7)
										conv[i] = '7';
									else
										if (nr % 16 == 8)
											conv[i] = '8';
										else
											if (nr % 16 == 9)
												conv[i] = '9';
		}
		else
		{
			if (nr % 16 == 10)
				conv[i] = 'A';
			else
				if (nr % 16 == 11)
					conv[i] = 'B';
				else
					if (nr % 16 == 12)
						conv[i] = 'C';
					else
						if (nr % 16 == 13)
							conv[i] = 'D';
						else
							if (nr % 16 == 14)
								conv[i] = 'E';
							else
								if (nr % 16 == 15)
									conv[i] = 'F';
		}
			
		nr /= 16;
		i++;
		}
		
	for (int j = i - 1; j >= 0; j--)
	{
		std::cout << conv[j];
	}
}

void DinBaza2InBaza10(int nr) 
{
	int nrInBaza10=0, putere;
	int exp = 0, ultimacifra;

	while (nr > 0) {

		ultimacifra =nr % 10;
		nr = nr / 10;
		putere = pow(2, exp);
		nrInBaza10 = nrInBaza10 + ultimacifra * putere;
		exp++;
	}
	std::cout << nrInBaza10 << std::endl;
}

int main()
{
	std::cout << "Introduceti numarul:";
	int nr;
	int nrInBaza2;
	std::cin >> nr;
	std::cin >> nrInBaza2;
	
	std::cout << "Numarul in baza 2"<<std::endl;

	Baza2(nr);
	std::cout << std::endl;

	std::cout << "Numarul in baza 4"<<std::endl;
	Baza4(nr);
	std::cout << std::endl;

	std::cout << "Numarul in baza 8"<<std::endl;
	Baza8(nr);
	std::cout << std::endl;

	std::cout << "Numarul in baza 16" << std::endl;
	Baza16(nr);
	std::cout << std::endl;

	std::cout << "Numarul " << " in baza 10 este ";
	DinBaza2InBaza10(nrInBaza2);
	return 0;
}
