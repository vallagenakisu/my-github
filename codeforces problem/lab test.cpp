#include<bits/stdc++.h>
using namespace std;
class Media 
{
    public:
    void virtual play()=0;
    void virtual pause()=0;
    void virtual stop()=0;
};
class Book: public Media
{
    string title,author;
    int numberOfPages;
    public:
    Book()
    {
        cin>>title>>author;
        cin>>numberOfPages;
    }
    void play()
    {
        cout<<"OPEN A BOOK"<<endl;
    }
    void pause()
    {
        cout<<"OPENED A BOOK"<<endl;
    }
    void stop()
    {
        cout<<"STOP THE BOOK"<<endl;
    }
    friend ostream &operator<< (ostream &, Book &);
};
ostream &operator<<( ostream &mycout,Book &a)
{
    mycout<<a.title<<endl;
    mycout<<a.author<<endl;
    mycout<<a.numberOfPages<<endl;
    return mycout;
}
class Movie: public Media
{
    string title,director;
    int durationInMinutes;
    public:
    Movie()
    {
        cin>>title>>director>>durationInMinutes;
    }
    void play()
    {
        cout<<"OPEN A MOVIE"<<endl;
    }
    void pause()
    {
        cout<<"OPENED A MOVIE"<<endl;
    }
    void stop()
    {
        cout<<"STOP THE MOVIE"<<endl;
    }
    friend ostream &operator<< (ostream &, Movie &);

};
ostream &operator<<( ostream &mycout,Movie &a)
{
    mycout<<a.title<<endl;
    mycout<<a.director<<endl;
    mycout<<a.durationInMinutes<<endl;
    return mycout;
}
class Song:public Media
{
    string title,artist;
    int durationInSeconds;
    public:
    Song()
    {
        cin>>title>>artist>>durationInSeconds;
    }
    void play()
    {
        cout<<"OPEN A Song"<<endl;
    }
    void pause()
    {
        cout<<"OPENED A Song"<<endl;
    }
    void stop()
    {
        cout<<"STOP THE Song"<<endl;
    }
    friend ostream &operator<< (ostream &, Song &);
};
ostream &operator<<( ostream &mycout,Song &a)
{
    mycout<<a.title<<endl;
    mycout<<a.artist<<endl;
    mycout<<a.durationInSeconds<<endl;
    return mycout;
}
template<class t1>
t1 showdetails()
{
    
}
int main()
{
    Book a;
    // a.play();
    // a.pause();
    // a.stop();
    cout<<a;

    // Song b;
    // b.play();
}