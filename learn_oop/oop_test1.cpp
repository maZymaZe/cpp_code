#include<cstdio>
class box{
	public:
		box();
		double l;
		double w;
		double h;
		
		double c_v();
		void sl(double le);
		void sw(double we);
		void sh(double he);
		
		box operator+(const box& b){
			box box2;
			box2.h=this->h+b.h;
			box2.l=this->l+b.l;
			box2.w=this->w+b.w;
			return box2;
		}
};
double box::c_v(){
	return l*w*h;
}
void box::sh(double he){
	h=he;
}
void box::sl(double le){
	l=le;
}
void box::sw(double we){
	w=we;
}
class magicbox:public box{
	public:
		int itn;
		void sitm(int n);
		magicbox(int n);
		~magicbox();
		
};
box::box(){
	printf("building a box\n");
} 
magicbox::magicbox(int n){
	printf("building a magicbox\n");
	itn=n;
}
magicbox::~magicbox(){
	printf("deleting a magicbox\n");
}
void magicbox::sitm(int n){
	itn=n;
}
int main(){
	box box1;
	magicbox box2(5);
	printf("%d\n",box2.itn);
	box1.sh(4);
	box1.sl(3);
	box1.sw(5);
	printf("%lf\n",box1.c_v());
	box2.sh(1);
	box2.sl(1);
	box2.sw(1);
	box2.sitm(100);
	printf("%lf %d\n",box2.c_v(),box2.itn);
	box *p=&box1;
	printf("%lf\n",p->c_v());
	box box3;
	box3=box2+box1;
	printf("%lf\n",box3.c_v());
	
	return 0;
}
