//#ifndef HEADER_H
//#define HEADER_H
#pragma once
#include<iostream>
#include<GL/glut.h>
#include<GL/glu.h>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include<conio.h>
#include<fstream>


using namespace std;



void startpage();  //prints first page
void select_route();
void location_list();
void gotoxy(int x, int y);  //sets handle position

class coordinate
{
public:
    float x_val;
    float y_val;
};
class location:public coordinate   // Inheritance of derived class location from base class coordinate
{
public:
    string place;
    location(){}
    location(string m = "", float a = 0, float b = 0)
    {
        place = m;
        x_val = a;
        y_val = b;
    }

};

class points
{
public:
    float x, y;

};



void init(void);
void keyboard(unsigned char c, int x, int y);
void mouse(int button, int state, int x, int y);




//#endif // HEADER_H

