//Nombre: Ramses Saldivar Juarez
//Numero de practica:3
//Version VS 2017
//instrucciones*//

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL(GLvoid)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(251.0f, 255.0f, 0.0f, 1.0f);				// Amarillo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
				{1.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-1.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-1.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{1.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{1.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{1.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-1.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-1.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaC(void)
{
	GLfloat vertice[8][3] = {
	{ 0.5 ,-4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -1.5 ,-4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -1.5 ,-4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 0.5 ,-4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -1.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -1.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaCc(void)
{
	GLfloat vertice[8][3] = {
	{ 5.5 ,-4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -1.5 ,-4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -1.5 ,-4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 5.5 ,-4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 5.5 ,-5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 5.5 ,-5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -1.5 ,-5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -1.5 ,-5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
///////////////////////////////////////////////////////////////////////ggggg
void prismaG(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 6.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 6.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 6.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 6.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaGg(void)
{
	GLfloat vertice[8][3] = {
	{ 7.5 ,-4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 6.5 ,-4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 6.5 ,-4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 7.5 ,-4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 7.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 7.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 6.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 6.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.6f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaGgG(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 6.5 ,-4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 6.5 ,-4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,-4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,-5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,-5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 6.5 ,-5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 6.5 ,-5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaGgg(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 11.5 ,-4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 11.5 ,-4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,-4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,-2.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,-2.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 11.5 ,-2.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 11.5 ,-2.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.6f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaGggg(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 6.5 ,-4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 6.5 ,-4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,-4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,-5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,-5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 6.5 ,-5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 6.5 ,-5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaGG(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-2.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 9.5 ,-2.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 9.5 ,-2.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,-2.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,-3.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,-3.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 9.5 ,-3.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 9.5 ,-3.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
//////////////////////////////////////RRRRRRRRRRRRRR
void prismaR(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 13.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 13.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 18.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 18.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 18.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 13.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 13.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaRr(void)
{
	GLfloat vertice[8][3] = {
	{ 14.5 ,-5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 13.5 ,-5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 13.5 ,-5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 14.5 ,-5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 14.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 14.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 13.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 13.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaRrr(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-2.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 17.5 ,-2.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 17.5 ,-2.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 18.5 ,-2.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 18.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 18.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 17.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 17.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaRR(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-2.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 13.5 ,-2.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 13.5 ,-2.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 18.5 ,-2.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 18.5 ,-1.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 18.5 ,-1.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 13.5 ,-1.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 13.5 ,-1.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaRrrr(void)
{
	GLfloat vertice[8][3] = {
	{ 17.5 ,-3.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 16.5 ,-3.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 16.5 ,-3.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 17.5 ,-3.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 17.5 ,-2.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 17.5 ,-2.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 16.5 ,-2.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 16.5 ,-2.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaRrrrr(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-3.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 17.5 ,-3.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 17.5 ,-3.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 18.5 ,-3.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 18.5 ,-5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 18.5 ,-5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 17.5 ,-5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 17.5 ,-5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
/////////////contorno piramide
void prismaB(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 18.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 18.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 18.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaBb(void)
{
	GLfloat vertice[8][3] = {
	{ 1.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 1.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 1.5 ,2.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 1.5 ,2.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 0.5 ,2.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 0.5 ,2.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaBbb(void)
{
	GLfloat vertice[8][3] = {
	{ 2.5 ,2.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 1.5 ,2.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 1.5 ,2.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 2.5 ,2.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 2.5 ,4.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 2.5 ,4.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 1.5 ,4.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 1.5 ,4.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaBbbb(void)
{
	GLfloat vertice[8][3] = {
	{ 3.5 ,4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 2.5 ,4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 2.5 ,4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 3.5 ,4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 3.5 ,6.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 3.5 ,6.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 2.5 ,6.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 2.5 ,6.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB4(void)
{
	GLfloat vertice[8][3] = {
	{ 4.5 ,6.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 3.5 ,6.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 3.5 ,6.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 4.5 ,6.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 4.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 4.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 3.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 3.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB5(void)
{
	GLfloat vertice[8][3] = {
	{ 5.5 ,8.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 4.5 ,8.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 4.5 ,8.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 5.5 ,8.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 5.5 ,10.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 5.5 ,10.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 4.5 ,10.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 4.5 ,10.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB6(void)
{
	GLfloat vertice[8][3] = {
	{ 6.5 ,10.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 5.5 ,10.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 5.5 ,10.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 6.5 ,10.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 6.5 ,12.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 6.5 ,12.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 5.5 ,12.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 5.5 ,12.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaB7(void)
{
	GLfloat vertice[8][3] = {
	{ 7.5 ,12.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 6.5 ,12.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 6.5 ,12.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 7.5 ,12.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 7.5 ,14.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 7.5 ,14.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 6.5 ,14.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 6.5 ,14.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB8(void)
{
	GLfloat vertice[8][3] = {
	{ 8.5 ,14.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 7.5 ,14.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 7.5 ,14.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 8.5 ,14.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 8.5 ,16.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 8.5 ,16.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 7.5 ,16.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 7.5 ,16.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
//////////////parte superior
void prismaBs(void)
{
	GLfloat vertice[8][3] = {
	{ 11.5 ,16.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 8.5 ,16.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 8.5 ,16.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 11.5 ,16.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 11.5 ,17.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 11.5 ,17.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 8.5 ,17.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 8.5 ,17.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB9(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,14.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 11.5 ,14.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 11.5 ,14.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,14.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,16.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,16.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 11.5 ,16.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 11.5 ,16.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaB10(void)
{
	GLfloat vertice[8][3] = {
	{ 13.5 ,12.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 12.5 ,12.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 12.5 ,12.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 13.5 ,12.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 13.5 ,14.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 13.5 ,14.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 12.5 ,14.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 12.5 ,14.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaB11(void)
{
	GLfloat vertice[8][3] = {
	{ 14.5 ,10.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 13.5 ,10.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 13.5 ,10.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 14.5 ,10.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 14.5 ,12.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 14.5 ,12.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 13.5 ,12.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 13.5 ,12.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB12(void)
{
	GLfloat vertice[8][3] = {
	{ 15.5 ,8.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 14.5 ,8.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 14.5 ,8.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 15.5 ,8.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 15.5 ,10.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 15.5 ,10.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 14.5 ,10.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 14.5 ,10.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaB13(void)
{
	GLfloat vertice[8][3] = {
	{ 16.5 ,6.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 15.5 ,6.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 15.5 ,6.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 16.5 ,6.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 16.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 16.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 15.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 15.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaB14(void)
{
	GLfloat vertice[8][3] = {
	{ 17.5 ,4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 16.5 ,4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 16.5 ,4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 17.5 ,4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 17.5 ,6.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 17.5 ,6.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 16.5 ,6.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 16.5 ,6.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaB15(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,2.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 17.5 ,2.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 17.5 ,2.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 18.5 ,2.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 18.5 ,4.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 18.5 ,4.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 17.5 ,4.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 17.5 ,4.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaB16(void)
{
	GLfloat vertice[8][3] = {
	{ 19.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 18.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 18.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 19.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 19.5 ,2.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 19.5 ,2.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 18.5 ,2.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 18.5 ,2.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

///////////////////////Contorno ojo

void prismaO(void)
{
	GLfloat vertice[8][3] = {
	{ 5.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 4.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 4.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 5.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 5.5 ,7.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 5.5 ,7.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 4.5 ,7.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 4.5 ,7.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaO1(void)
{
	GLfloat vertice[8][3] = {
	{ 7.5 ,7.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 5.5 ,7.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 5.5 ,7.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 7.5 ,7.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 7.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 7.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 5.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 5.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaOb(void)
{
	GLfloat vertice[8][3] = {
	{ 7.5 ,4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 5.5 ,4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 5.5 ,4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 7.5 ,4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 7.5 ,5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 7.5 ,5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 5.5 ,5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 5.5 ,5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOb1(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,3.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 7.5 ,3.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 7.5 ,3.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,3.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,4.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,4.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 7.5 ,4.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 7.5 ,4.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaOa1(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,8.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 7.5 ,8.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 7.5 ,8.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,8.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,9.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,9.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 7.5 ,9.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 7.5 ,9.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOb2(void)
{
	GLfloat vertice[8][3] = {
	{ 14.5 ,4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 12.5 ,4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 12.5 ,4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 14.5 ,4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 14.5 ,5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 14.5 ,5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 12.5 ,5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 12.5 ,5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOa2(void)
{
	GLfloat vertice[8][3] = {
	{ 14.5 ,7.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 12.5 ,7.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 12.5 ,7.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 14.5 ,7.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 14.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 14.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 12.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 12.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOO(void)
{
	GLfloat vertice[8][3] = {
	{ 15.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 14.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 14.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 15.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 15.5 ,7.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 15.5 ,7.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 14.5 ,7.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 14.5 ,7.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOi(void)
{
	GLfloat vertice[8][3] = {
	{ 11.5 ,6.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 10.5 ,6.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 10.5 ,6.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 11.5 ,6.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 11.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 11.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 10.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 10.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOi1(void)
{
	GLfloat vertice[8][3] = {
	{ 10.5 ,6.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 9.5 ,6.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 9.5 ,6.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 10.5 ,6.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 10.5 ,7.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 10.5 ,7.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 9.5 ,7.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 9.5 ,7.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOia(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,6.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 11.5 ,6.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 11.5 ,6.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,6.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 11.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 11.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOia2(void)
{
	GLfloat vertice[8][3] = {
	{ 11.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 9.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 9.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 11.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 11.5 ,6.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 11.5 ,6.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 9.5 ,6.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 9.5 ,6.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaOia3(void)
{
	GLfloat vertice[8][3] = {
	{ 9.5 ,6.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 8.5 ,6.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 8.5 ,6.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 9.5 ,6.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 9.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 9.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 8.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 8.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 252.0f, 252.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOblanco(void)
{
	GLfloat vertice[8][3] = {
	{ 7.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 5.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 5.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 7.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 7.5 ,7.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 7.5 ,7.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 5.5 ,7.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 5.5 ,7.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOblanco1(void)
{
	GLfloat vertice[8][3] = {
	{ 14.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 12.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 12.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 14.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 14.5 ,7.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 14.5 ,7.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 12.5 ,7.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 12.5 ,7.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOblanco2(void)
{
	GLfloat vertice[8][3] = {
	{ 8.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 7.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 7.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 8.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 8.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 8.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 7.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 7.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOblanco3(void)
{
	GLfloat vertice[8][3] = {
	{ 9.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 8.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 8.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 9.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 9.5 ,6.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 9.5 ,6.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 8.5 ,6.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 8.5 ,6.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOblanco4(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,5.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 11.5 ,5.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 11.5 ,5.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,5.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,6.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,6.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 11.5 ,6.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 11.5 ,6.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaOblanco5(void)
{
	GLfloat vertice[8][3] = {
	{ 10.5 ,7.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 9.5 ,7.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 9.5 ,7.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 10.5 ,7.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 10.5 ,8.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 10.5 ,8.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 9.5 ,8.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 9.5 ,8.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOz(void)
{
	GLfloat vertice[8][3] = {
	{ 11.5 ,4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 7.5 ,4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 7.5 ,4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 11.5 ,4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 11.5 ,5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 11.5 ,5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 7.5 ,5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 7.5 ,5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaOz1(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,4.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ 11.5 ,4.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ 11.5 ,4.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 12.5 ,4.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 12.5 ,5.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 12.5 ,5.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ 11.5 ,5.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ 11.5 ,5.5, 0.5 },    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//Poner Código Aquí.

	glTranslatef(transX, transY, transZ);
	//prisma();
	glTranslatef(2.0f, 0.0f, 0.0f);//funcion de posisicion, es acomuativo el nuevo margen de referencia es la pocsicion del siguiente prisma
	//prisma();
	glTranslatef(-4.0f, 0.0f, 0.0f);
	//prisma();
	prismaB();
	prismaBb();
	prismaBbb();
	prismaBbbb();
	prismaB4();
	prismaB5();
	prismaB6();
	prismaB7();
	prismaB8();
	prismaBs();
	prismaB9();
	prismaB10();
	prismaB11();
	prismaB12();
	prismaB13();
	prismaB14();
	prismaB15();
	prismaB16();
	prismaO();
	prismaO1();
	prismaOb();
	prismaOb1();
	prismaOa1();
	prismaOb2();
	prismaOa2();
	prismaOO();
	prismaOi();
	prismaOi1();
	prismaOia();
	prismaOia2();
	prismaOia3();
	prismaOblanco();
	prismaOblanco1();
	prismaOblanco2();
	prismaOblanco3();
	prismaOblanco4(); 
	prismaOblanco5();
	prismaOz();
	prismaOz1();
	//prismaC();
	//prismaCc();
	//prismaG();
	//prismaGg();
	//prismaGgG();
	//prismaGgg();
	//prismaGG();
	//prismaR();
	//prismaRr();
	//prismaRrr();
	//prismaRR();
	//prismaRrrr();
	//prismaRrrrr();
	glutSwapBuffers();
	//glFlush();
	// Swap The Buffers
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.1,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 'a':
	case 'A':
		transX -= 0.2f;
		break;
	case 'd':
	case 'D':
		transX += 0.2f;
		break;
	case 'q':
	case 'Q':
		transY += 0.2f;
		break;
	case 'e':
	case 'E':
		transY -= 0.2f;
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
		//glutFullScreen ( ); // Full Screen Mode
		//break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
		//glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
		//break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	//glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 3"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}



