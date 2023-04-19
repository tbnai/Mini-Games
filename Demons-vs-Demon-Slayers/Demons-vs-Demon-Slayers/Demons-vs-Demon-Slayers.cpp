#include <iostream>
using namespace std;


//define a demon // 

class Demon {
private:
	string name;
	int hp;
	int attack;
	int spAtt;
public:
	Demon(string n, int h, int att, int spA) {
		name = n;
		hp = h;
		attack = att;
		spAtt = spA;
	}

	// introduction for demons //
	void Intro() {
		cout << "Demon appears!" << endl;
		cout << "Name is " << name << ". Prepare to die!" << endl;
	}
};

// define a demonslayer //
class DemonSlayer {
private:
	string name;
	int hp;
	int attack;
	int spAtt;
public:
	DemonSlayer(string n, int h, int att, int spA) {
		name = n;
		hp = h;
		attack = att;
		spAtt = spA;
	}

	// introduction for demonslayers // 
	void Intro() {
		cout << "DemonSlayer appeared." << endl;
		cout << "My name is " << name << ". You don't belong here." << endl;
	}
};


int main()
{
	Demon D1("Muzan", 150, 30, 50);
	D1.Intro();

	DemonSlayer DS1("Tanjiro", 100, 10, 60);
	DS1.Intro();

}
