#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>

using namespace std;

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}


void gj(int eq[3][4],int d){
	int t = 1,i=1;
	double xn=0,yn=0,zn=0,x,y,z;
	cout<<"\nIteration\tx\ty\tz";
	while(t){
		
		x = (eq[0][3] - (yn * eq[0][1]) - (zn * eq[0][2])) / eq[0][0];
		y = (eq[1][3] - (xn * eq[1][0]) - (zn * eq[1][2])) / eq[1][1];
		z = (eq[2][3] - (xn * eq[2][0]) - (yn * eq[2][1])) / eq[2][2];
		x = rd(x);
		y = rd(y);
		z = rd(z);
		cout<<"\n"<<i++<<"  \t\t"<<x<<"\t"<<y<<"\t"<<z;
		if((rd(x,d) == rd(xn,d)) && (rd(y,d) == rd(yn,d)) && (rd(z,d) == rd(zn,d))){
			double xyz[] = {x,y,z};
			t = 0;
			cout<<"\n\nAnswer : x = "<<xyz[0]<<" , y = "<<xyz[1]<<" , z = "<<xyz[2];
			}
		
		xn = x;
		yn = y;
		zn = z;
	}
}

int main(){
	// 
	int eq[3][4] = {{27,6,-1,85},{6,15,2,72},{-1,1,54,110}};
	
	int d = 2;
	
	gj(eq,d);
	
}