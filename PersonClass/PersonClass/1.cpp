//question 2 in programming exercises
#include<string>
using namespace std;
class Person {
private:
static const int  LIMIT = 25;
string lname;                              // Person’s last name
char fname[LIMIT];                         // Person’s first name
string name;   
Person() { lname = ""; fname[0] = '\0'; };                        //#0
	string person(string name="");                                        // #1
	   Person(const string & ln, const char * fn = "Heyyou");      // #2
	   
	   // the following methods display lname and fname
       void Show() const;                   // firstname lastname format
       void FormalShow() const;             // lastname, firstname format
public:
	
	   //declaration functions
	Person() { lname = ""; fname[0] = '\0'; }  
                                                                    
		 Person(string name="third year") {
			string x= name;
		 }
		 Person(const string & ln, const char * fn= y){
			 lname=ln;
			 fname = *fn;
		 }
		void Show() const{
			cout<<b<<endl;
		};
void main(){
	char y;
	string x;
Person a=x;                          // use default constructor of zero arguments
Person b("Esraa Hosny ");                  // constructor of 1 arguments
Person c("Hosny",y);           // constructor of 2 arguments
b.Show();

cout<<endl;
}}