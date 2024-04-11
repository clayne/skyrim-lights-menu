#pragma once
#include "prop.hpp"

namespace SLM
{
	class Scene
	{
	public:
		Scene()                        = default;
		Scene(const Scene&)            = delete;
		Scene(const Scene&&)           = delete;
		Scene& operator=(const Scene&) = delete;

	public:
		void               DrawControlWindow();
		void               PlaceProp(RE::TESBoundObject* obj);
		void               ClearScene();
		std::vector<Prop>& GetProps() { return props; }

	private:
		std::vector<Prop>                 props;
		static constexpr ImGuiWindowFlags windowFlags = ImGuiWindowFlags_NoNavFocus | ImGuiWindowFlags_NoDecoration;
		static constexpr ImGuiTabBarFlags tabBarFlags = ImGuiTabBarFlags_Reorderable | ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_NoCloseWithMiddleMouseButton | ImGuiTabBarFlags_FittingPolicyScroll;
	};
}