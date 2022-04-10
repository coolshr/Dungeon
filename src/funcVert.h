#ifndef __funcVert_h__
#define __funcVert_h__

#include <math.h>

#define PI 3.14159265359

void _Vertices(int n, float arr[])
{
	float angle = ((float)PI * 2.0f) / n;
	for (int i = 0; i < 2 * n; i += 2)
	{
		arr[i] = cos(((float)i * angle) / 2);
		arr[i + 1] = sin(((float)i * angle) / 2);
	}
}

void getVertices(float pos[], int numberOfVertices)
{
	float listOfVertices[2 * numberOfVertices];
	_Vertices(numberOfVertices, listOfVertices);
	float angle = 2.0 * (float)PI / numberOfVertices;
	for (int i = 0; i < numberOfVertices * 6 * 3 * 2; i += 36)
	{
		int offset = ((i / 2) / 18) % numberOfVertices;
		pos[i] = listOfVertices[offset * 2];
		pos[i + 1] = listOfVertices[offset * 2 + 1];
		pos[i + 2] = -0.5f;
		pos[i + 3] = 1.0f;
		pos[i + 4] = 1.0f;
		pos[i + 5] = 1.0f;

		offset = (offset + 1) % numberOfVertices;
		pos[i + 6] = listOfVertices[offset * 2];
		pos[i + 6 + 1] = listOfVertices[offset * 2 + 1];
		pos[i + 6 + 2] = -0.5f;
		pos[i + 6 + 3] = 1.0f;
		pos[i + 6 + 4] = 1.0f;
		pos[i + 6 + 5] = 1.0f;

		pos[i + 12] = 0.0f;
		pos[i + 12 + 1] = 0.0f;
		pos[i + 12 + 2] = -0.5f;
		pos[i + 12 + 3] = 1.0f;
		pos[i + 12 + 4] = 1.0f;
		pos[i + 12 + 5] = 1.0f;

		offset = ((i / 2) / 18) % numberOfVertices;
		pos[i + 18] = listOfVertices[offset * 2];
		pos[i + 1 + 18] = listOfVertices[offset * 2 + 1];
		pos[i + 2 + 18] = 0.5f;
		pos[i + 3 + 18] = 1.0f;
		pos[i + 4 + 18] = 1.0f;
		pos[i + 5 + 18] = 1.0f;

		offset = (offset + 1) % numberOfVertices;
		pos[i + 6 + 18] = listOfVertices[offset * 2];
		pos[i + 6 + 1 + 18] = listOfVertices[offset * 2 + 1];
		pos[i + 6 + 2 + 18] = 0.5f;
		pos[i + 6 + 3 + 18] = 1.0f;
		pos[i + 6 + 4 + 18] = 1.0f;
		pos[i + 6 + 5 + 18] = 1.0f;

		pos[i + 12 + 18] = 0.0f;
		pos[i + 12 + 1 + 18] = 0.0f;
		pos[i + 12 + 2 + 18] = 0.5f;
		pos[i + 12 + 3 + 18] = 1.0f;
		pos[i + 12 + 4 + 18] = 1.0f;
		pos[i + 12 + 5 + 18] = 1.0f;
	}
	for (int i = numberOfVertices * 6 * 3 * 2; i < numberOfVertices * 6 * 3 * 4; i += 36)
	{
		float c1, c2, c3;
		c1 = (float)rand() / (float)RAND_MAX;
		c2 = (float)rand() / (float)RAND_MAX;
		c3 = (float)rand() / (float)RAND_MAX;

		int offset = ((i / 2) / 18) % numberOfVertices;
		pos[i] = listOfVertices[offset * 2];
		pos[i + 1] = listOfVertices[offset * 2 + 1];
		pos[i + 2] = -0.5f;
		pos[i + 3] = c1;
		pos[i + 4] = c2;
		pos[i + 5] = c3;

		offset = (offset + 1) % numberOfVertices;
		pos[i + 6] = listOfVertices[offset * 2];
		pos[i + 6 + 1] = listOfVertices[offset * 2 + 1];
		pos[i + 6 + 2] = -0.5f;
		pos[i + 6 + 3] = c1;
		pos[i + 6 + 4] = c2;
		pos[i + 6 + 5] = c3;

		pos[i + 12] = listOfVertices[offset * 2];
		pos[i + 12 + 1] = listOfVertices[offset * 2 + 1];
		pos[i + 12 + 2] = 0.5f;
		pos[i + 12 + 3] = c1;
		pos[i + 12 + 4] = c2;
		pos[i + 12 + 5] = c3;

		offset = ((i / 2) / 18) % numberOfVertices;
		pos[i + 18] = listOfVertices[offset * 2];
		pos[i + 1 + 18] = listOfVertices[offset * 2 + 1];
		pos[i + 2 + 18] = 0.5f;
		pos[i + 3 + 18] = c1;
		pos[i + 4 + 18] = c2;
		pos[i + 5 + 18] = c3;

		offset = (offset + 1) % numberOfVertices;
		pos[i + 6 + 18] = listOfVertices[offset * 2];
		pos[i + 6 + 1 + 18] = listOfVertices[offset * 2 + 1];
		pos[i + 6 + 2 + 18] = 0.5f;
		pos[i + 6 + 3 + 18] = c1;
		pos[i + 6 + 4 + 18] = c2;
		pos[i + 6 + 5 + 18] = c3;

		offset = ((i / 2) / 18) % numberOfVertices;
		pos[i + 12 + 18] = listOfVertices[offset * 2];
		pos[i + 12 + 1 + 18] = listOfVertices[offset * 2 + 1];
		pos[i + 12 + 2 + 18] = -0.5f;
		pos[i + 12 + 3 + 18] = c1;
		pos[i + 12 + 4 + 18] = c2;
		pos[i + 12 + 5 + 18] = c3;
	}
}

#endif