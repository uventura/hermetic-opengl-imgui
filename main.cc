#include <glad/gl.h>
#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Init GLFW */
    if(!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "OpenGL Studies", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    // Loading Context
    glfwMakeContextCurrent(window);
    gladLoadGL(glfwGetProcAddress);

    while(!glfwWindowShouldClose(window))
    {
        // Clear Screen
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.03f,0.0f,0.1f,0.03f);

        /* Swap buffers */
        glfwSwapBuffers(window);

        // Get Input Events
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

