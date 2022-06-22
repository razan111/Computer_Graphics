#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
static float cloud1 = 0, train1 = 0, sun = 0, ty = 0;
void init(void) {
    glClearColor(0, 0.0, 0.0, 0.0);
    glOrtho(0, 1000, 0, 1000, 0, 1);
}


void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i = 0;
    float angle;
    GLfloat PI = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (i = 0;i < 100;i++)
    {
        angle = 2 * PI * i / 100;
        glVertex2f(x + (cos(angle) * rx), y + (sin(angle) * ry));
    }
    glEnd();
}

void cloudMove()
{
    cloud1 += .01;
    if (cloud1 > 1200) {
        cloud1 = 0;
    }


    glutPostRedisplay();
}

void sunMove()
{
    sun += .004;
    if (sun > 1200) {
        sun = 0;
    }

    if (sun > 600) {
        glPushMatrix();

        glBegin(GL_QUADS);

        glColor3ub(128, 139, 150);
        glVertex3f(0.0f, 650.0f, 0.0f);

        glColor3ub(231, 76, 60);
        glVertex3f(1000.0f, 650.0f, 0.0f);



        glColor3ub(247, 220, 111);
        glVertex3f(1000.0f, 1000.0f, 0.0f);


        glColor3ub(93, 173, 226);
        glVertex3f(0.0f, 1000.0f, 0.0f);
        glEnd();
        glPopMatrix();

    }
    glutPostRedisplay();


}


void movingCloud()
{
    glColor3f(1, 1, 1);
    cloudMove();
    glPushMatrix();
    glTranslatef(cloud1, -15, 0);
    circle(30, 50, 50, 900);
    circle(30, 50, 80, 900);
    circle(30, 50, 120, 892);
    circle(30, 50, 120, 887);
    circle(30, 50, 70, 885);
    glPopMatrix();
}



void movingCloud1()
{
    glColor3f(1, 1, 1);
    cloudMove();
    glPushMatrix();
    glTranslatef(cloud1, -15, 0);
    circle(30, 50, 500, 900);
    circle(30, 50, 580, 900);
    circle(30, 50, 560, 892);
    circle(30, 50, 600, 887);
    circle(30, 50, 520, 885);
    glPopMatrix();
}


void movingsun()
{
    glColor3f(1, 1, 1);
    sunMove();
    glPushMatrix();
    glTranslatef(sun, -15, 0);
    glColor3ub(231, 76, 60);
    circle(30, 50, 50, 930);
    glPopMatrix();
}




void background() {
    glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(124, 172, 90);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1000.0f, 0.0f, 0.0f);
    glVertex3f(1000.0f, 450.0f, 0.0f);
    glVertex3f(0.0f, 450.0f, 0.0f);

    glColor3ub(23, 32, 42);
    circle(30, 50, 50, 930);

    glPopMatrix();
}


