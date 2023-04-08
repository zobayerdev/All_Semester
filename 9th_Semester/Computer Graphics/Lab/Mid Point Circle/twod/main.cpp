#include <GL/glut.h>
GLfloat xTranslate = 0.0f;
GLfloat yTranslate = 0.0f;
GLfloat angle = 0.0f;
GLfloat scaleFactor = 1.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(xTranslate, yTranslate, 0.0f);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glScalef(scaleFactor, scaleFactor, 1.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
    glEnd();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'l':
            angle += 5.0f;
            break;
        case 'r':
            angle -= 5.0f;
            break;
        case '=':
            scaleFactor += 0.1f;
            break;
        case '-':
            scaleFactor -= 0.1f;
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

void special(int key, int x, int y)
{
    switch (key)
    {
        case GLUT_KEY_UP:
            yTranslate += 0.1f;
            break;
        case GLUT_KEY_DOWN:
            yTranslate -= 0.1f;
            break;
        case GLUT_KEY_LEFT:
            xTranslate -= 0.1f;
            break;
        case GLUT_KEY_RIGHT:
            xTranslate += 0.1f;
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(640, 480);
    glutCreateWindow("2D Transformations");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(special);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
