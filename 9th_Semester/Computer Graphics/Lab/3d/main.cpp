#include <stdio.h>
#include <GL/glut.h>
float translateX = 0.0f;
float translateY = 0.0f;
float translateZ = 0.0f;
float rotateX = 0.0f;
float rotateY = 0.0f;
float rotateZ = 0.0f;
float scaleX = 1.0f;
float scaleY = 1.0f;
float scaleZ = 1.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(translateX, translateY, translateZ);
    glRotatef(rotateX, 1.0f, 0.0f, 0.0f);
    glRotatef(rotateY, 0.0f, 1.0f, 0.0f);
    glRotatef(rotateZ, 0.0f, 0.0f, 1.0f);
    glScalef(scaleX, scaleY, scaleZ);
    glColor3f(1.0f, 1.0f, 1.0f);
    glutWireCube(1.0f);
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'w':
            translateZ -= 0.1f;
            break;
        case 's':
            translateZ += 0.1f;
            break;
        case 'a':
            translateX -= 0.1f;
            break;
        case 'd':
            translateX += 0.1f;
            break;
        case 'q':
            translateY -= 0.1f;
            break;
        case 'e':
            translateY += 0.1f;
            break;
        case 'i':
            rotateX += 5.0f;
            break;
        case 'k':
            rotateX -= 5.0f;
            break;
        case 'j':
            rotateY += 5.0f;
            break;
        case 'l':
            rotateY -= 5.0f;
            break;
        case 'u':
            rotateZ += 5.0f;
            break;
        case 'o':
            rotateZ -= 5.0f;
            break;
        case 'z':
            scaleX += 0.1f;
            break;
        case 'x':
            scaleX -= 0.1f;
            break;
        case 'c':
            scaleY += 0.1f;
            break;
        case 'v':
            scaleY -= 0.1f;
            break;
        case 'b':
            scaleZ += 0.1f;
            break;
        case 'n':
            scaleZ -= 0.1f;
            break;
        case 27:
            exit(0);
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    glutCreateWindow("3D Transformations");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    return 0;
}
