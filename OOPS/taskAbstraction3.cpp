#include <iostream>
using namespace std;
class Hero{
    protected:
        string name;
        int health;
    public:
        Hero(string name,int health)
        {
            this->name = name;
            this->health = health;
            cout<<"Base Hero "<<name<<" has entered the world"<<endl;
        }
    virtual void takeDamage(int amount)
    {
        health-=amount;
    }
    void display()
    {
        cout<<"Hero: "<<name<<", Health: "<<health<<endl;
    }
};

class Warrior : public Hero{
    private:
        int armor;
    public:
    Warrior(string name, int health, int armor) : Hero(name, health)
    {
        this->armor = armor;
        cout<<"Warrior "<<name<<" is ready for battle"<<endl;
    }
    void takeDamage(int amount) override
    {
        int damageAfterArmor = amount - (armor/2);
        if(damageAfterArmor < 0) damageAfterArmor = 0;
        health -= damageAfterArmor;
    }
    

};

class Mage: public Hero{
    private:
        int mana;
    public:
    Mage(string name, int health, int mana) : Hero(name, health)
    {
        this->mana = mana;
        cout<<"Mage "<<name<<" is ready to cast spells"<<endl;
    }
    void castSpell()
    {
        cout << "Casting Fireball!" << endl;
        if(mana >= 10)
        {
            mana -= 10;
        }
        else
        {
            cout << "Not enough mana to cast Fireball!" << endl;
        }
    }

};

int main()
{
    Warrior w("Thor", 100,20);
    // Mage m("Loki", 60, 50);

    w.display();
    w.takeDamage(30);
    w.display();
   

    return 0;
}
