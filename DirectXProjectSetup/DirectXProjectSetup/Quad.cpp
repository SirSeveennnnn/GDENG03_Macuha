#include "Quad.h"

Quad::Quad(Vertex a, Vertex b, Vertex c, Vertex d)
{
	vertexList[0] = a;
	vertexList[1] = b;
	vertexList[2] = c;
	vertexList[3] = d;

	CreateQuad();
}

Quad::~Quad()
{
}

void Quad::CreateQuad()
{
	
}
