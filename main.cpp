// prosty stos przechowujący strukture (tu nazwisko dłużnika i kwotę długu)
//17.05.2018

#include <iostream>
#include <cctype>
#include "cust.cpp"


int main()
{
	using namespace std;
	Stack st;
	char ch;
	customer po;
	cout << "Nacisnij <D> aby dodac deklaracje,\n<P> aby splacic deklaracje, lub <K> aby zakonczyc.\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd':cout << "Podaj nazwisko: ";
			cin >> po.fullname;
			cout << "Podaj kwote: ";
			cin >> po.payment;
			if (st.isfull())
				cout << "Stos pelen!\n";
			else st.push(po);
			break;

		case'P':
		case'p':if (st.isempty())
			cout << "Stos pusty!\n";
				else
				{
					st.pop(po);
				}
				break;
		}
		cout << "Nacisnij <D> aby wprowadzic deklaracje,\n<P> aby przetworzyc deklaracje lub <K> aby zakonczyc.\n";
	}
	cout << "Fajrant !\n";
	return 0;
}

