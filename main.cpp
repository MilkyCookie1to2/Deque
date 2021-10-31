#include "header.h"

int persona::idgen =1;

int main() {
    deque<persona> people;
    while(1) {
        imgdeque();
        cout << "\nCписок пидарасов, которые как-либо насолили мне в жизни:\n";
        if(people.empty())
            cout << "К сожелению список пуст\n";
        else
        {
            cout << "| id |    Фамилия |        Имя |        Отчество | Почему пидор?\n";
            for (persona chel:people)
                cout << chel;
        }
        imgmenu1();
        imgmenu2();
        int vvod = checker();
        switch(vvod)
        {
            case 1:
            {
                system("clear");
                people.push_front(persona());
                cin >> people[0];
                system("clear");
                break;
            }
            case 2:
            {
                system("clear");
                people.push_back(persona());
                cin >> people[people.size()-1];
                system("clear");
                break;
            }
            case 3:
            {
                system("clear");
                pasteafter(people);
                system("clear");
                break;
            }
            case 4:
            {
                system("clear");
                deletepi(people);
                system("clear");
                break;
            }
            case 5:
            {
                system("clear");
                sortir(people);
                system("clear");
                break;
            }
            case 6:
            {
                system("clear");
                reverse(people.begin(),people.end());
                system("clear");
                break;
            }
            case 7:
            {
                system("clear");
                random_shuffle(people.begin(),people.end());
                system("clear");
                break;
            }
            case 8: return 0;
            default:break;
        }
    }
}
