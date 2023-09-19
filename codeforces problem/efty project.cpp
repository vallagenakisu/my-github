#include <bits/stdc++.h>
//#include <string.h>
using namespace std;

class Team
{
    // string name;
    // string country;
    // string league;
    // int foundedyear;
    // string coachname;
    // string biggestwin;
    // string biggestloss;

public:
    string name;
    string country;
    string league;
    int foundedyear;
    string coachname;
    string biggestwin;
    string biggestloss;
    Team()
    {
    }
    Team(string Name, string Country, string League, int Foundedyear, string Coachname, string Biggestwin, string Biggestloss)
    {
        name = Name;
        country = Country;
        league = League;
        foundedyear = Foundedyear;
        coachname = Coachname;
        biggestwin = Biggestwin;
        biggestloss = Biggestloss;
    }

    void displayy()
    {
        cout << "Name of the club is: " << name << endl;
        cout << "Name of the country: " << country << endl;
        cout << "Name of the leagus: " << league << endl;
        cout << "Founding year is: " << foundedyear;
        cout << "Coach name: " << coachname << endl;
        cout << "Biggest win: " << biggestwin << endl;
        cout << "Biggest loss: " << biggestloss << endl;
    }
};

class club : public Team
{
    string ownleague;
    int nownleague;
    // string ucl;
    int nucl;
    string valuable_transfer;
    string vt_price;

public:
    club() {}
    club(string Name, string Country, string League, int Foundedyear, string Coachname, string Biggestwin, string Biggestloss, string Ownleague, int Nownleague, int Nucl, string Valuable_transfer, string Vt_price) : Team(Name, Country, League, Foundedyear, Coachname, Biggestwin, Biggestloss)
    {
        ownleague = Ownleague;
        nownleague = Nownleague;
        // ucl = Ucl;
        nucl = Nucl;
        valuable_transfer = Valuable_transfer;
        vt_price = Vt_price;
    }

    void displayy()
    {
        Team::displayy();
        cout << "Own league: " << ownleague << endl;
        cout << "Number of times won own league: " << nownleague << endl;
        // cout << "UCL: " << ucl << endl;
        cout << "Number of times won UCL: " << nucl << endl;
        cout << "Valuable transfer: " << valuable_transfer << endl;
        cout << "Price of valuable transfer: " << vt_price << endl;
    }
};

class international_team : public Team
{
    string continental;
    int ncontinental;
    // string wc;
    int nwc;

public:
    international_team() {}
    international_team(string Name, string Country, string League, int Foundedyear, string Coachname, string Biggestwin, string Biggestloss, string Continental, int Ncontinental, int Nwc) : Team(Name, Country, League, Foundedyear, Coachname, Biggestwin, Biggestloss)
    {
        continental = Continental;
        ncontinental = Ncontinental;
        // wc = Wc;
        nwc = Nwc;
    }

    void displayy()
    {
        Team::displayy();
        {
            cout << "Continental Trophy: " << continental << endl;
            cout << "NUmber of times won continental trophy: " << ncontinental << endl;
            cout << "Number of time won world cup:" << nwc << endl;
        }
    }
};

class club_database
{
    club c[10];

public:
    club_database()
    {
        c[0] = club("RealMadrid", "Spain", "La-Liga", 1902, "CarloAncelotti", "11-1againstBarcelona", "8-1againstEspanyol", "La-Liga", 33, 14, "EdenHazard", "£88.3M");
        c[1] = club("Barcelona", "Spain", "La-Liga", 1899, " Xavi Hernandez", "10-1 against  Gimnàstic de Tarragona", "12-1 against Athletic Club", "La-Liga", 26, 5, "Ousmane Dembele", "€120M");
        c[2] = club("Manchester City", "England", "English Premier League", 1880, "Pep Guardiola", "12-0 against Liverpool", "8-1 against Middlesbrough", "English Premier League", 8, 0, "Jack Grealish", "£100M");
        c[3] = club("Manchester United", "England", "English Premier League", 1878, "Erik ten Hag", "9-0 against Southampton", "7-0 against Blackburn", "English Premier League", 13, 3, "Paul Pogba", "£94.5M");
        c[4] = club("Arsenal", "England", "English Premier League", 1886, "Mikel Arteta", "12-0 against Loughborough", "8-2 against Manchester United", "English Premier League", 3, 0, "Nicolas Pepe", " £72M");
        c[5] = club("Bayern Munich", "Germany", "Bundesliga", 1990, "Thomas Tuchel", "11-1 against Borussia Dortmund ", "7-1 against Fortuna Dusseldorf", "Bundesliga", 31, 6, "Lucas Hernandez", "€80.00M");
        c[6] = club("Paris Saint Germain", "Paris", "Ligue-1", 1970, "Christophe Galtier", "10-0 against  Cote Chaude", "6-0 against Nantes", "Ligue-1", 10, 0, "Neymar Jr", "€222M");
        c[7] = club("Juventus", "Italy", "Seria A", 1897, "Massimiliano Allegri", "7-0 against Parma", "7-1 against AC Millan", "Seria A", 36, 2, "Cristiano Ronaldo", " €110M");
        c[8] = club("A.C Millan", "Italy", "Ligue-1", 1899, "Stefano Pioli", "13-0 against Audax Modena", "8-0 against Bologna", "Seria A", 18, 7, "Leonardo Bonucci", " £38M");
        c[9] = club("Liverpool", "England", "English Premier League", 1898, "Jurgen Klopp", "11-0 against Stromsgodset", "7-2 against Aston Villa", "English Premier League", 19, 6, "Darwin Nunez", " £85.6M");
    }

    club searchclub(string name)
    {
        for (int i = 0; i < 10; i++)
        {
            if (c[i].name.compare(name) == 0)
            {
                return c[i];
            }
        }
    }
};

int main()
{
    club_database a;
    string clubname;
    cout << "Enter a club name: ";
    cin >> clubname;
    club x = a.searchclub(clubname);
    x.displayy();

    return 0;
}