void train_line() {
    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3ub(127, 140, 141);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1000.0f, 0.0f, 0.0f);
    glVertex3f(1000.0f, 140.0f, 0.0f);
    glVertex3f(0.0f, 140.0f, 0.0f);
    glPopMatrix();
    glEnd();
}
void draw_train_line() {

    // train line start
    glPushMatrix();

    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(20.0f, 20.0f, 0.0f);
    glVertex3f(980.0f, 20.0f, 0.0f);
    glVertex3f(980.0f, 30.0f, 0.0f);
    glVertex3f(20.0f, 30.0f, 0.0f);


    glVertex3f(20.0f, 100.0f, 0.0f);
    glVertex3f(980.0f, 100.0f, 0.0f);
    glVertex3f(980.0f, 110.0f, 0.0f);
    glVertex3f(20.0f, 110.0f, 0.0f);


    glVertex3f(40.0f, 0.0f, 0.0f);
    glVertex3f(50.0f, 0.0f, 0.0f);
    glVertex3f(50.0f, 130.0f, 0.0f);
    glVertex3f(40.0f, 130.0f, 0.0f);


    glVertex3f(80.0f, 0.0f, 0.0f);
    glVertex3f(90.0f, 0.0f, 0.0f);
    glVertex3f(90.0f, 130.0f, 0.0f);
    glVertex3f(80.0f, 130.0f, 0.0f);


    glVertex3f(120.0f, 0.0f, 0.0f);
    glVertex3f(130.0f, 0.0f, 0.0f);
    glVertex3f(130.0f, 130.0f, 0.0f);
    glVertex3f(120.0f, 130.0f, 0.0f);


    glVertex3f(160.0f, 0.0f, 0.0f);
    glVertex3f(170.0f, 0.0f, 0.0f);
    glVertex3f(170.0f, 130.0f, 0.0f);
    glVertex3f(160.0f, 130.0f, 0.0f);


    glVertex3f(200.0f, 0.0f, 0.0f);
    glVertex3f(210.0f, 0.0f, 0.0f);
    glVertex3f(210.0f, 130.0f, 0.0f);
    glVertex3f(200.0f, 130.0f, 0.0f);


    glVertex3f(240.0f, 0.0f, 0.0f);
    glVertex3f(250.0f, 0.0f, 0.0f);
    glVertex3f(250.0f, 130.0f, 0.0f);
    glVertex3f(240.0f, 130.0f, 0.0f);


    glVertex3f(280.0f, 0.0f, 0.0f);
    glVertex3f(290.0f, 0.0f, 0.0f);
    glVertex3f(290.0f, 130.0f, 0.0f);
    glVertex3f(280.0f, 130.0f, 0.0f);

    glVertex3f(320.0f, 0.0f, 0.0f);
    glVertex3f(330.0f, 0.0f, 0.0f);
    glVertex3f(330.0f, 130.0f, 0.0f);
    glVertex3f(320.0f, 130.0f, 0.0f);


    glVertex3f(360.0f, 0.0f, 0.0f);
    glVertex3f(370.0f, 0.0f, 0.0f);
    glVertex3f(370.0f, 130.0f, 0.0f);
    glVertex3f(360.0f, 130.0f, 0.0f);


    glVertex3f(400.0f, 0.0f, 0.0f);
    glVertex3f(410.0f, 0.0f, 0.0f);
    glVertex3f(410.0f, 130.0f, 0.0f);
    glVertex3f(400.0f, 130.0f, 0.0f);


    glVertex3f(440.0f, 0.0f, 0.0f);
    glVertex3f(450.0f, 0.0f, 0.0f);
    glVertex3f(450.0f, 130.0f, 0.0f);
    glVertex3f(440.0f, 130.0f, 0.0f);


    glVertex3f(480.0f, 0.0f, 0.0f);
    glVertex3f(490.0f, 0.0f, 0.0f);
    glVertex3f(490.0f, 130.0f, 0.0f);
    glVertex3f(480.0f, 130.0f, 0.0f);



    glVertex3f(520.0f, 0.0f, 0.0f);
    glVertex3f(530.0f, 0.0f, 0.0f);
    glVertex3f(530.0f, 130.0f, 0.0f);
    glVertex3f(520.0f, 130.0f, 0.0f);


    glVertex3f(560.0f, 0.0f, 0.0f);
    glVertex3f(570.0f, 0.0f, 0.0f);
    glVertex3f(570.0f, 130.0f, 0.0f);
    glVertex3f(560.0f, 130.0f, 0.0f);


    glVertex3f(600.0f, 0.0f, 0.0f);
    glVertex3f(610.0f, 0.0f, 0.0f);
    glVertex3f(610.0f, 130.0f, 0.0f);
    glVertex3f(600.0f, 130.0f, 0.0f);


    glVertex3f(640.0f, 0.0f, 0.0f);
    glVertex3f(650.0f, 0.0f, 0.0f);
    glVertex3f(650.0f, 130.0f, 0.0f);
    glVertex3f(640.0f, 130.0f, 0.0f);


    glVertex3f(680.0f, 0.0f, 0.0f);
    glVertex3f(690.0f, 0.0f, 0.0f);
    glVertex3f(690.0f, 130.0f, 0.0f);
    glVertex3f(680.0f, 130.0f, 0.0f);


    glVertex3f(720.0f, 0.0f, 0.0f);
    glVertex3f(730.0f, 0.0f, 0.0f);
    glVertex3f(730.0f, 130.0f, 0.0f);
    glVertex3f(720.0f, 130.0f, 0.0f);


    glVertex3f(760.0f, 0.0f, 0.0f);
    glVertex3f(770.0f, 0.0f, 0.0f);
    glVertex3f(770.0f, 130.0f, 0.0f);
    glVertex3f(760.0f, 130.0f, 0.0f);


    glVertex3f(800.0f, 0.0f, 0.0f);
    glVertex3f(810.0f, 0.0f, 0.0f);
    glVertex3f(810.0f, 130.0f, 0.0f);
    glVertex3f(800.0f, 130.0f, 0.0f);



    glVertex3f(840.0f, 0.0f, 0.0f);
    glVertex3f(850.0f, 0.0f, 0.0f);
    glVertex3f(850.0f, 130.0f, 0.0f);
    glVertex3f(840.0f, 130.0f, 0.0f);


    glVertex3f(880.0f, 0.0f, 0.0f);
    glVertex3f(890.0f, 0.0f, 0.0f);
    glVertex3f(890.0f, 130.0f, 0.0f);
    glVertex3f(880.0f, 130.0f, 0.0f);


    glVertex3f(920.0f, 0.0f, 0.0f);
    glVertex3f(930.0f, 0.0f, 0.0f);
    glVertex3f(930.0f, 130.0f, 0.0f);
    glVertex3f(920.0f, 130.0f, 0.0f);



    glVertex3f(960.0f, 0.0f, 0.0f);
    glVertex3f(970.0f, 0.0f, 0.0f);
    glVertex3f(970.0f, 130.0f, 0.0f);
    glVertex3f(960.0f, 130.0f, 0.0f);

    glEnd();
    glPopMatrix();

    // train line end 

}



