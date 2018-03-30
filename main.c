#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

int r, x, y, p;

void display(void) {
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255, 0, 0);

    /* draw white polygon (rectangle) with corners at
     * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
     */



   void sun(){

    int i=0;

    while(x!=y){
        if (p < 0) {

            x = x + 1;
            y = y;
            p=p+2*x+1;
            i++;
            printf("p%d: %d\n",i,p);
            printf("x%d: %d, y%d: %d\n",i,x,i,y);
            printf("\n");

        } else {


            x = x + 1;
            y = y - 1;
            p=p+2*x-2*y+1;
            i++;


            printf("p%d: %d\n",i,p);
            printf("x%d: %d, y%d: %d\n",i,x,i,y);
            printf("\n");



        }

        glColor3ub(255, 0, 0);

        glBegin(GL_POLYGON);


        glVertex2d(x, y);



        glVertex2d(y, x);



        glVertex2d(y, -x);



        glVertex2d(x, -y);



        glVertex2d(-x, -y);



        glVertex2d(-y, -x);



        glVertex2d(-y, x);



        glVertex2d(-x, y);


        glEnd();


    }

}

sun();


    /* don't wait!
     * start processing buffered OpenGL routines
     */
glFlush();
}

void init(void) {
    /* select clearing (background) color */
    glClearColor(0, 0, 0.0, 0.0);
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


    r=55;
    x = 0;
    y = r;

    p=1-r;
    printf("p: %d\n", p);






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
