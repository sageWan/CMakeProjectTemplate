#include <imgui.h>

int main()
{
	// 初始化ImGui
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	// 设置ImGui样式
	ImGui::StyleColorsDark();
	// 主循环
	while (true) {
		// 开始新帧
		ImGui::NewFrame();
		// 创建一个简单的窗口
		ImGui::Begin("Hello, ImGui!");
		ImGui::Text("This is a simple ImGui window.");
		ImGui::End();
		// 渲染ImGui
		ImGui::Render();
	}
	// 清理ImGui资源
	ImGui::DestroyContext();
	return 0;
}