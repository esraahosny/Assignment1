//question 6 of programming exercises
#include<iostream>
using namespace std;
class Move{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);             // sets x, y to a, b
    double showmove() const;                             // shows current x, y values
    Move add(const Move & m) const;              
   double reset(double a = 0, double b = 0);           // resets x,y to a, b
	//_______________________________________________________________________________________________________________________________
// functions definitions 
     Move(double a , double b ){
	      x=a;
	      y=b;
		  return;
        }
    double showmove(double x,double y) const{
		cout<<x<<y <<endl;}
    // this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y,creates a new
    // move object initialized to new x, y values and returns it
     Move add(const Move & m) const{
	       return m3;}
};

void main(){
	Move a1(4,2);
	cout<<a<<b<<endl;
	showmove a2(4,2);

Move m1 (4,2) ;
Move m2(2);
Move m3 = m1.add(m2);
cout<<m3<<endl;
}
