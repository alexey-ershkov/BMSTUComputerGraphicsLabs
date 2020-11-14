#include "Generator.h"

void Generator::GenerateTop()
{

	glColor3f(1.0f, 1.0f, 1.0f);						
	glBegin(GL_TRIANGLES);

	//	// Right Top Triangle
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, 1.0f, -1.0f);


	//	// Left Bottom Triangle
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	
	glEnd();
}

void Generator::GenerateBottom()
{
	glColor3f(1.0f, 1.0f, 1.0f);						
	glBegin(GL_TRIANGLES);


	//// Right Top Triangle
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, -1.0f, -1.0f);


	//// Left Bottom Triangle
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glEnd();

}

void Generator::GenerateLeft()
{
	glColor3f(1.0f, 1.0f, 1.0f);						// Set The Color To blue
	glBegin(GL_TRIANGLES);

	//	//// Right Top Triangle
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(-1.0f, 1.0f, -1.0f);


	//	//// Left Bottom Triangle
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glEnd();

}

void Generator::GenerateRight()
{
	glColor3f(1.0f, 1.0f, 1.0f);						

	glBegin(GL_TRIANGLES);
	////// Right Top Triangle
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, 1.0f, -1.0f);

	
	////// Left Bottom Triangle
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glEnd();

}

void Generator::GenerateFront()
{
	glColor3f(1.0f, 1.0f, 1.0f);						

	glBegin(GL_TRIANGLES);

	////// Right Top Triangle
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, 1.0f, 1.0f);

	////// Left Bottom Triangle
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glEnd();

}

void Generator::GenerateBack()
{
	glColor3f(1.0f, 1.0f, 1.0f);						

	glBegin(GL_TRIANGLES);

	////// Right Top Triangle
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glTexCoord2f(1.5f, 0.5f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, 1.0f, -1.0f);


	////// Left Bottom Triangle
	glTexCoord2f(0.5f, 1.5f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glTexCoord2f(-0.5f, 0.5f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glTexCoord2f(0.5f, -0.5f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	

	glEnd();
}
