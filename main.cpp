#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
bool col=true;
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 1.0);
glPointSize(4.0);
glBegin(GL_QUADS);
for(int x=0; x<=800; x+=100)
{
    for(int y=0; y<=800; y+=100)
    {
        glVertex2i(x, y);
        glVertex2i(x+100, y);
        glVertex2i(x+100, y+100);
        glVertex2i(x, y+100);


        if(col)
        {
           glColor3f (0.0, 0.0, 0.0);
           col=false;
           !col;
        }
        else
            {
               glColor3f (1.0, 1.0, 1.0);
               col=true;
               !col;
            }

    }

}


glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}
main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 800);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Chess Board");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}



