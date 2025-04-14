#include <GLFW/glfw3.h>
#include <stdio.h>

int main(void) {
    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        return -1;
    }
    
    // Create a 640x480 window
    GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL Line", NULL, NULL);
    if (!window) {
        fprintf(stderr, "Failed to create GLFW window\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    //to use window coordinates
    glViewport(0, 0, 640, 480);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 640, 480, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Set clear color to white
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    
    // Set the line width
    glLineWidth(2.0f);
    
    // Main loop
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        
        // Draw a line 
        glColor3f(0.0f, 0.0f, 0.0f);  // Black color
        glBegin(GL_LINES);
            glVertex2i(100, 100);
            glVertex2i(200, 200);
        glEnd();
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    glfwTerminate();
    return 0;
}