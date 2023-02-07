#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d){
	int x,y,ar[] = {*a,*b,*c,*d};

	for(int i=0;i<4;i++){
		x = ar[i];
		y = rand()%4;
		ar[i] = ar[y];
		ar[y] = x;
	}
	*a = ar[0];
	*b = ar[1];
	*c = ar[2];
	*d = ar[3];
}
//Write definition of shuffle() using pointer here 