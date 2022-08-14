#ifndef STAY_HEADER_LOGIC_SYSTEM_RENDERSYSTEM_HPP
#define STAY_HEADER_LOGIC_SYSTEM_RENDERSYSTEM_HPP

#include <unordered_map>

#include "../../Core/coreAlias.hpp"
#include "../../Core/ECS/engine.hpp"

namespace Logic
{
	class RenderSystem : public ECS::System
	{
	public:
		RenderSystem(ECS::Engine* engine);
		void init(RTarget* target);
		void render();
		void register_texture(const sf::Texture* txtr);
	private:
		// This function updates the vertex arrays
		void batch_vertices();
	private:
		RTarget* m_target;
		std::unordered_map<const sf::Texture*, sf::VertexArray> m_vertex_arr;
	};
}

#endif // !STAY_HEADER_LOGIC_SYSTEM_RENDERSYSTEM_HPP