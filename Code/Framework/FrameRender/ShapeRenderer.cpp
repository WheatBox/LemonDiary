﻿#include <FrameRender/ShapeRenderer.h>

#include <SDL_render.h>

namespace Frame {

	/* +-----------------------------------------------+ */
	/* |               Draw Basic Shapes               | */
	/* +-----------------------------------------------+ */

	void CShapeRenderer::DrawPixel(float x, float y) {
		SDL_RenderDrawPointF(m_sdlRenderer, x, y);
	}

	void CShapeRenderer::DrawLine(float x1, float y1, float x2, float y2) {
		SDL_RenderDrawLineF(m_sdlRenderer, x1, y1, x2, y2);
	}

	void CShapeRenderer::DrawRectangle(float x1, float y1, float x2, float y2, bool fill) {
		SDL_FRect rect { x1, y1, x2 - x1, y2 - y1 };
		(fill ? SDL_RenderFillRectF : SDL_RenderDrawRectF)(m_sdlRenderer, & rect);
	}

	void CShapeRenderer::DrawRectangleWH(float x, float y, float w, float h, bool fill) {
		SDL_FRect rect { x, y, w, h };
		(fill ? SDL_RenderFillRectF : SDL_RenderDrawRectF)(m_sdlRenderer, & rect);
	}

}