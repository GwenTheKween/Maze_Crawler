#ifndef POSITION
#define POSITION

#define debugn(i) printf("%d\n",i);
#define debugs(s) printf("%s\n",s);

class position{
private:
	int X,Y;
public:
	position(int a=0,int b=0):X(a),Y(b){}
	~position(){}
	void set(int a,int b){X=a;Y=b;}
	int x(){return X;}
	int y(){return Y;}
	position operator+ (position p){return position(x()+p.x(),y()+p.y());}
};

#endif
