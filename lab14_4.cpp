#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &x, int &y, int &z, int &s)
{
	int r[] = {x, y, z, s};
	int i, j, temp;
	for(int loop; loop < 48; loop++)
	{
		i = rand()%4;
		j = rand()%4;
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	x = r[0];
	y = r[1];
	z = r[2];
	s = r[3];
}