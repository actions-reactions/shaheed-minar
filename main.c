#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

void display(void) {
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255, 0, 0);

    /* draw white polygon (rectangle) with corners at
     * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
     */


    void canvas() {


        glColor3ub(30, 14, 25);

        glBegin(GL_POLYGON);


        glVertex2d(-600, -600);

        glVertex2d(600, -600);

        glVertex2d(600, -200);

        glVertex2d(-600, -200);



        glEnd();



        glColor3ub(0, 125, 0);

        glBegin(GL_POLYGON);


        glVertex2d(-600, -200);

        glVertex2d(600, -200);

        glVertex2d(600, 500);

        glVertex2d(-600, 500);



        glEnd();



        glColor3ub(50, 150, 220);

        glBegin(GL_POLYGON);


        glVertex2d(-600, 500);

        glVertex2d(600, 500);

        glVertex2d(600, 600);

        glVertex2d(-600, 600);



        glEnd();




    }

    void sun(int h) {

        int r = 175, x = 0, y, p;

        y = r;

        p = 1 - r;
        printf("p: %d\n", p);

        int i = 0;

        while (x < y) {
            if (p < 0) {

                x = x + 1;
                y = y;
                p = p + 2 * x + 1;
                i++;
                printf("p%d: %d\n", i, p);
                printf("x%d: %d, y%d: %d\n", i, x, i, y);
                printf("\n");

            } else {


                x = x + 1;
                y = y - 1;
                p = p + 2 * x - 2 * y + 1;
                i++;


                printf("p%d: %d\n", i, p);
                printf("x%d: %d, y%d: %d\n", i, x, i, y);
                printf("\n");



            }

            glColor3ub(255, 0, 0);

            glBegin(GL_POLYGON);


            glVertex2d(x, y + h);



            glVertex2d(y, x + h);



            glVertex2d(y, -x + h);



            glVertex2d(x, -y + h);



            glVertex2d(-x, -y + h);



            glVertex2d(-y, -x + h);



            glVertex2d(-y, x + h);



            glVertex2d(-x, y + h);


            glEnd();


        }

    }

    void base() {



        glColor3ub(128, 32, 64);

        glBegin(GL_POLYGON);


        glVertex2d(-540, -575);

        glVertex2d(540, -575);

        glVertex2d(540, -550);

        glVertex2d(-540, -550);



        glEnd();



        glColor3ub(128, 64, 32);

        glBegin(GL_POLYGON);


        glVertex2d(-535, -550);

        glVertex2d(535, -550);

        glVertex2d(535, -525);

        glVertex2d(-535, -525);



        glEnd();


        glColor3ub(128, 32, 64);

        glBegin(GL_POLYGON);


        glVertex2d(-530, -525);

        glVertex2d(530, -525);

        glVertex2d(530, -500);

        glVertex2d(-530, -500);



        glEnd();


        glColor3ub(128, 64, 32);

        glBegin(GL_POLYGON);


        glVertex2d(-525, -500);

        glVertex2d(525, -500);

        glVertex2d(525, -475);

        glVertex2d(-525, -475);



        glEnd();



        glColor3ub(128, 32, 64);

        glBegin(GL_POLYGON);


        glVertex2d(-520, -475);

        glVertex2d(520, -475);

        glVertex2d(520, -450);

        glVertex2d(-520, -450);



        glEnd();


        glColor3ub(255, 128, 255);

        glBegin(GL_POLYGON);


        glVertex2d(-515, -450);

        glVertex2d(515, -450);

        glVertex2d(515, -425);

        glVertex2d(-515, -425);



        glEnd();



        glColor3ub(255, 16, 64);

        glBegin(GL_POLYGON);


        glVertex2d(-515, -425);

        glVertex2d(515, -425);

        glVertex2d(485, -325);

        glVertex2d(-485, -325);



        glEnd();

    }

    void sidePiller(int x, int y, int h) {


        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-465 + x, -325 + y);

        glVertex2d(-435 + x, -325 + y);

        glVertex2d(-435 + x, 25 + y + h);

        glVertex2d(-465 + x, 25 + y + h);



        glEnd();

        glColor3ub(220, 225, 250);
        glBegin(GL_POLYGON);


        glVertex2d(-385 + x, -325 + y);

        glVertex2d(-355 + x, -325 + y);

        glVertex2d(-355 + x, 25 + y + h);

        glVertex2d(-385 + x, 25 + y + h);



        glEnd();



        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-465 + x, 25 + y + h);

        glVertex2d(-355 + x, 25 + y + h);

        glVertex2d(-355 + x, 0 + y + h);

        glVertex2d(-465 + x, 0 + y + h);



        glEnd();

    }

    void middlePiller(int x, int y, int h) {


        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-145 + x, -325 + y);

        glVertex2d(-115 + x, -325 + y);

        glVertex2d(-115 + x, 200 + y + h);

        glVertex2d(-145 + x, 200 + y + h);

        glEnd();


        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-145 + x, 200 + y);

        glVertex2d(-115 + x, 200 + y);

        glVertex2d(-145 + x, 350 + y + h);

        glVertex2d(-175 + x, 350 + y + h);

        glEnd();


        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-15 + x, -325 + y);

        glVertex2d(15 + x, -325 + y);

        glVertex2d(15 + x, 200 + y + h);

        glVertex2d(-15 + x, 200 + y + h);



        glEnd();



        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-15 + x, 200 + y);

        glVertex2d(15 + x, 200 + y);

        glVertex2d(0 + x, 350 + y + h);

        glVertex2d(-30 + x, 350 + y + h);



        glEnd();



        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(115 + x, -325 + y);

        glVertex2d(145 + x, -325 + y);

        glVertex2d(145 + x, 200 + y + h);

        glVertex2d(115 + x, 200 + y + h);



        glEnd();


        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(115 + x, 200 + y);

        glVertex2d(145 + x, 200 + y);

        glVertex2d(125 + x, 350 + y + h);

        glVertex2d(95 + x, 350 + y + h);



        glEnd();



        glColor3ub(220, 225, 250);

        glBegin(GL_POLYGON);


        glVertex2d(-175 + x, 350 + y);

        glVertex2d(125 + x, 350 + y);

        glVertex2d(120 + x, 380 + y + h);

        glVertex2d(-180 + x, 380 + y + h);

        glEnd();





    }




    canvas();

    base();


    sun(150);

    sidePiller(0, 0, 0);

    sidePiller(150, 0, 100);



    middlePiller(0, 0, 0);


    sidePiller(665, 0, 100);

    sidePiller(815, 0, 0);






    /* don't wait!
     * start processing buffered OpenGL routines
     */
    glFlush();
}

void init(void) {
    /* select clearing (background) color */
    glClearColor(0, 0, 0, 0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600, 600, -600, 600);
}

/*
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA). Open window with "hello"
 * in its title bar. Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */
int main(int argc, char** argv) {


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Line");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
