#include <stdio.h>
#include <GL/glut.h>

// Declare global variables for translation, rotation, and scaling
GLfloat translateX = 0.0, translateY = 0.0;
GLfloat rotateAngle = 0.0;
GLfloat scaleX = 1.0, scaleY = 1.0;

// Draw a square with vertices at (-0.5,-0.5), (0.5,-0.5), (0.5,0.5), (-0.5,0.5)
void drawSquare()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glEnd();
}

// Display callback function
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    // Apply transformations
    glLoadIdentity();
    glTranslatef(translateX, translateY, 0.0);
    glRotatef(rotateAngle, 0.0, 0.0, 1.0);
    glScalef(scaleX, scaleY, 1.0);

    // Draw the square
    glColor3f(0.0, 0.0, 0.0);
    drawSquare();

    glutSwapBuffers();
}

// Keyboard callback function to handle translation, rotation, and scaling
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'w': // Translate up
            translateY += 0.1;
            break;
        case 's': // Translate down
            translateY -= 0.1;
            break;
        case 'a': // Translate left
            translateX -= 0.1;
            break;
        case 'd': // Translate right
            translateX += 0.1;
            break;
        case 'q': // Rotate counterclockwise
            rotateAngle += 10.0;
            break;
        case 'e': // Rotate clockwise
            rotateAngle -= 10.0;
            break;
        case '+': // Scale up
            scaleX += 0.1;
            scaleY += 0.1;
            break;
        case '-': // Scale down
            scaleX -= 0.1;
            scaleY -= 0.1;
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

// Main function
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("2D Transformation");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
