#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>
#include<vector>

using namespace std;

double rd(double t,double r=4){
	return trunc(t * pow(10,r)) / pow(10,r);
}


vector<double> gj(double eq[3][4],int d){
	int t = 1,i=1;
	double xn=0,yn=0,zn=0,x,y,z;
	//cout<<"\nIteration\tx\ty\tz";
	while(t){
		
		x = (eq[0][3] - (yn * eq[0][1]) - (zn * eq[0][2])) / eq[0][0];
		x = rd(x);
		y = (eq[1][3] - (x * eq[1][0]) - (zn * eq[1][2])) / eq[1][1];
		y = rd(y);
		z = (eq[2][3] - (x * eq[2][0]) - (y * eq[2][1])) / eq[2][2];
		z = rd(z);
		//cout<<"\n"<<i++<<"  \t\t"<<x<<"\t"<<y<<"\t"<<z;
		if((rd(x,d) == rd(xn,d)) && (rd(y,d) == rd(yn,d)) && (rd(z,d) == rd(zn,d))){
//			double xyz[] = {x,y,z};
			vector<double> ans;
			ans.insert(ans.end(),x);
			ans.insert(ans.end(),y);
			ans.insert(ans.end(),z);
			t = 0;
			//cout<<"\n\nAnswer : x = "<<xyz[0]<<" , y = "<<xyz[1]<<" , z = "<<xyz[2];
			return ans;	
		}
		
		xn = x;
		yn = y;
		zn = z;
	}
}