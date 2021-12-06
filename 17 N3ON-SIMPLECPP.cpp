#include<simplecpp>

#include<fstream>

#define SND_FILENAME 0x20000
#define SND_LOOP 8
#define SND_ASYNC 1

int z = 540;
int z2 = z; ///colision

int count_3 = 0;
int w = 1;
int dis = 0;
int highscore = 0;
int ch;
ifstream inp;
ofstream outp;
void menu(int highscore);
void play_game() {
z = 540;
                z2 = z; ///colision
    Rectangle rb(400, 400, 800, 800);

    Circle cm(150, 1200, 800);
    cm.setColor(COLOR(100, 72, 60));
    cm.setFill();

    Circle cm1(500, 1200, 800);
    cm1.setColor(COLOR(112, 72, 60));
    cm1.setFill();

    Circle cm3(600, 1100, 500);
    cm3.setColor(COLOR(16, 100,45));
    cm3.setFill();

    Circle cm5(500, 1100, 500);
    cm5.setColor(COLOR(16, 82,45));
    cm5.setFill();

    Circle cm4(650,1100, 450);
    cm4.setColor(COLOR(173, 216,230));
    cm4.setFill();

    Circle p1(635,630, 10);
    p1.setColor(COLOR(236, 188,180));
    p1.setFill();

    Circle p2(633,620, 6);
    p2.setColor(COLOR(255, 188,180));
    p2.setFill();

    Circle p3(630,640, 3);
    p3.setColor(COLOR(255, 188,180));
    p3.setFill();

    Circle p4(640,640, 3);
    p4.setColor(COLOR(255, 188,180));
    p4.setFill();

    Circle p5(625,615, 3);
    p5.setColor(COLOR(255, 188,180));
    p5.setFill();

    Circle p6(645,620, 3);
    p6.setColor(COLOR(255, 188,180));
    p6.setFill();

    Circle p7(630,618, 1);
    p7.setColor(COLOR(0, 0,0));
    p7.setFill();

    Circle p8(635,620, 1);
    p8.setColor(COLOR(0, 0,0));
    p8.setFill();

    Circle p9(632,624, 1);
    p9.setColor(COLOR(0, 0,0));
    p9.setFill();

        double x=60,ij=1;
        double treep[][2] = {{580-x,630},{600-x,575},{620-x,630}};
        Polygon tr(0, 30, treep, 3);
        tr.setColor(COLOR(34, 139, 34));
        tr.setFill();
        double treep2[][2] = {{580-x,700},{600-x,600},{620-x,700}};
        Polygon tr2(0, 30, treep2, 3);
        tr2.setColor(COLOR(34, 139, 34));
        tr2.setFill();

        ij++;
        double treep3[][2] = {{580-ij*x,630},{600-ij*x,580},{620-ij*x,630}};
        Polygon tr3(0, 30, treep3, 3);
        tr3.setColor(COLOR(0, 128, 0));
        tr3.setFill();
        double treep4[][2] = {{580-ij*x,700},{600-ij*x,600},{620-ij*x,700}};
        Polygon tr4(0, 30, treep4, 3);
        tr4.setColor(COLOR(0, 128, 0));
        tr4.setFill();
        ij++;

        double treep5[][2] = {{580-ij*x,630},{600-ij*x,580},{620-ij*x,630}};
        Polygon tr5(0, 30, treep5, 3);
        tr5.setColor(COLOR(50, 205, 50));
        tr5.setFill();
        double treep6[][2] = {{580-ij*x,700},{600-ij*x,600},{620-ij*x,700}};
        Polygon tr6(0, 30, treep6, 3);
        tr6.setColor(COLOR(50, 205, 50));
        tr6.setFill();

        ij++;
        double treep7[][2] = {{580-ij*x,630},{600-ij*x,575},{620-ij*x,630}};
        Polygon tr7(0, 30, treep7, 3);
        tr7.setColor(COLOR(34, 139, 34));
        tr7.setFill();
        double treep8[][2] = {{580-ij*x,700},{600-ij*x,600},{620-ij*x,700}};
        Polygon tr8(0, 30, treep8, 3);
        tr8.setColor(COLOR(34, 139, 34));
        tr8.setFill();

        ij++;
        double treep9[][2] = {{580-ij*x,630},{600-ij*x,580},{620-ij*x,630}};
        Polygon tr9(0, 30, treep9, 3);
        tr9.setColor(COLOR(34, 139, 34));
        tr9.setFill();
        double treep10[][2] = {{580-ij*x,700},{600-ij*x,600},{620-ij*x,700}};
        Polygon tr10(0, 30, treep10, 3);
        tr10.setColor(COLOR(34, 139, 34));
        tr10.setFill();

        ij++;
        double treep19[][2] = {{580-ij*x,630},{600-ij*x,573},{620-ij*x,630}};
        Polygon tr19(0, 30, treep19, 3);
        tr19.setColor(COLOR(34, 139, 34));
        tr19.setFill();
        double treep20[][2] = {{580-ij*x,700},{600-ij*x,600},{620-ij*x,700}};
        Polygon tr20(0, 30, treep20, 3);
        tr20.setColor(COLOR(34, 139, 34));
        tr20.setFill();


        double ij1=0;
        double treep11[][2] = {{580+ij1*x,630},{600+ij1*x,582},{620+ij1*x,630}};
        Polygon tr11(0, 30, treep11, 3);
        tr11.setColor(COLOR(34, 139, 34));
        tr11.setFill();
        double treep12[][2] = {{580+ij1*x,700},{600+ij1*x,600},{620+ij1*x,700}};
        Polygon tr12(0, 30, treep12, 3);
        tr12.setColor(COLOR(34, 139, 34));
        tr12.setFill();

        ij1++;
        double treep13[][2] = {{580+ij1*x,630},{600+ij1*x,580},{620+ij1*x,630}};
        Polygon tr13(0, 30, treep13, 3);
        tr13.setColor(COLOR(50, 205, 50));
        tr13.setFill();
        double treep14[][2] = {{580+ij1*x,705},{600+ij1*x,600},{620+ij1*x,705}};
        Polygon tr14(0, 30, treep14, 3);
        tr14.setColor(COLOR(50, 205, 50));
        tr14.setFill();

        ij1++;
        double treep15[][2] = {{580+ij1*x,630},{600+ij1*x,569},{620+ij1*x,630}};
        Polygon tr15(0, 30, treep15, 3);
        tr15.setColor(COLOR(34, 139, 34));
        tr15.setFill();
        double treep16[][2] = {{580+ij1*x,700},{600+ij1*x,600},{620+ij1*x,700}};
        Polygon tr16(0, 30, treep16, 3);
        tr16.setColor(COLOR(34, 139, 34));
        tr16.setFill();

        ij1++;
        double treep17[][2] = {{580+ij1*x,630},{600+ij1*x,580},{620+ij1*x,630}};
        Polygon tr17(0, 30, treep17, 3);
        tr17.setColor(COLOR(34, 139, 34));
        tr17.setFill();
        double treep18[][2] = {{580+ij1*x,700},{600+ij1*x,600},{620+ij1*x,700}};
        Polygon tr18(0, 30, treep18, 3);
        tr18.setColor(COLOR(34, 139, 34));
        tr18.setFill();

    rb.setFill("BLACK");
    XEvent e1;

    fstream inp;
    inp.open("options.txt", ios:: in | ios::out | ios::app);
    if (inp.is_open()) {
        inp >> highscore;
        inp.close();

    } else {
        highscore = 0;

    }
    while (1) {

        Text t(400, 20, "Alien attack");

        Text att(700, 40, "Level 1: Attack on Earth 2059!");

        //bomb
        Circle c(-130, -130, 15);
        c.setColor(COLOR(100, 10, 2));
        c.setFill();

        //spaceship
        double a[][2] = {
            {
                20,
                40
            },
            {
                40,
                60
            },
            {
                -70,
                60
            },
            {
                -60,
                40
            }
        };

        Polygon p(0, 30, a, 4);
        p.setColor(COLOR(50, 120, 200));
        p.setFill();

        //building

        Rectangle r(60, z, 60, 400); //test
        r.setColor(COLOR(211, 211, 211));
        r.setFill();

        //Stars
        Circle star1(-130, -130, 1);
        star1.setColor(COLOR(255, 255, 255));
        star1.setFill();

        Circle star2(-130, -130, 1);
        star2.setColor(COLOR(255, 255, 255));
        star2.setFill();

        Circle star3(-130, -130, 1);
        star3.setColor(COLOR(255, 255, 255));
        star3.setFill();

        Circle star4(-130, -130, 1);
        star4.setColor(COLOR(255, 255, 255));
        star4.setFill();


        for (int y = 40; y < 800; y = y + 40) {

            c.setColor(COLOR(230, 0, 0));
            Text ul(700, 20, "Score:");
            Text u(780, 20, highscore);
            highscore++;
            outp.open("options.txt");
            outp << highscore;
            outp.close();

            Text obj(675, 695, "Objective: Defuse the Alian's Bomb");

            char * Q[33] = {
                "1+1",
                "1+2",
                "1+3",
                "1+4",
                "1+5",
                "1+6",
                "1+7",
                "1+8",
                "2+2",
                "2+3",
                "2+4",
                "2+5",
                "2+6",
                "2+7",
                "3+3",
                "3+4",
                "3+5",
                "3+6",
                "4+4",
                "4+5",
                "1*1",
                "1*2",
                "1*3",
                "1*4",
                "1*5",
                "1*6",
                "1*7",
                "1*8",
                "1*9",
                "2*2",
                "2*3",
                "2*4",
                "3*3"
            };
            int A[33] = {
                2,
                3,
                4,
                5,
                6,
                7,
                8,
                9,
                4,
                5,
                6,
                7,
                8,
                9,
                6,
                7,
                8,
                9,
                8,
                9,
                1,
                2,
                3,
                4,
                5,
                6,
                7,
                8,
                9,
                4,
                6,
                8,
                9
            };

            int n = randuv(0, 33);
            int sum = A[n] + 48;
            w = 1;

            Text prob(40, 40, Q[n]);

            Circle sst(-40,-40,20);
            sst.setColor(COLOR(50, 120, 200));
            sst.setFill();
            Text name(-40, -40, "RRC");
            for (int x = 40; x < 800; x = x + 10) {
                if (w) prob.moveTo(60, x + 30 + y);

                int an = charFromEvent(e1);

                //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Correct Answer%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
                if (an == (sum) && w) {
                    z2 = z2 - 40;

                    wait(0.2);
                    //prob.~Text();
                    prob.moveTo(-10, -10);

                    c.setColor(COLOR(0, 0, 0));
                    w = 0;

                    break;
                }
                //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Correct Answer%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

                star1.moveTo(randuv(0, 800), randuv(0, 800));

                c.moveTo(60, x + 30 + y);
                sst.moveTo(x + 20, y + 60);
                p.moveTo(x + 30, y + 20);
                name.moveTo(x + 20, y+70);

                star2.moveTo(randuv(0, 800), randuv(0, 800));
                star3.moveTo(randuv(0, 800), randuv(0, 800));
                star4.moveTo(randuv(0, 800), randuv(0, 800));
                wait(0.1);

                //!!!!!!!!!!!!!!!!!!!!!!!!!!Colision!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
                if (y && (x + 280 == z2) && w) //360+210
                {

                    Beep(z, 500);

                    r.moveTo(60, z = z + 140);
                    z2 = z2 + 140;

                    r.setColor(COLOR(211, 211, 211));
                    r.setFill();
                    wait(1);
                }
                //!!!!!!!!!!!!!!!!!!!!!!!!!!Colision!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//

                if (z == 960 || (z / 1.2) - 180 < y) //500 520
                {

                    rb.~Rectangle();
                    r.~Rectangle();
                    p.~Polygon();
                    c.~Circle();
                    obj.~Text();
                    t.~Text();
                    u.~Text();
                    prob.~Text();
                    tr.~Polygon();
                    tr2.~Polygon();
                    tr3.~Polygon();
                    tr4.~Polygon();
                    tr5.~Polygon();
                    tr6.~Polygon();
                    tr7.~Polygon();
                    tr8.~Polygon();
                    tr9.~Polygon();
                    tr10.~Polygon();
                    tr11.~Polygon();
                    tr12.~Polygon();
                    tr13.~Polygon();
                    tr14.~Polygon();
                    tr15.~Polygon();
                    tr16.~Polygon();
                    tr17.~Polygon();
                    tr18.~Polygon();
                    tr19.~Polygon();
                    tr20.~Polygon();
                    name.~Text();
                    sst.~Circle();
                    ul.~Text();
                    att.~Text();
                    star1.~Circle();
                    star2.~Circle();
                    star3.~Circle();
                    star4.~Circle();
                    cm.~Circle();

                    cm1.~Circle();
                    cm5.~Circle();
                    cm3.~Circle();
                    cm4.~Circle();
                    p1.~Circle();
                    p2.~Circle();
                    p3.~Circle();
                    p4.~Circle();
                    p5.~Circle();
                    p6.~Circle();
                    p7.~Circle();
                    p8.~Circle();
                    p9.~Circle();
                    outp.open("options.txt");
                    outp << highscore;
                    Text t3(360, 260, "Total Score:");
                    Text t4(430, 260, highscore);

                    XEvent e4;
                    Text t1(360, 220, "Game Over!");
                    Text t2(410, 300, "Press any key to go back to Menu");
                    t2.setColor(COLOR(255, 0, 0));
                    nextEvent(e4);
                    int an = charFromEvent(e4);
                    if (an) {
                        t1.~Text();
                        t2.~Text();
                        t3.~Text();
                        t4.~Text();
                z = 540;
                z2 = z; ///colision


                        menu(highscore);

                    }

                }

            }
        }

    }

}

