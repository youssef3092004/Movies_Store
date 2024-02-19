#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;

class Customer;
class Movie;

void main_func();
void add_customer();
void add_movie();
void all_customer();
void all_movie();

int main()
{
    main_func();
    return 0;
}
class Customer
{
private:
    string name , email , password;
    int age;

public:
    Customer(string name , int age , string email , string password )
    {
        this->name = name;
        this->age = age;
        this->email = email;
        this->password = password;
    }
    void print(int j)
    {
    ofstream movie_store;
    movie_store.open("system of add customer.txt",std::ios_base::app);

        cout<<"\n-------------------- information of customer"<<j+1<<" --------------------"<<endl;
        cout<<"\n__________ name __________ age __________ E-mail __________ password __________"<<endl;
        cout<<"          "<<name<<"          "<<age<<"          "<<email<<"          "<<password<<"          "<<endl;
        cout<<"--------------------------------------------------------------------------------\n";

        movie_store<<"\n-------------------- information of customer --------------------"<<endl;
        movie_store<<"\n---------- name ---------- age ---------- E-mail ---------- password ----------"<<endl;
        movie_store<<"           "<<name<<"           "<<age<<"           "<<email<<"           "<<password<<endl;
        movie_store<<"--------------------------------------------------------------------------------\n";
    }
};

class Movie
{
private:
    string movie_name ;
    int rate;

public:
    Movie(string movie_name , int rate )
    {
        this->movie_name = movie_name;
        this->rate = rate;
    }
    void print(int j)
    {
    ofstream movie_store;
    movie_store.open("system of add movie.txt",std::ios_base::app);

        cout<<"\n-------------------- information of Movie--------------------"<<endl;
        cout<<"\n__________ movie name __________ rate "<<endl;
        cout<<"             "<<movie_name<<"        "<<rate<<endl;
        cout<<"----------------------------------------\n";

        movie_store<<"\n-------------------- information of Movie--------------------"<<endl;
        movie_store<<"\n__________ movie name __________ rate "<<endl;
        movie_store<<"             "<<movie_name<<"        "<<rate<<endl;
        movie_store<<"----------------------------------------\n";

    }
};

void main_func()
{
 int choice;
 do
   {
 cout<<"---------------------------\n";
 cout<<"1-press 1 to add customer"<<endl;
 cout<<"2-press 2 to add movie"<<endl;
 cout<<"3-press 3 to see all customer in system"<<endl;
 cout<<"4-press 4 to see all movie in system"<<endl;
 cout<<"5-press 5 to EXit"<<endl;
 cout<<"---------------------------\n";
 cin>>choice;
    switch(choice)
    {
    case 1:
        add_customer();
        break;
    case 2:
        add_movie();
        break;
    case 3:
        all_customer();
        break;
    case 4:
        all_movie();
        break;
    case 5:
        break;

    default:
        cout<<"\nenter a valid number : "<<endl;
    }
   }
    while(choice != 5);
}

void add_customer()
{
    string name[100] , email[100] , password[100];
    int age[100];
    int cusromer_number;
    cout<<"\n--------------------\n";
    cout<<"write the customer number\n";
    cin>>cusromer_number;
    cout<<"\n--------------------\n";
    for(int i=0 ; i<cusromer_number ; i++)
    {
    cout<<"-------------------- to add customer "<<i+1<<"--------------------\n";
    cout<<"write the name :"<<endl;
        cin>>name[i];
    cout<<"write the age :"<<endl;
        cin>>age[i];
    cout<<"write the E-mail :"<<endl;
        cin>>email[i];
    cout<<"write the password :"<<endl;
        cin>>password[i];
    }
    for(int j=0 ; j<cusromer_number; j++)
    {
    Customer
    customer(name[j] , age[j] , email[j] , password[j]);
    customer.print(j);
    }
}

void add_movie()
{
    string movie_name[100];
    int rate[100];
    int number_of_movie;
    cout<<"\n---------------------------\n";
    cout<<"write the movie number : "<<endl;
        cin>>number_of_movie;
    for(int i=0 ; i<number_of_movie ; i++){
    cout<<"--------------------------- movie"<<i+1<<" ---------------------------\n";
    cout<<"write the movie :"<<endl;
        cin>>movie_name[i];
    cout<<"write the movie rate :"<<endl;
        cin>>rate[i];
    cout<<"------------------------------------------------------\n";
    }
     for(int j=0 ; j<number_of_movie ; j++){
Movie
movie(movie_name[j] , rate[j]);
movie.print(j);
    }
}

void all_customer()
{
char c;
ifstream in("system of add customer.txt");

while(!in.eof())
{

 in.get(c);
 cout<<c;

}
}

void all_movie()
{
char c;
ifstream in("system of add movie.txt");

while(!in.eof())
    {

 in.get(c);
 cout<<c;
    }
}