void draw_train() {


    // train start 
    glPushMatrix();

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);

    glVertex3f(580.0f, 60.0f, 0.0f);
    glVertex3f(800.0f, 60.0f, 0.0f);
    glVertex3f(750.0f, 120.0f, 0.0f);
    glVertex3f(580.0f, 120.0f, 0.0f);


    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex3f(660.0f, 120.0f, 0.0f);
    glVertex3f(750.0f, 120.0f, 0.0f);
    glVertex3f(750.0f, 220.0f, 0.0f);
    glVertex3f(660.0f, 220.0f, 0.0f);


    glColor3f(1.0f, 0.0f, 1.0f);

    glVertex3f(670.0f, 120.0f, 0.0f);
    glVertex3f(675.0f, 120.0f, 0.0f);
    glVertex3f(675.0f, 218.0f, 0.0f);
    glVertex3f(670.0f, 218.0f, 0.0f);


    glVertex3f(740.0f, 120.0f, 0.0f);
    glVertex3f(745.0f, 120.0f, 0.0f);
    glVertex3f(745.0f, 218.0f, 0.0f);
    glVertex3f(740.0f, 218.0f, 0.0f);


    glVertex3f(730.0f, 120.0f, 0.0f);
    glVertex3f(735.0f, 120.0f, 0.0f);
    glVertex3f(735.0f, 218.0f, 0.0f);
    glVertex3f(730.0f, 218.0f, 0.0f);


    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex3f(580.0f, 120.0f, 0.0f);
    glVertex3f(660.0f, 120.0f, 0.0f);
    glVertex3f(660.0f, 290.0f, 0.0f);
    glVertex3f(580.0f, 290.0f, 0.0f);



    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex3f(590.0f, 135.0f, 0.0f);
    glVertex3f(650.0f, 135.0f, 0.0f);
    glVertex3f(650.0f, 275.0f, 0.0f);
    glVertex3f(590.0f, 275.0f, 0.0f);





    glColor3f(1.0f, 0.0f, 0.0f);



    glVertex3f(710.0f, 220.0f, 0.0f);
    glVertex3f(730.0f, 220.0f, 0.0f);
    glVertex3f(730.0f, 270.0f, 0.0f);
    glVertex3f(710.0f, 270.0f, 0.0f);


    glVertex3f(690.0f, 245.0f, 0.0f);
    glVertex3f(710.0f, 245.0f, 0.0f);
    glVertex3f(710.0f, 270.0f, 0.0f);
    glVertex3f(690.0f, 270.0f, 0.0f);










    // train bogi 1st start
    glColor3f(0.0f, 0.7f, 0.0f);


    glVertex3f(400.0f, 60.0f, 0.0f);
    glVertex3f(560.0f, 60.0f, 0.0f);
    glVertex3f(560.0f, 290.0f, 0.0f);
    glVertex3f(400.0f, 290.0f, 0.0f);


    glColor3f(0.0f, 0.7f, 0.7f);

    glVertex3f(395.0f, 290.0f, 0.0f);
    glVertex3f(565.0f, 290.0f, 0.0f);
    glVertex3f(565.0f, 300.0f, 0.0f);
    glVertex3f(395.0f, 300.0f, 0.0f);



    glColor3f(1.0f, 1.7f, 1.0f);

    glVertex3f(430.0f, 150.0f, 0.0f);
    glVertex3f(470.0f, 150.0f, 0.0f);
    glVertex3f(470.0f, 220.0f, 0.0f);
    glVertex3f(430.0f, 220.0f, 0.0f);


    glVertex3f(490.0f, 150.0f, 0.0f);
    glVertex3f(530.0f, 150.0f, 0.0f);
    glVertex3f(530.0f, 220.0f, 0.0f);
    glVertex3f(490.0f, 220.0f, 0.0f);
    // train bogi 1st end



     // train bogi 2nd start
    glColor3f(0.0f, 0.7f, 0.0f);

    glVertex3f(220.0f, 60.0f, 0.0f);
    glVertex3f(380.0f, 60.0f, 0.0f);
    glVertex3f(380.0f, 290.0f, 0.0f);
    glVertex3f(220.0f, 290.0f, 0.0f);


    glColor3f(0.0f, 0.7f, 0.7f);

    glVertex3f(215.0f, 290.0f, 0.0f);
    glVertex3f(385.0f, 290.0f, 0.0f);
    glVertex3f(385.0f, 300.0f, 0.0f);
    glVertex3f(215.0f, 300.0f, 0.0f);



    glColor3f(1.0f, 1.7f, 1.0f);

    glVertex3f(250.0f, 150.0f, 0.0f);
    glVertex3f(290.0f, 150.0f, 0.0f);
    glVertex3f(290.0f, 220.0f, 0.0f);
    glVertex3f(250.0f, 220.0f, 0.0f);


    glVertex3f(310.0f, 150.0f, 0.0f);
    glVertex3f(350.0f, 150.0f, 0.0f);
    glVertex3f(350.0f, 220.0f, 0.0f);
    glVertex3f(310.0f, 220.0f, 0.0f);
    // train bogi 2nd end



     // train bogi 3rd start
    glColor3f(0.0f, 0.7f, 0.0f);

    glVertex3f(40.0f, 60.0f, 0.0f);
    glVertex3f(200.0f, 60.0f, 0.0f);
    glVertex3f(200.0f, 290.0f, 0.0f);
    glVertex3f(40.0f, 290.0f, 0.0f);


    glColor3f(0.0f, 0.7f, 0.7f);

    glVertex3f(35.0f, 290.0f, 0.0f);
    glVertex3f(205.0f, 290.0f, 0.0f);
    glVertex3f(205.0f, 300.0f, 0.0f);
    glVertex3f(35.0f, 300.0f, 0.0f);



    glColor3f(1.0f, 1.7f, 1.0f);

    glVertex3f(70.0f, 150.0f, 0.0f);
    glVertex3f(110.0f, 150.0f, 0.0f);
    glVertex3f(110.0f, 220.0f, 0.0f);
    glVertex3f(70.0f, 220.0f, 0.0f);


    glVertex3f(130.0f, 150.0f, 0.0f);
    glVertex3f(170.0f, 150.0f, 0.0f);
    glVertex3f(170.0f, 220.0f, 0.0f);
    glVertex3f(130.0f, 220.0f, 0.0f);
    // train bogi 3rd end




    glEnd();

    circle(30, 50, 80, 60);
    circle(30, 50, 160, 60);
    circle(30, 50, 260, 60);
    circle(30, 50, 340, 60);
    circle(30, 50, 440, 60);
    circle(30, 50, 520, 60);
    circle(30, 50, 620, 60);
    circle(30, 50, 720, 60);
    glPopMatrix();



}
void trainMove()
{
    train1 += .1;
    if (train1 > 1200) {
        train1 = -1000;
    }
    glutPostRedisplay();
}

