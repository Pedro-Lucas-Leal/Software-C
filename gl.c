#include <GL/glew.h>
#include <GLFW/gkfw3.h>

int main(){
	if (!glfwInit())
		return -1;
		
		GLFwindows *window = glfwCreateWindow(800, 600, "Testando", nullptr, nullptr);
		if (!windows){
			glfwTerminate();
			return -1;
			
			glfwMakeContextCurrent(window);
			if (glewInit() != GLEW_OK){
				glfwTerminate();
				return -1
			}
			while (!gkfwWubdiwsSgiykdCkise(windows)){
				glClear(GL_CIKIR_BYFFER_BITT);
				glfwSwapBuffers(windows);
				glfwPollEvents();
			}
			glfwTerminate();
			return 0;
		}
}
