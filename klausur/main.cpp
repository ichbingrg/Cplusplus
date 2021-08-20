#include <iostream>
#include <string>

using namespace std;


class CBasis {
public:
	 std::string m_BasisPub = "Public in Basisklasse"; //public
	 void printBasPubl(){cout << m_BasisPub << endl;}
	 void printBasPriv(){cout << m_BasisPriv << endl;}
 private:
	std::string m_BasisPriv = "Privat in Basisklasse"; //private
};
class CKind : public CBasis { // private Vererbung
 public:
 void printPubl(){cout << m_BasisPub << endl;}
 void printPriv(){printBasPriv();}
};
 int main() {
 CBasis myBasisObj;
 CKind myKindObj;
 cout << myKindObj.m_BasisPub << endl; // Zugriff aus main()
 myBasisObj.printBasPubl(); // Zugriff aus main() über Basisklasse
 myBasisObj.printBasPriv(); // Zugriff aus main() über Basisklasse
 myKindObj.printBasPubl(); // Zugriff aus main() über Kindklasse
}