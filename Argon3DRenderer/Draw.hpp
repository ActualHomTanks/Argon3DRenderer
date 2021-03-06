#pragma once
#include "Triangle.hpp"
#include "Color.hpp"


namespace Draw
{
	enum Cull_type
	{
		CULL_NONE,
		CULL_BACKFACE
	};

	enum Render_type
	{
		RENDER_WIREFRAME,
		RENDER_WIREFRAME_VERTEX,
		RENDER_FILL_TRIANGLE,
		RENDER_FILL_TRIANGLE_WIREFRAME,
		RENDER_TEXTURED,
		RENDER_TEXTURED_WIRE
	};

	void grid();
	void pixel(const int x, const int y, const Color color);
	void fill_pixel(const int x, const int y, const Color color, Vector4_int const& a, Vector4_int const& b, Vector4_int const& c);
	void texel(const int x, const int y, Vector4_int const& a, Vector4_int const& b, Vector4_int const& c,
		Texture2 const& a_uv, Texture2 const& b_uv, Texture2 const& c_uv, const upng_t* texture);
	void line(int x0, int y0, int x1, int y1, Color color);
	void rectangle(const int x, const int y, const int width, const int height, const Color color);
	void triangle(Triangle4 const& triangle, Color color);

	void fill_triangle(Triangle4 const& triangle, Color color);
	void fill_bottom_triangle(Vector4_int const& a, Vector4_int const& b, Vector4_int const& c, Vector2_int const& m, Color color);
	void fill_top_triangle(Vector4_int const& a, Vector4_int const& b, Vector4_int const& c, Vector2_int const& m, Color color);
	void fill_triangle(int ax, int ay, int bx, int by, int cx, int cy, Color color);
	void fill_bottom_triangle(int ax, int ay, int bx, int by, int cx, int cy, Color color);
	void fill_top_triangle(int ax, int ay, int bx, int by, int cx, int cy, Color color);

	void textured_triangle(Triangle4 const& triangle, upng_t* texture);
	void textured_bottom_triangle(Vector4_int const& a, Vector4_int const& b, Vector4_int const& c, Vector2_int const& m,
		Texture2 const& a_uv, Texture2 const& b_uv, Texture2 const& c_uv, upng_t* texture);
	void textured_top_triangle(Vector4_int const& a, Vector4_int const& b, Vector4_int const& c, Vector2_int const& m,
		Texture2 const& a_uv, Texture2 const& b_uv, Texture2 const& c_uv, upng_t* texture);

};