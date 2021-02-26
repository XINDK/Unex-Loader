void ToggleButton(const char* str_id, bool* v)
{ 
ImVec2 p = ImGui::GetCursorScreenPos(); 
ImDrawList* draw_list = ImGui::GetWindowDrawList();
float height = ImGui::GetFrameHeight();
float width = height * 1.55f;
float radius = height * 0.50f;
 if (ImGui::InvisibleButton(str_id, ImVec2(width, height)))
   *v = !*v;
ImU32 col_bg;
if (ImGui::IsItemHovered())
	  col_bg = *v ? IM_COL32(145 + 20, 211, 68 + 20, 255) : IM_COL32(218 - 20, 218 - 20, 218 - 20, 255);
 else
	   col_bg = *v ? IM_COL32(145, 211, 68, 255) : IM_COL32(218, 218, 218, 255);
  draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.5f);
   draw_list->AddCircleFilled(ImVec2(*v ? (p.x + width - radius) : (p.x + radius), p.y + radius), radius - 1.5f, IM_COL32(255, 255, 255, 255));
}


void UnexPasterkiddo()
{
ImGui::SetNextWindowSize({471.f,244.f});

ImGui::Begin( "Unex Refline");
ImGui::SetCursorPos({7.f,176.f});
if(ImGui::Button("Login",459.f,0.f}))
{

}
ImGui::SetCursorPos({5.f,126.f});
ToggleButton("toggle1", the_bool);
ImGui::SetCursorPos({44.f,207.f});
ImGui::Text("Remember Key");
ImGui::SetCursorPos({6.f,203.f});
ToggleButton("toggle3", the_bool);
ImGui::SetCursorPos({48.f,127.f});
ImGui::Text("Build Version (FiveM closes itself and reopen)");
ImGui::SetCursorPos({74.f,91.f});
ImGui::InputText("", buffer, 255);


ImGui::End();
}


