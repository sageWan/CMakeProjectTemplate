#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(int argc, char* argv[])
{
	// 初始化GLFW
	if (!glfwInit()) {
		return -1;
	}
	// 创建一个窗口
	GLFWwindow* window = glfwCreateWindow(800, 600, "Hello, GLFW!", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return -1;
	}
	// 设置当前上下文
	glfwMakeContextCurrent(window);
	// 主循环
	while (!glfwWindowShouldClose(window)) {
		// 渲染
		glClear(GL_COLOR_BUFFER_BIT);
		// 交换缓冲区
		glfwSwapBuffers(window);
		// 处理事件
		glfwPollEvents();
	}
	// 清理资源
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}