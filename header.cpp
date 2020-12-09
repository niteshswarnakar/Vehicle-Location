#include "header.h"
//extern int startpoint;
//extern int endpoint;

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void startpage()
{
    gotoxy(20, 5);
    cout << "       TAPAIKO YATRA";
    gotoxy(20, 7);
    cout << "     Select The Category ";
    gotoxy(20, 9);
    cout << "     1. VEHICLE LOCATION";
    gotoxy(20, 11);
   // cout << "     2. BEST ROUTE" << endl;

}
void select_route()
{

    int a, b;
    gotoxy(20, 7);
    cout << "       Select The Route";
    gotoxy(20, 9);
    cout << "     1. Start Point :  ";
    gotoxy(20, 11);
    cout << "     2. End Point : ";
}
void location_list()
{
    int i = 1;
    ifstream f;
    string name;
    f.open("obj/f1.txt", ios::in);
    f >> name;
    gotoxy(70, 5);
    cout << " 1. " << name;
    f.close();

    f.open("obj/f2.txt", ios::in);
    f >> name;
    gotoxy(70, 6);
    cout << " 2. " << name;
    f.close();

    f.open("obj/f3.txt", ios::in);
    f >> name;
    gotoxy(70, 7);
    cout << " 3. " << name;
    f.close();

    f.open("obj/f4.txt", ios::in);
    f >> name;
    gotoxy(70, 8);
    cout << " 4. " << name;
    f.close();

    f.open("obj/f5.txt", ios::in);
    f >> name;
    gotoxy(70, 9);
    cout << " 5. " << name;
    f.close();

    f.open("obj/f6.txt", ios::in);
    f >> name;
    gotoxy(70, 10);
    cout << " 6. " << name;
    f.close();

    f.open("obj/f7.txt", ios::in);
    f >> name;
    gotoxy(70, 11);
    cout << " 7. " << name;
    f.close();

    f.open("obj/f8.txt", ios::in);
     f >> name;
     gotoxy(70, 12);
     cout << " 8. " << name;
     f.close();

    f.open("obj/f9.txt", ios::in);
    f >> name;
    gotoxy(70, 13);
    cout << " 9. " << name;
    f.close();

    //f.open("obj/f10.txt", ios::in);
    //f >> name;
    //gotoxy(70, 14);
    //cout << " 10. " << name;
    //f.close();

    //f.open("obj/f11.txt", ios::in);
    //f >> name;
    //gotoxy(70, 15);
    //cout << " 11. " << name;
    //f.close();
}
void init(void)
{
    glShadeModel(GL_FLAT);					// Enable Smooth Shading
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);			// White Background
    glClearDepth(1.0f);						// Depth Buffer Setup
    glEnable(GL_DEPTH_TEST);					// Enables Depth Testing
    glDepthFunc(GL_LEQUAL);					// The Type Of Depth Testing To Do
    glEnable(GL_COLOR_MATERIAL);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

}
void keyboard(unsigned char c, int x, int y)
{
    if (c == 65)
    {
        exit(0);
    }
}
void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_RIGHT_BUTTON)
    {
        exit(0);
        
    }
}














