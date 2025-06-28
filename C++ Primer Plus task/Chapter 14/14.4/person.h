#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <iostream>

class Person{
    private:
        std::string lname;
        std::string fname;
    protected:
        void Get() {std::cout << "Enter person's first name: "; std::cin >> fname; std::cout << "Enter person's last name: "; std::cin >> lname;}
    public:
        Person() : lname("no last name"), fname("no first name"){}
        Person(const std::string & ln, const std::string & fn) : lname(ln), fname(fn){}
        virtual ~Person() {}
        virtual void Set() {Get();}
        virtual void Show() const {std::cout << "Name: " << fname << " " << lname << std::endl;}
};

class Gunslinger : virtual public Person{
    private:
        double draw_time;
        int notches;
    protected:
        void Data() const {std::cout << "Draw time: " << Draw() << std::endl; std::cout << "Notches: " << notches << std::endl;}
        void Get() {std::cout << "Enter gunslinger's draw time: "; std::cin >> draw_time; std::cout << "Enter gunslinger's notches: "; std::cin >> notches;}
    public:
        Gunslinger() : Person(), draw_time(0), notches(0){}
        Gunslinger(const std::string & ln, const std::string & fn, double dt, int n) : Person(ln, fn), draw_time(dt), notches(n){}
        Gunslinger(const Person & p, double dt, int n) : Person(p), draw_time(dt), notches(n){}
        double Draw() const {return draw_time;}
        void Set() {Person::Get(); Get();}
        void Show() const {std::cout << "Category: gunslinger" << std::endl; Person::Show(); Data();}
};

class PokerPlayer : virtual public Person{
    protected:
        void Data() const {std::cout << "Card: " << Draw() << std::endl;}
        void Get() {}
    public:
        PokerPlayer() : Person(){}
        PokerPlayer(const std::string & ln, const std::string & fn) : Person(ln, fn){}
        PokerPlayer(const Person & p) : Person(p){}
        int Draw() const {return std::rand() % 52 + 1;}
        void Set() {Person::Get();}
        void Show() const {std::cout << "Category: poker player" << std::endl; Person::Show(); Data();}
};

class BadDude : public Gunslinger, public PokerPlayer{
    protected:
        void Get() {Gunslinger::Get();}
    public:
        BadDude() : Person(), Gunslinger(), PokerPlayer(){}
        BadDude(const std::string & ln, const std::string & fn, double dt, int n) : Person(ln, fn), Gunslinger(ln, fn, dt, n), PokerPlayer(ln, fn){}
        BadDude(const Person & p, double dt, int n) : Person(p), Gunslinger(p, dt, n), PokerPlayer(p){}
        double Gdraw() const {return Gunslinger::Draw();}
        double Cdraw() const {return PokerPlayer::Draw();}
        void Set() {Person::Get(); Gunslinger::Get();}
        void Show() const {std::cout << "Category: bad dude" << std::endl; Person::Show(); Gunslinger::Data(); PokerPlayer::Data();}
};
#endif