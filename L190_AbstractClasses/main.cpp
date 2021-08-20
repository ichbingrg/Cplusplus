#include <iostream>
#include <vector>


using namespace std;

class Shape {     //ABSTRACT
private:
public:
		virtual void draw() = 0;        //PURE VIRTUAL FUNC
		virtual void rotate() = 0;		//PURE VIRTUAL FUNC
		virtual ~Shape(){}
};

class Open_Shape: public Shape {   //ABSTRACT
public:
	virtual ~Open_Shape(){}
};

class Closed_Shape: public Shape {   //ABSTRACR
public:
	virtual ~Closed_Shape(){}
};

class Line : public Open_Shape {      //CONCRETE
public:
	virtual void draw() override {
		cout << " DRAW A LINE" << endl;
	}
	
	virtual void rotate() override {
		cout << " ROTATE A LINE" << endl;
	}
	
	virtual ~Line(){}
}; 
 
class Circle : public Closed_Shape {    //CONCRETE
public:
	virtual void draw() override {
		cout << " DRAW A CIRCLE" << endl;
	}
	
	virtual void rotate() override {
		cout << " ROTATE A CIRCLE" << endl;
	}
	
	virtual ~Circle(){}
};

class Square : public Closed_Shape {     //CONCRETE
public:
	virtual void draw() override {
		cout << " DRAW A SQUARE" << endl;
	}
	
	virtual void rotate() override {
		cout << " ROTATE A SQUARE" << endl;
	}
	
	virtual ~Square(){}
};
  
  
void screen_refresh(const vector <Shape *> &shapes){
	cout << "REFRESHING " << endl;
	for (const auto p: shapes )
		p->draw();
}


int main(){
	//Shape *ptr = new Circle();
	//ptr-> draw();
	//ptr -> rotate();
	//
	Shape *s1 = new Circle();
	Shape *s2 = new Line();
	Shape *s3 = new Square();
	
	
	vector <Shape *> shapes {s1,s2,s3};
	//for (const auto p: shapes)
	//	p->draw();  
	
	screen_refresh(shapes);
	
	delete s1;
	delete s2;
	delete s3;
	
	
	return 0;
}