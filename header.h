#include <iostream>
#include <string>
#include <limits>
#include <deque>
#include <algorithm>
#include <iomanip>

using namespace std;

class persona
{
private:
    int id;
    static int idgen;
    string fam;
    string name;
    string och;
    string whybad;
public:
    persona();
    persona(int m_id, string m_fam,string m_name,string m_och,string m_whybad);
    persona(const persona &pers);
    ~persona(){}
    friend istream& operator>>(istream& in, persona&pers);
    friend ostream& operator<<(ostream& out,const persona&pers);
    int get_id(){return id;}
    string get_fam(){return fam;}
    string get_name(){return name;}
    string get_och(){return och;}
};

void imgdeque();
void imgmenu1();
void imgmenu2();
int checker();
void sortir(deque<persona> &);
void pasteafter(deque<persona>&);
void deletepi(deque<persona>&);