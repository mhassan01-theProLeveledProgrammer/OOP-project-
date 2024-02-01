#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <fstream>
using namespace std;
class Logo
{
public:
    // int a=1;
    void log()
    {
        system("cls");
        system(" color 8A");
        Sleep(100);
        cout << "          .....__* * *         * * * * * * * *                   " << endl;
        Sleep(100);
        system(" color 8B");
        cout << "       ___.....*       *       *                                  " << endl;
        Sleep(100);
        system(" color 8C");
        cout << "       ........*        *      *                                   " << endl;
        Sleep(100);
        system(" color 8D");
        cout << "     ............*             *                                   " << endl;
        Sleep(100);
        system(" color 8E");
        cout << "                   *           * * * * * * * *                      " << endl;
        Sleep(100);
        system(" color 8A");
        cout << "                     *         *                                   " << endl;
        Sleep(100);
        system(" color 8B");
        cout << "                       *       *                                   " << endl;
        Sleep(100);
        system(" color 8C");
        cout << "    ........ *         *       *                                   " << endl;
        Sleep(100);
        system(" color 8D");
        cout << "       .......*       *        *                                   " << endl;
        Sleep(100);
        system(" color 8E");
        cout << "    ............* * *          *                                   " << endl;
        Sleep(3000);
        system("cls");
        cout << endl
             << endl
             << endl;
        cout << "\n\n\n\t\t\t MADE BY \n\n\n\t\t\t\t\t\t FIRST FLEET" << endl;
        Sleep(3000);
        system(" cls ");
        std::cout << "                      SPOT-FLIX                                   " << endl;
        Sleep(100);
        std::cout << "               EVERYTHING                                            " << endl;
        Sleep(100);
        std::cout << "                            YOU                                          " << endl;
        Sleep(100);
        std::cout << "                                 NEED                                     " << endl;
        Sleep(1000);
        std::system(" color 8C");
        std::cout << "                     IN  ONE   PLACE                                  " << endl;
        Sleep(5000);
        std::system(" cls ");
        std::cout << "              READ THOUSANDS OF NOVELS                                  " << endl
                  << endl;
        Sleep(100);
        std::cout << "                \t WATCH VAST RANGE OF T.V. SERIES AND MOVIES          " << endl
                  << endl;
        Sleep(100);
        std::cout << "                      \t\t LISTEN MILLIONS OF SONGS                      " << endl
                  << endl;
        Sleep(100);
        std::cout << "                             \t\t\t FOR FREE                            " << endl
                  << endl;
        Sleep(5000);
        std::system(" cls ");
        std::cout << "\n\n\n\n\n\n";
        std::cout << ".....";
        Sleep(100);
        std::cout << ".....";
        Sleep(100);
        std::cout << ".....";
        Sleep(100);
        std::cout << "LOADING";
        Sleep(100);
        std::cout << ".....";
        Sleep(100);
        std::cout << ".....";
        Sleep(100);
        std::cout << "....." << endl;
        Sleep(5000);
        std::system(" cls ");
        std::cout << "      WELCOME      TO     SPOT-FLIX    " << endl;
        std::system(" pause ");
        std::system(" cls ");
        std::cout << " WHAT DO YOU WANT TO DO " << endl
                  << endl
                  << endl;
        std::cout << "                        LISTEN SONGS?             " << endl
                  << endl
                  << endl;
        Sleep(1000);
        std::cout << "             READ NOVELS?             " << endl
                  << endl
                  << endl;
        Sleep(1000);
        std::cout << "                                     WATCH MOVIES?             " << endl
                  << endl
                  << endl;
        Sleep(1000);
        std::cout << "                        WATCH T.V. SERIES?             " << endl
                  << endl
                  << endl;
        Sleep(1000);
        std::system("cls ");
    }
};
class logo2
{
public:
    int x;
    void asking()
    {
        std::cout << "          SELECT ANY ONE OPTION          " << endl
                  << endl;
        std::cout << "                   1. SONGS  " << endl;
        std::cout << "            2. NOVELS        " << endl;
        std::cout << "                   3. MOVIES " << endl;
        std::cout << "            4. T.V. SERIES        " << endl;
        Sleep(3000);
        system(" color 8D");
    }
};
class Interest
{
public:
    int interest;
    void getit()
    {
        cout << " ENTER YOUR INTEREST " << endl;
        cin >> interest;
    }
    int selection()
    {
        if (interest == 1)
        {
            cout << " YOU WANT TO LISTEN SOME SONGS " << endl;
        }
        else if (interest == 2)
        {
            cout << " YOU WANT TO READ SOME NOVELS " << endl;
        }
        else if (interest == 3)
        {
            cout << " YOU WANT TO WATCH SOME MOVIES " << endl;
        }
        else if (interest == 4)
        {
            cout << " YOU WANT TO WATCH SOME TV SERIES  " << endl;
        }
        else
        {
            cout << " MOOD UNJUSTIIFIED " << endl;
        }
        return interest;
    }
};
class Novels
{
public:
    // int x;
    void novels(int interest)
    {
        if (interest == 1)
        {
            std::cout << " GREAT YOU WANT TO READ  NOVELS!" << endl;
            Sleep(2000);
            std::system(" cls ");
            std::system(" color 6");
            std::cout << "          SELECT ANY ONE OPTION FOR LANGUAGE" << endl;
            std::cout << "                   1. ENGLISH  " << endl;
            std::cout << "            2. URDU        " << endl;
            Sleep(3000);
            string language;
            std::cout << " ENTER YOUR DESIRED LANGUAGE " << endl;
            getline(cin, language);
        }
    }
};
class EngUrdNovels : public Novels
{
public:
    // int x;
    void englishnovels(string language)
    {
        if (language == "ENGLISH" || language == "english" || language == "eng" || language == "ENG")
        {
            cout << " YOU WANT TO READ ENGLISH NOVELS..." << endl;
            Sleep(1000);
            system("cls");
            system("color 8D");
            cout << " SELECT ANY ONE GENRE: " << endl;
            cout << "                   1. SCIENCE FICTION  " << endl;
            cout << "        2. HISTORICAL FICTION        " << endl;
            cout << "                   3. MYSTERY  " << endl;
            cout << "            4. FICTION         " << endl;
            cout << "                   5. HORROR  " << endl;
            cout << "            6. FANTASY        " << endl;
            cout << "                   7. ROMANCE  " << endl;
            cout << "            8. BIOGRAPHY         " << endl;
            cout << " WHAT DO YOU WANT TO READ IN ENGLISH NOVELS" << endl;
            int genre;
            cin >> genre;
            if (genre == 1)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH SCIENCE FICTION NOVELS " << endl;
                fstream nv3;
                nv3.open("Science Fiction.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 2)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH HISTORICAL FICTION NOVELS " << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 3)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH MYSTERY NOVELS " << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 4)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH FICTION NOVELS " << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 5)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH HORROR NOVELS " << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 6)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH FANTASY NOVELS " << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 7)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH ROMANCE" << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else if (genre == 8)
            {
                system("cls");
                cout << " YOU WANT TO READ ENGLISH BIOGRAPHIES" << endl;
                fstream nv3;
                nv3.open("Adventure Series.txt", ios::in);
                if (nv3.is_open())
                {
                    string line;
                    while (getline(nv3, line))
                    {
                        cout << line << endl;
                    }
                    nv3.close();
                }
                else
                {
                    cout << " UNABLE TO OPEN FILE " << endl;
                }
            }
            else
            {
                cout << " GENRE NOT FOUND " << endl;
            }
        }
    }
};
int main()
{
    Logo l;
    l.log();
    logo2 L2;
    L2.asking();
    Interest I;
    I.getit();
    I.selection();
}