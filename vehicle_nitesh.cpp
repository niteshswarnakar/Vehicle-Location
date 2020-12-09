
#include "header.h"
#include "variables.h"
using namespace std; 
using namespace variable_collection;

int statef = 0;
int stateb = 0;
void timer(int);
void render(void);
 
int main(int argc, char** argv)
{
    
    startpage();

    

    int ch;
   int startpoint, endpoint;
    cin >> ch;
    switch (ch)
    {
    case 1:
        system("cls");
        location_list();
        select_route();
        gotoxy(43, 9);
        cin >> startpoint;
        gotoxy(42, 11);
       cin >> endpoint;
        switch (startpoint)
        {
        case 1:
            initial_x = l1.x_val;
            initial_y = l1.y_val;
            a.x = l1.x_val;
            a.y = l1.y_val;
            switch (endpoint)
            {
            case 1:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l1.x_val;
                b.y = l1.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;

            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l2.x_val;
                c.y = l2.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l8.x_val;
                b.y = l8.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l8.x_val;
                b.y = l8.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 2:
            initial_x = l2.x_val;
            initial_y = l2.y_val;
            a.x = l2.x_val;
            a.y = l2.y_val;

            switch (endpoint)
            {
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l4.x_val;
                b.y = l4.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
             
            }

            break;
        case 3:
            initial_x = l3.x_val;
            initial_y = l3.y_val;
            a.x = l3.x_val;
            a.y = l3.y_val;
            switch (endpoint)
            {
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l2.x_val;
                c.y = l2.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l1.x_val;
                b.y = l1.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l4.x_val;
                b.y = l4.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l7.x_val;
                b.y = l7.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l8.x_val;
                b.y = l8.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 4:
            initial_x = l4.x_val;
            initial_y = l4.y_val;
            a.x = l4.x_val;
            a.y = l4.y_val;
            switch (endpoint)
            {
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l4.x_val;
                b.y = l4.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l2.x_val;
                b.y = l2.y_val;
                c.x = l2.x_val;
                c.y = l2.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l7.x_val;
                b.y = l7.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 5:
            initial_x = l5.x_val;
            initial_y = l5.y_val;
            a.x = l5.x_val;
            a.y = l5.y_val;
            switch (endpoint)
            {
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 2:

                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l2.x_val;
                b.y = l2.y_val;
                c.x = l2.x_val;
                c.y = l2.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l4.x_val;
                b.y = l4.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 6:
            initial_x = l6.x_val;
            initial_y = l6.y_val;
            a.x = l6.x_val;
            a.y = l6.y_val;
            switch (endpoint)
            {
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l7.x_val;
                b.y = l7.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l8.x_val;
                b.y = l8.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l7.x_val;
                b.y = l7.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l8.x_val;
                b.y = l8.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 7:
            initial_x = l7.x_val;
            initial_y = l7.y_val;
            a.x = l7.x_val;
            a.y = l7.y_val;
            switch (endpoint)
            {
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l7.x_val;
                b.y = l7.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l4.x_val;
                b.y = l4.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 8:
            initial_x = l8.x_val;
            initial_y = l8.y_val;
            a.x = l8.x_val;
            a.y = l8.y_val;
            switch (endpoint)
            {
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l8.x_val;
                b.y = l8.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l6.x_val;
                b.y = l6.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l1.x_val;
                b.y = l1.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            }
            break;
        case 9:
            initial_x = l9.x_val;
            initial_y = l9.y_val;
            a.x = l9.x_val;
            a.y = l9.y_val;
            switch (endpoint)
            {
            case 9:
                final_x = l9.x_val;
                final_y = l9.y_val;
                b.x = l9.x_val;
                b.y = l9.y_val;
                c.x = l9.x_val;
                c.y = l9.y_val;
                d.x = l9.x_val;
                d.y = l9.y_val;
                break;
            case 2:
                final_x = l2.x_val;
                final_y = l2.y_val;
                b.x = l2.x_val;
                b.y = l2.y_val;
                c.x = l2.x_val;
                c.y = l2.y_val;
                d.x = l2.x_val;
                d.y = l2.y_val;
                break;
            case 3:
                final_x = l3.x_val;
                final_y = l3.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l3.x_val;
                c.y = l3.y_val;
                d.x = l3.x_val;
                d.y = l3.y_val;
                break;
            case 4:
                final_x = l4.x_val;
                final_y = l4.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l4.x_val;
                c.y = l4.y_val;
                d.x = l4.x_val;
                d.y = l4.y_val;
                break;
            case 5:
                final_x = l5.x_val;
                final_y = l5.y_val;
                b.x = l5.x_val;
                b.y = l5.y_val;
                c.x = l5.x_val;
                c.y = l5.y_val;
                d.x = l5.x_val;
                d.y = l5.y_val;
                break;
            case 6:
                final_x = l6.x_val;
                final_y = l6.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l6.x_val;
                c.y = l6.y_val;
                d.x = l6.x_val;
                d.y = l6.y_val;
                break;
            case 7:
                final_x = l7.x_val;
                final_y = l7.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l7.x_val;
                c.y = l7.y_val;
                d.x = l7.x_val;
                d.y = l7.y_val;
                break;
            case 8:
                final_x = l8.x_val;
                final_y = l8.y_val;
                b.x = l3.x_val;
                b.y = l3.y_val;
                c.x = l8.x_val;
                c.y = l8.y_val;
                d.x = l8.x_val;
                d.y = l8.y_val;
                break;
            case 1:
                final_x = l1.x_val;
                final_y = l1.y_val;
                b.x = l1.x_val;
                b.y = l1.y_val;
                c.x = l1.x_val;
                c.y = l1.y_val;
                d.x = l1.x_val;
                d.y = l1.y_val;
                break;
            }
            break;
        default:
            break;
        }
        srand(time(NULL));
        float diff;
        diff = rand()%10;
        rand_num = diff / 50;
        cout << rand_num;
        
        p1.x = b.x;
        p2.x = c.x;
        p3.x = d.x;

        if (initial_x < final_x)
        {
            p.x = a.x + rand_num;
            
            x_position = initial_x + rand_num;
        }
        else if (initial_x > final_x)
        {
            p.x = a.x - rand_num;
            x_position = initial_x - rand_num;
            
        }

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
        glutInitWindowPosition(500, 100);
        glutInitWindowSize(1000, 800);
        glutCreateWindow("Vehicle ");
        glutDisplayFunc(render);
        glutTimerFunc(0, timer, 0);
        glutKeyboardFunc(keyboard);
        glutMouseFunc(mouse);
        init();
        glutMainLoop();
        break;
    case 2:
        cout << "This Is Under Development";
        break;
    }
}



void timer(int)
{
    int state = 0;
    glutPostRedisplay();
    if (a.x < b.x)
    {
        if (p.x >= b.x)
        {
            state = 1;
            p.x = b.x;
        }
        p.x += 0.001;
    }
    else if (a.x > b.x)
    {
        if (p.x <= b.x)
        {
            state = 1;
            p.x = b.x;
        }
        p.x -= 0.001;
    }

    if (b.x < c.x && state == 1) {
        if (p1.x >= c.x)
        {
            state = 2;
            p1.x = c.x;
        }
        p1.x += 0.001;
    }
    else if (b.x > c.x&& state == 1) {
        if (p1.x <= c.x)
        {
            state = 2;
            p1.x = c.x;
        }
        p1.x -= 0.001;
    }

    if (c.x < d.x and state == 2)
    {
        if (p2.x >= d.x)
        {
            p2.x = d.x;
        }

        p2.x += 0.001;
    }
    else if (c.x > d.x and state == 2)
    {
        if (p2.x <= d.x)
        {
            p2.x = d.x;
        }

        p2.x -= 0.001;
    }
    
    glutTimerFunc(1000 /5, timer, 0);
}

void render(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glPointSize(8.0);


    
    glBegin(GL_POINTS); //for two static points
    glColor3f(1, 0, 0);

    glVertex2f(l1.x_val, l1.y_val);

    glVertex2f(l2.x_val, l2.y_val);

    glVertex2f(l3.x_val, l3.y_val);

    glVertex2f(l4.x_val, l4.y_val);

    glVertex2f(l5.x_val, l5.y_val);

    glVertex2f(l6.x_val, l6.y_val);

    glVertex2f(l7.x_val, l7.y_val);

    glVertex2f(l8.x_val, l8.y_val);

    glVertex2f(l9.x_val, l9.y_val);
    glEnd();


     
    glPointSize(15.0);
    p.y = (b.y - a.y) * (p.x - a.x) / (b.x - a.x) + a.y;
    glBegin(GL_POINTS);
    glColor3f(0, 1, 0);
    glVertex2f(p.x, p.y);
    glEnd();

    glPointSize(15.0);
    p1.y = (c.y - b.y) * (p1.x - b.x) / (c.x - b.x) + b.y;
    glBegin(GL_POINTS);
    glColor3f(0, 1, 0);
    glVertex2f(p1.x, p1.y);
    glEnd();

    glPointSize(15.0);
    p2.y = (d.y - c.y) * (p2.x - c.x) / (d.x - c.x) + c.y;
    glBegin(GL_POINTS);
    glVertex2f(p2.x, p2.y);
    glEnd();


    glLineWidth(1.0);
    glColor3f(1, 0, 0);  //lines to show possible path
    glBegin(GL_LINES);                      //1-9
    glVertex2f(l1.x_val,l1.y_val);
    glVertex2f(l9.x_val,l9.y_val);
    glEnd();

    glBegin(GL_LINES);                      //1-8
    glVertex2f(l1.x_val, l1.y_val);
    glVertex2f(l8.x_val, l8.y_val);
    glEnd();

    glBegin(GL_LINES);                      // 1-3
    glVertex2f(l1.x_val, l1.y_val);
    glVertex2f(l3.x_val, l3.y_val);
    glEnd();

    
    glBegin(GL_LINES);                  //9-3
    glVertex2f(l3.x_val, l3.y_val);
    glVertex2f(l9.x_val, l9.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l2.x_val, l2.y_val);         //9-2
    glVertex2f(l9.x_val, l9.y_val);
    glEnd();


    glBegin(GL_LINES);
    glVertex2f(l2.x_val, l2.y_val);         //4-2
    glVertex2f(l4.x_val, l4.y_val);
    glEnd();

    

    glBegin(GL_LINES);
    glVertex2f(l3.x_val, l3.y_val);         //3-4
    glVertex2f(l4.x_val, l4.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l4.x_val, l4.y_val);         //4-5
    glVertex2f(l5.x_val, l5.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l3.x_val, l3.y_val);         //3-5
    glVertex2f(l5.x_val, l5.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l5.x_val, l5.y_val);         //9-5
    glVertex2f(l9.x_val, l9.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l5.x_val, l5.y_val);         //5-2
    glVertex2f(l2.x_val, l2.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l7.x_val, l7.y_val);         //7-3
    glVertex2f(l3.x_val, l3.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l7.x_val, l7.y_val);         //7-6
    glVertex2f(l6.x_val, l6.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l3.x_val, l3.y_val);         //3-6
    glVertex2f(l6.x_val, l6.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l8.x_val, l8.y_val);         //8-6
    glVertex2f(l6.x_val, l6.y_val);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(l3.x_val, l3.y_val);         //3-8
    glVertex2f(l8.x_val, l8.y_val);

    glBegin(GL_LINES);
    glVertex2f(l7.x_val, l7.y_val);         //7-4
    glVertex2f(l4.x_val, l4.y_val);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0, 0, 1);
    glVertex2f(a.x, a.y);
    glVertex2f(b.x, b.y);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0, 0, 1);
    glVertex2f(c.x, c.y);
    glVertex2f(b.x, b.y);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0, 0, 1);
    glVertex2f(c.x, c.y);
    glVertex2f(d.x, d.y);
    glEnd();

    glPointSize(3.0);
    glBegin(GL_POINTS);
    glColor3f(0, 0, 1);
    glVertex2f(a.x, a.y);
    glVertex2f(b.x, b.y);
    glVertex2f(c.x, c.y);
    glVertex2f(d.x, d.y);
    glEnd();

    glFlush();

    glutSwapBuffers();

}
