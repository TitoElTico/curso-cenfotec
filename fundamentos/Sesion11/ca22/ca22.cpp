#include <iostream>
#include <string>
#include <format>


using namespace std;

//Clase Abstracta (No se implementa)
class InstrumentBase
{
protected:
    string name;

public:
    virtual void Play() = 0;
    virtual void Stop() = 0;

};

class MusicalInstrument : InstrumentBase
{
public:
    MusicalInstrument(string name)
    {
        this->name = name;
        cout << "Musical Instrumet constructor ... \n";
    }

    virtual void Pause() = 0;

    virtual void Play() override
    {
        cout << format("Playing {}...\n", this->name);
    }

    virtual void Stop() override
    {
        cout << format("Stoping {}...\n", this->name);
    }

};

class Pluckable 
{
protected:
    string stringsType;
public:
    Pluckable()
    {
        cout << "Pluckable constructor ... \n";
    }
};

class StringInstrument : public MusicalInstrument, public Pluckable
{
    public:

    StringInstrument(string name) : MusicalInstrument(name)
    {

    }

        void Pause() override
    {
            cout << ("Pausing...\n");
    }
};

class Violin : public StringInstrument
{
    public:
        Violin() : StringInstrument {"Violin 1"}
        {

        }
    void Play() override
    {
        StringInstrument::Play();
        cout << ("Playing violin...\n");
    }
};


int main()
{
    //MusicalInstrument m1{ "Instrument 1" };
    //m1.Play();

    //StringInstrument si{ "Instrument 2" };
    //si.Stop();
        
    Violin v1;
    v1.Play();

    cout << "READY!\n";
}

