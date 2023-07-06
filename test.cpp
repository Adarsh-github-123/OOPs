#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // Default Constructor
    Hero()
    {
        name = new char[100];
        cout << "Constructor called" << endl;
    }

    // Parameterized Constructor
    Hero(int health)
    {
        // this is a pointer to the current object
        cout << "Address of this is : " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    // User defined copy constructor ----> Deep Copy
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "[ Name : " << this->name;
        cout << ", Health : " << this->health;
        cout << ", Level : " << this->level << " ]" << endl
             << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        return timeToComplete;
    }

    ~Hero()
    {
        cout << "Destructor called " << endl;
    }
};

int Hero::timeToComplete = 10;

int main()
{

    cout << Hero ::random() << endl;

    // Hero h1;
    // cout << h1.timeToComplete << endl;

    // Hero hero1;

    // Hero *hero2 = new Hero();
    // delete hero2;

    // Hero h1;
    // h1.setHealth(12);
    // h1.setLevel('D');
    // char name[7] = "Babbar";
    // h1.setName(name);

    // h1.print();

    // Using the default copy constructor
    // Default Copy Constructor ---> Shallow Copy

    // Hero h2(h1);
    // h2.print();

    // h1.name[0] = 'G';
    // h1.print();
    // h2.print();

    // cout << endl;
    // h1 = h2;
    // h1.print();
    // h2.print();

    // Hero s(50, 'C');
    // s.print();

    // Hero r(s);
    // r.print();

    // Hero a(70, 'A');
    // cout << "Address of a is: " << &a << endl;
    // a.print();

    // Hero *b = new Hero(20, 'B');
    // b->print();

    // static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout << "Level is : " << a.level << endl;
    // cout << "Health is : " << a.getHealth() << endl;

    // dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->setLevel('A');
    // cout << "Level is : " << (*b).level << endl;
    // cout << "Health is: " << (*b).getHealth() << endl;

    // cout << "Level is : " << b->level << endl;
    // cout << "Health is: " << b->getHealth() << endl;

    // Hero ramesh;

    // ramesh.setHealth(70);
    // cout << "The health is " << ramesh.getHealth();

    return 0;
}