void movingTrain()
{
    glColor3f(1, 1, 1);
    trainMove();
    glPushMatrix();
    glTranslatef(train1, 0, 0);
    draw_train();


    glPopMatrix();
}




void home() {


    glPushMatrix();
    glColor3f(0.0f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    // glVertex3f(0.0f, 330.0f, 0.0f);
    // glVertex3f(1000.0f, 330.0f, 0.0f);
    // glVertex3f(1000.0f, 335.0f, 0.0f);
    // glVertex3f(0.0f, 335.0f, 0.0f);



    // home start 
    glColor3f(0.5f, 0.3f, 0.2f);
    glVertex3f(850.0f, 340.0f, 0.0f);
    glVertex3f(950.0f, 340.0f, 0.0f);
    glVertex3f(950.0f, 420.0f, 0.0f);
    glVertex3f(850.0f, 420.0f, 0.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(890.0f, 340.0f, 0.0f);
    glVertex3f(910.0f, 340.0f, 0.0f);
    glVertex3f(910.0f, 400.0f, 0.0f);
    glVertex3f(890.0f, 400.0f, 0.0f);




    glColor3f(0.5f, 0.8f, 0.6f);
    glVertex3f(850.0f, 420.0f, 0.0f);
    glVertex3f(950.0f, 420.0f, 0.0f);
    glVertex3f(920.0f, 480.0f, 0.0f);
    glVertex3f(820.0f, 480.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex3f(800.0f, 422.0f, 0.0f);
    glVertex3f(850.0f, 420.0f, 0.0f);
    glVertex3f(820.0f, 480.0f, 0.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.9f);
    glVertex3f(800.0f, 345.0f, 0.0f);
    glVertex3f(850.0f, 340.0f, 0.0f);
    glVertex3f(850.0f, 420.0f, 0.0f);
    glVertex3f(800.0f, 422.0f, 0.0f);







    glEnd();
    glPopMatrix();



}
void river() {
    glPushMatrix();
    glColor3ub(52, 152, 219);
    glBegin(GL_QUADS);
    glVertex3f(0.0f, 400.0f, 0.0f);
    glVertex3f(1000.0f, 400.0f, 0.0f);
    glVertex3f(1000.0f, 600.0f, 0.0f);
    glVertex3f(0.0f, 600.0f, 0.0f);


    glPopMatrix();
    glEnd();


}

void hill() {
    glPushMatrix();
    glBegin(GL_TRIANGLES);


    glColor3ub(160, 64, 0);
    glVertex3f(30.0f, 610.0f, 0.0f);
    glColor3ub(220, 118, 51);
    glVertex3f(100.0f, 610.0f, 0.0f);
    glVertex3f(60.0f, 700.0f, 0.0f);



    glColor3ub(110, 44, 0);
    glVertex3f(90.0f, 610.0f, 0.0f);
    glColor3ub(245, 203, 167);
    glVertex3f(170.0f, 610.0f, 0.0f);
    glVertex3f(120.0f, 680.0f, 0.0f);



    glColor3ub(160, 64, 0);
    glVertex3f(780.0f, 610.0f, 0.0f);
    glColor3ub(220, 118, 51);
    glVertex3f(870.0f, 610.0f, 0.0f);
    glVertex3f(830.0f, 720.0f, 0.0f);



    glColor3ub(110, 44, 0);
    glVertex3f(845.0f, 610.0f, 0.0f);
    glColor3ub(245, 203, 167);
    glVertex3f(930.0f, 610.0f, 0.0f);
    glVertex3f(890.0f, 680.0f, 0.0f);


    // middle 


    glColor3ub(110, 44, 0);
    glVertex3f(505.0f, 610.0f, 0.0f);
    glColor3ub(245, 203, 167);
    glVertex3f(600.0f, 610.0f, 0.0f);
    glVertex3f(550.0f, 680.0f, 0.0f);


    glColor3ub(160, 64, 0);
    glVertex3f(580.0f, 610.0f, 0.0f);
    glColor3ub(220, 118, 51);
    glVertex3f(670.0f, 610.0f, 0.0f);
    glVertex3f(630.0f, 720.0f, 0.0f);



    glColor3ub(110, 44, 0);
    glVertex3f(645.0f, 610.0f, 0.0f);
    glColor3ub(245, 203, 167);
    glVertex3f(730.0f, 610.0f, 0.0f);
    glVertex3f(690.0f, 680.0f, 0.0f);


    glPopMatrix();
    glEnd();
}

void smallTree() {
    glPushMatrix();

    glColor3ub(39, 174, 96);


    glBegin(GL_TRIANGLES);
    glVertex3f(410.0f, 615.0f, 0.0f);
    glVertex3f(420.0f, 615.0f, 0.0f);
    glVertex3f(415.0f, 640.0f, 0.0f);


    glVertex3f(400.0f, 615.0f, 0.0f);
    glVertex3f(412.0f, 615.0f, 0.0f);
    glVertex3f(403.0f, 635.0f, 0.0f);

    glVertex3f(417.0f, 615.0f, 0.0f);
    glVertex3f(425.0f, 615.0f, 0.0f);
    glVertex3f(425.0f, 640.0f, 0.0f);



    glVertex3f(317.0f, 615.0f, 0.0f);
    glVertex3f(325.0f, 615.0f, 0.0f);
    glVertex3f(325.0f, 640.0f, 0.0f);
    glVertex3f(310.0f, 615.0f, 0.0f);
    glVertex3f(320.0f, 615.0f, 0.0f);
    glVertex3f(315.0f, 640.0f, 0.0f);
    glVertex3f(300.0f, 615.0f, 0.0f);
    glVertex3f(312.0f, 615.0f, 0.0f);
    glVertex3f(303.0f, 635.0f, 0.0f);


    glVertex3f(217.0f, 615.0f, 0.0f);
    glVertex3f(225.0f, 615.0f, 0.0f);
    glVertex3f(225.0f, 640.0f, 0.0f);
    glVertex3f(210.0f, 615.0f, 0.0f);
    glVertex3f(220.0f, 615.0f, 0.0f);
    glVertex3f(215.0f, 640.0f, 0.0f);
    glVertex3f(200.0f, 615.0f, 0.0f);
    glVertex3f(212.0f, 615.0f, 0.0f);
    glVertex3f(203.0f, 635.0f, 0.0f);



    glVertex3f(257.0f, 615.0f, 0.0f);
    glVertex3f(265.0f, 615.0f, 0.0f);
    glVertex3f(265.0f, 640.0f, 0.0f);
    glVertex3f(250.0f, 615.0f, 0.0f);
    glVertex3f(260.0f, 615.0f, 0.0f);
    glVertex3f(255.0f, 640.0f, 0.0f);
    glVertex3f(240.0f, 615.0f, 0.0f);
    glVertex3f(252.0f, 615.0f, 0.0f);
    glVertex3f(243.0f, 635.0f, 0.0f);


    glPopMatrix();
    glEnd();
}

void tree() {
    glPushMatrix();
    glColor3f(0.5f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex3f(750.0f, 340.0f, 0.0f);
    glVertex3f(790.0f, 340.0f, 0.0f);
    glVertex3f(775.0f, 635.0f, 0.0f);
    glVertex3f(765.0f, 635.0f, 0.0f);
    glEnd();
    glColor3f(0.0f, 0.8f, 0.0f);
    circle(50, 50, 750, 635);
    circle(30, 50, 800, 635);
    circle(30, 50, 800, 680);
    circle(30, 50, 760, 690);



    glPopMatrix();
    glEnd();


}


void tree1() {
    glPushMatrix();
    glColor3f(0.5f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex3f(960.0f, 340.0f, 0.0f);
    glVertex3f(980.0f, 340.0f, 0.0f);
    glVertex3f(975.0f, 380.0f, 0.0f);
    glVertex3f(965.0f, 380.0f, 0.0f);
    glEnd();
    glColor3ub(39, 174, 96);
    glBegin(GL_TRIANGLES);
    glVertex3f(940.0f, 380.0f, 0.0f);
    glVertex3f(1000.0f, 380.0f, 0.0f);
    glVertex3f(970.0f, 420.0f, 0.0f);


    glVertex3f(945.0f, 400.0f, 0.0f);
    glVertex3f(995.0f, 400.0f, 0.0f);
    glVertex3f(970.0f, 450.0f, 0.0f);


    glVertex3f(950.0f, 420.0f, 0.0f);
    glVertex3f(990.0f, 420.0f, 0.0f);
    glVertex3f(970.0f, 460.0f, 0.0f);






    glPopMatrix();
    glEnd();


}


void tree2() {
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(20, 90, 50);

    glVertex3f(600.0f, 610.0f, 0.0f);
    glVertex3f(615.0f, 610.0f, 0.0f);
    glVertex3f(612.0f, 640.0f, 0.0f);
    glVertex3f(604.0f, 640.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(583.0f, 640.0f, 0.0f);
    glVertex3f(633.0f, 640.0f, 0.0f);
    glVertex3f(608.0f, 665.0f, 0.0f);

    glVertex3f(588.0f, 655.0f, 0.0f);
    glVertex3f(628.0f, 655.0f, 0.0f);
    glVertex3f(608.0f, 675.0f, 0.0f);


    glPopMatrix();
    glEnd();
}

void sky() {
    glPushMatrix();

    glBegin(GL_QUADS);

    glColor3ub(133, 193, 233);
    glVertex3f(0.0f, 650.0f, 0.0f);

    glColor3ub(93, 173, 226);
    glVertex3f(1000.0f, 650.0f, 0.0f);


    glColor3ub(52, 152, 219);
    glVertex3f(1000.0f, 1000.0f, 0.0f);


    glColor3ub(217, 136, 128);
    glVertex3f(0.0f, 1000.0f, 0.0f);
    glEnd();
    glPopMatrix();
}


void sun1() {
    // glColor3ub(203, 67, 53);
    // circle(30, 50, 50, 930);
}

void khalijayga() {
    glPushMatrix();

    glColor3ub(171, 235, 198);
    glBegin(GL_QUADS);
    glVertex3f(0.0f, 600.0f, 0.0f);
    glVertex3f(1000.0f, 600.0f, 0.0f);
    glVertex3f(1000.0f, 650.0f, 0.0f);
    glVertex3f(0.0f, 650.0f, 0.0f);
    glPopMatrix();
    glEnd();
}


void table() {
    glPushMatrix();

    glColor3ub(203, 67, 53);
    glBegin(GL_QUADS);

    glVertex3f(360.0f, 420.0f, 0.0f);
    glVertex3f(460.0f, 420.0f, 0.0f);
    glVertex3f(430.0f, 370.0f, 0.0f);
    glVertex3f(330.0f, 370.0f, 0.0f);


    glVertex3f(360.0f, 420.0f, 0.0f);
    glVertex3f(370.0f, 420.0f, 0.0f);
    glVertex3f(370.0f, 320.0f, 0.0f);
    glVertex3f(360.0f, 320.0f, 0.0f);


    glVertex3f(460.0f, 420.0f, 0.0f);
    glVertex3f(450.0f, 420.0f, 0.0f);
    glVertex3f(450.0f, 320.0f, 0.0f);
    glVertex3f(460.0f, 320.0f, 0.0f);


    glVertex3f(430.0f, 370.0f, 0.0f);
    glVertex3f(420.0f, 370.0f, 0.0f);
    glVertex3f(420.0f, 290.0f, 0.0f);
    glVertex3f(430.0f, 290.0f, 0.0f);


    glVertex3f(330.0f, 370.0f, 0.0f);
    glVertex3f(340.0f, 370.0f, 0.0f);
    glVertex3f(340.0f, 290.0f, 0.0f);
    glVertex3f(330.0f, 290.0f, 0.0f);



    glPopMatrix();
    glEnd();
}


void man() {
    glPushMatrix();

    glColor3ub(0, 0, 0);
    circle(15, 25, 410, 560);


    glBegin(GL_QUADS);
    glColor3ub(255, 250, 0);

    glVertex3f(403.0f, 537.0f, 0.0f);
    glVertex3f(417.0f, 537.0f, 0.0f);
    glVertex3f(417.0f, 520.0f, 0.0f);
    glVertex3f(403.0f, 520.0f, 0.0f);


    glColor3ub(255, 0, 0);

    glVertex3f(385.0f, 520.0f, 0.0f);
    glVertex3f(435.0f, 520.0f, 0.0f);
    glVertex3f(435.0f, 400.0f, 0.0f);
    glVertex3f(385.0f, 400.0f, 0.0f);


    glColor3ub(255, 0, 240);

    glVertex3f(435.0f, 520.0f, 0.0f);
    glVertex3f(460.0f, 470.0f, 0.0f);
    glVertex3f(450.0f, 465.0f, 0.0f);
    glVertex3f(435.0f, 500.0f, 0.0f);



    glVertex3f(430.0f, 430.0f, 0.0f);
    glVertex3f(460.0f, 470.0f, 0.0f);
    glVertex3f(450.0f, 480.0f, 0.0f);
    glVertex3f(430.0f, 440.0f, 0.0f);

    glPopMatrix();
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    background();
    train_line();
    draw_train_line();





    river();
    table();
    man();
    movingTrain();

    khalijayga();
    sky();
    smallTree();
    tree1();
    home();
    // sun1();
    movingsun();
    movingCloud();
    movingCloud1();
    hill();

    tree();

    tree2();




    float x, y, rx, ry;
    int i = 0;
    float angle;
    GLfloat PI = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (i = 0;i < 100;i++)
    {
        angle = 2 * PI * i / 100;
        glVertex2f(x + (cos(angle) * rx), y + (sin(angle) * ry));
    }


    glEnd();

    glFlush();
}




int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Transformation");

    init();
    glutDisplayFunc(display);



    glutMainLoop();
    return 0;
}