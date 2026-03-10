#include <stdlib.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define OVA_WINDOW_WIDTH  800
#define OVA_WINDOW_HEIGHT 600

GLFWwindow* ova_InitWindow(){
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	return glfwCreateWindow(OVA_WINDOW_WIDTH, OVA_WINDOW_HEIGHT, "Vulkan", NULL, NULL);
}

void ova_InitVulkan(){}

void ova_MainLoop(GLFWwindow* window){
	while(!glfwWindowShouldClose(window)){
		glfwPollEvents();
	}
}

void ova_Cleanup(GLFWwindow* window){
	glfwDestroyWindow(window);

	glfwTerminate();
}

void ova_Run(){
	GLFWwindow* ovaWindow = ova_InitWindow();
	ova_InitVulkan();
	ova_MainLoop(ovaWindow);
	ova_Cleanup(ovaWindow);
}

int main(){
	ova_Run();
	
	return EXIT_SUCCESS;
}
