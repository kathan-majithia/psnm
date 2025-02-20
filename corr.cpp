#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double x[] = {98,97,102,100,99,101,99,101};
	double y[] = {100,91,63,80,92,70,90,72};
	
	int n = sizeof(x) / sizeof(x[0]);
	
	double mx = 0,my = 0;
	
	for(int i=0;i<n;i++){
		mx += x[i];
		my += y[i];
	}
	
	mx /= n;
	my /= n;
	
	int mix = mx,miy = my;
	if(mix == mx && miy == my){
		int x_y_ = 0,x_2 = 0,y_2 = 0;
		cout<<"X\tY\tX-X'\tY-Y'\t(X-X')(Y-Y')\t(X-X')^2\t(Y-Y')^2";
		for(int i=0;i<n;i++){
			cout<<"\n"<<x[i]<<"\t"<<y[i]<<"\t"<<(x[i] - mx)<<"\t"<<(y[i] - my)<<"\t"<<(x[i] - mx)*(y[i] - my)<<"\t\t"<<(x[i] - mx)*(x[i] - mx)<<"\t\t"<<(y[i] - my)*(y[i] - my);

			x_y_ += (x[i] - mx)*(y[i] - my);
			x_2 += (x[i] - mx)*(x[i] - mx);
			y_2 += (y[i] - my)*(y[i] - my);			
		}
		
		double ans = x_y_ / (pow(x_2,0.5)*pow(y_2,0.5));
		
		cout<<"\n\nRxy : "<<ans;
		
	}else{
		int x_y_ = 0,x_2 = 0,y_2 = 0;
		cout<<"X\tY\tXY\tX^2\tY^2";
		for(int i=0;i<n;i++){
			cout<<"\n"<<x[i]<<"\t"<<y[i]<<"\t"<<(x[i] * y[i])<<"\t"<<x[i]*x[i]<<"\t"<<y[i]*y[i];

			x_y_ += (x[i])*(y[i]);
			
			x_2 += (x[i])*(x[i]);
			y_2 += (y[i])*(y[i]);

		}
			mx *= n;
			my *= n;
		
		cout<<"\n\n"<<mx<<"\t"<<my<<"\t"<<x_y_<<"\t"<<x_2<<"\t"<<y_2;
		
		double ans = (((n * x_y_) - (mx * my))/ ((pow(((n * x_2) - pow(mx,2)),0.5)) * pow((((n * y_2) - pow(my,2))),0.5)));
		
		cout<<"\n\nRxy : "<<ans;
	}
	
	return 0;
}