void menu(int hs = 100) {

    XEvent e3;

    {

        Text t(400, 20, "ALIEN ATTACK");
        t.setColor(COLOR(255, 0, 0));

        Text t10(700, 50, "High Score: ");
        Text t11(780, 50, hs);

        Text t12(400, 220, "M E N U:");
        Text t13(400, 300, "1: Start Game");
        Text t14(380, 340, "2: Help");
        Text t15(385, 380, "3: Credits");
        Text t16(375, 420, "4: Exit");

        nextEvent(e3);
        ch = charFromEvent(e3);

    }

    while (1) {
        switch (ch) {
        case 49:
            play_game();
            break;
        case 50: {
            XEvent e4;
            Text t1(360, 220, "Controls: Press the correct anwser to disable bomb");
            Text t2(290, 260, "Goal: Get max answers right!");
            Text t3(410, 300, "When you answer a question correctly, you get awarded with point");
            Text t4(385, 340, "But be careful, don't hit the building. It will be GAME OVER");
            Text t5(355, 380, "Play ALIEN ATTACK again to beat your highscore!");
            Text t6(260, 420, "Are you ready? Go!");
            Text t7(280, 460, "Press enter any key to go back!");
            t7.setColor(COLOR(255, 0, 0));
            nextEvent(e4);
            int an = charFromEvent(e4);
            if (an) {
                t1.~Text();
                t2.~Text();
                t3.~Text();
                t4.~Text();
                t5.~Text();
                t6.~Text();
                t7.~Text();

                menu();

            }
        }

        case 51: {
            XEvent e4;
            Text t1(360, 220, "CREDITS:");
            Text t2(390, 260, "Project Members: Reev Dsouza, Ritika Ghanti, Carson Rodrigues");
            Text t3(300, 300, "Teacher Incharge: Ma'am Amrita Naik");
            Text t4(215, 340, "Version:1.0");
            Text t5(260, 380, "Press enter any key to go back!");
            t5.setColor(COLOR(255, 0, 0));
            nextEvent(e4);
            int an = charFromEvent(e4);
            if (an) {
                t1.~Text();
                t2.~Text();
                t3.~Text();
                t4.~Text();
                t5.~Text();
                menu();
            }
        }
        break;
        case 52:
            closeCanvas();
            break;
        default:
            menu();
            break;
        }
    }
}

main_program {
    inp.open("options.txt", ios:: in | ios::out | ios::app);
    if (inp.is_open())
    {
        inp >> highscore;
        inp.close();

    } else {
        highscore = 0;

    }

    initCanvas("Welcome", 800, 800);

    menu(highscore);

}
