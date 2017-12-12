#include "Header.h"
#include "Zespół.h"
#include "Informatyk.h"

template<int ilosc>
using ZespółInformatyk = Zespół<ilosc, Informatyk>;

int main()
{
	ZespółInformatyk<3> dreamTeam;

	cout << dreamTeam;














	getchar();
	return 0;
}
