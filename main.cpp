#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0, 1.0, 0);
        glBegin(GL_LINE_STRIP);
        glVertex2f(-0.97f, 0.0f);
        glVertex2f(-0.97f, 0.4f);
        glVertex2f(-0.87f, 0.2f);
        glVertex2f(-0.77f, 0.4f);
        glVertex2f(-0.77f, 0.0f);
        glEnd();
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_LINE_STRIP);
        glVertex2f(-0.75f, 0.0f);
        glVertex2f(-0.70f, 0.4f);
        glVertex2f(-0.65f, 0.0f);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(-0.725f, 0.2f);
        glVertex2f(-0.675f, 0.2f);
        glEnd();
        glColor3f(1.0, 0, 0);
        glBegin(GL_LINES);
        glVertex2f(-0.6f, 0.0f);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(-0.65f, 0.4f);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(-0.55f, 0.4f);
        glVertex2f(-0.6f, 0.2f);
        glEnd();
        glColor3f(0, 0, 1.0);
        glBegin(GL_LINE_STRIP);
        glVertex2f(-0.55f, 0.0f);
        glVertex2f(-0.50f, 0.4f);
        glVertex2f(-0.45f, 0.0f);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(-0.525f, 0.2f);
        glVertex2f(-0.475f, 0.2f);
        glEnd();
        glColor3f(0, 1.0, 0);
        glBegin(GL_LINE_STRIP);
        glVertex2f(-0.40f, 0.0f);
        glVertex2f(-0.40f, 0.4f);
        glVertex2f(-0.30f, 0.0f);
        glVertex2f(-0.30f, 0.4f);
        glEnd();
        glColor3f(0, 1.0, 1.0);
        glBegin(GL_LINES);
        glVertex2f(-0.25f, 0.0f);
        glVertex2f(-0.25f, 0.4f);
        glEnd();
        glBegin(GL_LINE_STRIP);
        glVertex2f(-0.15f, 0.0f);
        glVertex2f(-0.25f, 0.2f);
        glVertex2f(-0.15f, 0.4f);
        glEnd();
        
        


        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}