#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <shader.cpp>

int main()
{    
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(600, 600, "OpenGL window", NULL, NULL);
    glfwMakeContextCurrent(window);

    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    shader();

float vertices[] = {
    
    //A
    
    -0.90f,  0.05f, 0.0f,  // top right
    -0.90f, -0.05f, 0.0f,  // bottom right
    -1.00f,  0.05f, 0.0f,  // top left
    -0.90f, -0.05f, 0.0f,  // bottom right
    -1.00f, -0.05f, 0.0f,  // bottom left
    -1.00f,  0.05f, 0.0f,   // top left

    -0.90f,  0.15f, 0.0f,  // top right
    -0.90f,  0.05f, 0.0f,  // bottom right
    -1.00f,  0.15f, 0.0f,  // top left
    -0.90f,  0.05f, 0.0f,  // bottom right
    -1.00f,  0.05f, 0.0f,  // bottom left
    -1.00f,  0.15f, 0.0f,   // top left

    -0.90f,  0.25f, 0.0f,  // top right
    -0.90f,  0.15f, 0.0f,  // bottom right
    -1.00f,  0.25f, 0.0f,  // top left
    -0.90f,  0.15f, 0.0f,  // bottom right
    -1.00f,  0.15f, 0.0f,  // bottom left
    -1.00f,  0.25f, 0.0f,   // top left

    -0.90f,  0.35f, 0.0f,  // top right
    -0.90f,  0.25f, 0.0f,  // bottom right
    -1.00f,  0.35f, 0.0f,  // top left
    -0.90f,  0.25f, 0.0f,  // bottom right
    -1.00f,  0.25f, 0.0f,  // bottom left
    -1.00f,  0.35f, 0.0f,   // top left

    -0.90f,  0.45f, 0.0f,  // top right
    -0.90f,  0.35f, 0.0f,  // bottom right
    -1.00f,  0.45f, 0.0f,  // top left
    -0.90f,  0.35f, 0.0f,  // bottom right
    -1.00f,  0.35f, 0.0f,  // bottom left
    -1.00f,  0.45f, 0.0f,   // top left

    -0.80f,  0.45f, 0.0f,  // top right
    -0.80f,  0.35f, 0.0f,  // bottom right
    -0.90f,  0.45f, 0.0f,  // top left
    -0.80f,  0.35f, 0.0f,  // bottom right
    -0.90f,  0.35f, 0.0f,  // bottom left
    -0.90f,  0.45f, 0.0f,   // top left

    -0.80f,  0.25f, 0.0f,  // top right
    -0.80f,  0.15f, 0.0f,  // bottom right
    -0.90f,  0.25f, 0.0f,  // top left
    -0.80f,  0.15f, 0.0f,  // bottom right
    -0.90f,  0.15f, 0.0f,  // bottom left
    -0.90f,  0.25f, 0.0f,   // top left

    -0.70f,  0.05f, 0.0f,  // top right
    -0.70f, -0.05f, 0.0f,  // bottom right
    -0.80f,  0.05f, 0.0f,  // top left
    -0.70f, -0.05f, 0.0f,  // bottom right
    -0.80f, -0.05f, 0.0f,  // bottom left
    -0.80f,  0.05f, 0.0f,   // top left

    -0.70f,  0.15f, 0.0f,  // top right
    -0.70f,  0.05f, 0.0f,  // bottom right
    -0.80f,  0.15f, 0.0f,  // top left
    -0.70f,  0.05f, 0.0f,  // bottom right
    -0.80f,  0.05f, 0.0f,  // bottom left
    -0.80f,  0.15f, 0.0f,   // top left

    -0.70f,  0.25f, 0.0f,  // top right
    -0.70f,  0.15f, 0.0f,  // bottom right
    -0.80f,  0.25f, 0.0f,  // top left
    -0.70f,  0.15f, 0.0f,  // bottom right
    -0.80f,  0.15f, 0.0f,  // bottom left
    -0.80f,  0.25f, 0.0f,   // top left

    -0.70f,  0.35f, 0.0f,  // top right
    -0.70f,  0.25f, 0.0f,  // bottom right
    -0.80f,  0.35f, 0.0f,  // top left
    -0.70f,  0.25f, 0.0f,  // bottom right
    -0.80f,  0.25f, 0.0f,  // bottom left
    -0.80f,  0.35f, 0.0f,   // top left

    -0.70f,  0.45f, 0.0f,  // top right
    -0.70f,  0.35f, 0.0f,  // bottom right
    -0.80f,  0.45f, 0.0f,  // top left
    -0.70f,  0.35f, 0.0f,  // bottom right
    -0.80f,  0.35f, 0.0f,  // bottom left
    -0.80f,  0.45f, 0.0f,   // top left

    //B

    -0.50f,  0.05f, 0.0f,  // top right
    -0.50f, -0.05f, 0.0f,  // bottom right
    -0.60f,  0.05f, 0.0f,  // top left
    -0.50f, -0.05f, 0.0f,  // bottom right
    -0.60f, -0.05f, 0.0f,  // bottom left
    -0.60f,  0.05f, 0.0f,   // top left

    -0.50f,  0.15f, 0.0f,  // top right
    -0.50f,  0.05f, 0.0f,  // bottom right
    -0.60f,  0.15f, 0.0f,  // top left
    -0.50f,  0.05f, 0.0f,  // bottom right
    -0.60f,  0.05f, 0.0f,  // bottom left
    -0.60f,  0.15f, 0.0f,   // top left

    -0.50f,  0.25f, 0.0f,  // top right
    -0.50f,  0.15f, 0.0f,  // bottom right
    -0.60f,  0.25f, 0.0f,  // top left
    -0.50f,  0.15f, 0.0f,  // bottom right
    -0.60f,  0.15f, 0.0f,  // bottom left
    -0.60f,  0.25f, 0.0f,   // top left

    -0.50f,  0.35f, 0.0f,  // top right
    -0.50f,  0.25f, 0.0f,  // bottom right
    -0.60f,  0.35f, 0.0f,  // top left
    -0.50f,  0.25f, 0.0f,  // bottom right
    -0.60f,  0.25f, 0.0f,  // bottom left
    -0.60f,  0.35f, 0.0f,   // top left

    -0.50f,  0.45f, 0.0f,  // top right
    -0.50f,  0.35f, 0.0f,  // bottom right
    -0.60f,  0.45f, 0.0f,  // top left
    -0.50f,  0.35f, 0.0f,  // bottom right
    -0.60f,  0.35f, 0.0f,  // bottom left
    -0.60f,  0.45f, 0.0f,   // top left

    -0.40f,  0.45f, 0.0f,  // top right
    -0.40f,  0.35f, 0.0f,  // bottom right
    -0.50f,  0.45f, 0.0f,  // top left
    -0.40f,  0.35f, 0.0f,  // bottom right
    -0.50f,  0.35f, 0.0f,  // bottom left
    -0.50f,  0.45f, 0.0f,   // top left

    -0.40f,  0.25f, 0.0f,  // top right
    -0.40f,  0.15f, 0.0f,  // bottom right
    -0.50f,  0.25f, 0.0f,  // top left
    -0.40f,  0.15f, 0.0f,  // bottom right
    -0.50f,  0.15f, 0.0f,  // bottom left
    -0.50f,  0.25f, 0.0f,   // top left

    -0.40f,  0.05f, 0.0f,  // top right
    -0.40f, -0.05f, 0.0f,  // bottom right
    -0.50f,  0.05f, 0.0f,  // top left
    -0.40f, -0.05f, 0.0f,  // bottom right
    -0.50f, -0.05f, 0.0f,  // bottom left
    -0.50f,  0.05f, 0.0f,   // top left

    -0.30f,  0.05f, 0.0f,  // top right
    -0.30f, -0.05f, 0.0f,  // bottom right
    -0.40f,  0.05f, 0.0f,  // top left
    -0.30f, -0.05f, 0.0f,  // bottom right
    -0.40f, -0.05f, 0.0f,  // bottom left
    -0.40f,  0.05f, 0.0f,   // top left

    -0.30f,  0.15f, 0.0f,  // top right
    -0.30f,  0.05f, 0.0f,  // bottom right
    -0.40f,  0.15f, 0.0f,  // top left
    -0.30f,  0.05f, 0.0f,  // bottom right
    -0.40f,  0.05f, 0.0f,  // bottom left
    -0.40f,  0.15f, 0.0f,   // top left

    -0.30f,  0.25f, 0.0f,  // top right
    -0.30f,  0.15f, 0.0f,  // bottom right
    -0.40f,  0.25f, 0.0f,  // top left
    -0.30f,  0.15f, 0.0f,  // bottom right
    -0.40f,  0.15f, 0.0f,  // bottom left
    -0.40f,  0.25f, 0.0f,   // top left

    -0.30f,  0.35f, 0.0f,  // top right
    -0.30f,  0.25f, 0.0f,  // bottom right
    -0.40f,  0.35f, 0.0f,  // top left
    -0.30f,  0.25f, 0.0f,  // bottom right
    -0.40f,  0.25f, 0.0f,  // bottom left
    -0.40f,  0.35f, 0.0f,   // top left

    -0.30f,  0.45f, 0.0f,  // top right
    -0.30f,  0.35f, 0.0f,  // bottom right
    -0.40f,  0.45f, 0.0f,  // top left
    -0.30f,  0.35f, 0.0f,  // bottom right
    -0.40f,  0.35f, 0.0f,  // bottom left
    -0.40f,  0.45f, 0.0f,   // top left

    //H
    -0.10f,  0.05f, 0.0f,  // top right
    -0.10f, -0.05f, 0.0f,  // bottom right
    -0.20f,  0.05f, 0.0f,  // top left          
    -0.10f, -0.05f, 0.0f,  // bottom right
    -0.20f, -0.05f, 0.0f,  // bottom left
    -0.20f,  0.05f, 0.0f,   // top left

    -0.10f,  0.15f, 0.0f,  // top right
    -0.10f,  0.05f, 0.0f,  // bottom right
    -0.20f,  0.15f, 0.0f,  // top left          
    -0.10f,  0.05f, 0.0f,  // bottom right
    -0.20f,  0.05f, 0.0f,  // bottom left
    -0.20f,  0.15f, 0.0f,   // top left

    -0.10f,  0.25f, 0.0f,  // top right
    -0.10f,  0.15f, 0.0f,  // bottom right
    -0.20f,  0.25f, 0.0f,  // top left          
    -0.10f,  0.15f, 0.0f,  // bottom right
    -0.20f,  0.15f, 0.0f,  // bottom left
    -0.20f,  0.25f, 0.0f,   // top left

    -0.10f,  0.35f, 0.0f,  // top right
    -0.10f,  0.25f, 0.0f,  // bottom right
    -0.20f,  0.35f, 0.0f,  // top left          
    -0.10f,  0.25f, 0.0f,  // bottom right
    -0.20f,  0.25f, 0.0f,  // bottom left
    -0.20f,  0.35f, 0.0f,   // top left

    -0.10f,  0.45f, 0.0f,  // top right
    -0.10f,  0.35f, 0.0f,  // bottom right
    -0.20f,  0.45f, 0.0f,  // top left           
    -0.10f,  0.35f, 0.0f,  // bottom right
    -0.20f,  0.35f, 0.0f,  // bottom left
    -0.20f,  0.45f, 0.0f,   // top left

     0.00f,  0.25f, 0.0f,  // top right
     0.00f,  0.15f, 0.0f,  // bottom right
    -0.10f,  0.25f, 0.0f,  // top left
     0.00f,  0.15f, 0.0f,  // bottom right
    -0.10f,  0.15f, 0.0f,  // bottom left
    -0.10f,  0.25f, 0.0f,   // top left

     0.10f,  0.05f, 0.0f,  // top right
     0.10f, -0.05f, 0.0f,  // bottom right
     0.00f,  0.05f, 0.0f,  // top left
     0.10f, -0.05f, 0.0f,  // bottom right
     0.00f, -0.05f, 0.0f,  // bottom left
     0.00f,  0.05f, 0.0f,   // top left

     0.10f,  0.15f, 0.0f,  // top right
     0.10f,  0.05f, 0.0f,  // bottom right
     0.00f,  0.15f, 0.0f,  // top left
     0.10f,  0.05f, 0.0f,  // bottom right
     0.00f,  0.05f, 0.0f,  // bottom left
     0.00f,  0.15f, 0.0f,   // top left

     0.10f,  0.25f, 0.0f,  // top right
     0.10f,  0.15f, 0.0f,  // bottom right
     0.00f,  0.25f, 0.0f,  // top left
     0.10f,  0.15f, 0.0f,  // bottom right
     0.00f,  0.15f, 0.0f,  // bottom left
     0.00f,  0.25f, 0.0f,   // top left

     0.10f,  0.35f, 0.0f,  // top right
     0.10f,  0.25f, 0.0f,  // bottom right
     0.00f,  0.35f, 0.0f,  // top left
     0.10f,  0.25f, 0.0f,  // bottom right
     0.00f,  0.25f, 0.0f,  // bottom left
     0.00f,  0.35f, 0.0f,   // top left

     0.10f,  0.45f, 0.0f,  // top right
     0.10f,  0.35f, 0.0f,  // bottom right
     0.00f,  0.45f, 0.0f,  // top left
     0.10f,  0.35f, 0.0f,  // bottom right
     0.00f,  0.35f, 0.0f,  // bottom left
     0.00f,  0.45f, 0.0f,   // top left

    // I
     0.30f,  0.05f, 0.0f,  // top right
     0.30f, -0.05f, 0.0f,  // bottom right
     0.20f,  0.05f, 0.0f,  // top left
     0.30f, -0.05f, 0.0f,  // bottom right
     0.20f, -0.05f, 0.0f,  // bottom left
     0.20f,  0.05f, 0.0f,   // top left

     0.30f,  0.15f, 0.0f,  // top right
     0.30f,  0.05f, 0.0f,  // bottom right
     0.20f,  0.15f, 0.0f,  // top left
     0.30f,  0.05f, 0.0f,  // bottom right
     0.20f,  0.05f, 0.0f,  // bottom left
     0.20f,  0.15f, 0.0f,   // top left

     0.30f,  0.25f, 0.0f,  // top right
     0.30f,  0.15f, 0.0f,  // bottom right
     0.20f,  0.25f, 0.0f,  // top left
     0.30f,  0.15f, 0.0f,  // bottom right
     0.20f,  0.15f, 0.0f,  // bottom left
     0.20f,  0.25f, 0.0f,   // top left

     0.30f,  0.35f, 0.0f,  // top right
     0.30f,  0.25f, 0.0f,  // bottom right
     0.20f,  0.35f, 0.0f,  // top left
     0.30f,  0.25f, 0.0f,  // bottom right
     0.20f,  0.25f, 0.0f,  // bottom left
     0.20f,  0.35f, 0.0f,   // top left

     0.30f,  0.45f, 0.0f,  // top right
     0.30f,  0.35f, 0.0f,  // bottom right
     0.20f,  0.45f, 0.0f,  // top left
     0.30f,  0.35f, 0.0f,  // bottom right
     0.20f,  0.35f, 0.0f,  // bottom left
     0.20f,  0.45f, 0.0f,   // top left

    }; 

    unsigned int VBO, VAO;
   
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);


 while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS)
    {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glDrawArrays(GL_TRIANGLES, 0, 262);
 
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}
