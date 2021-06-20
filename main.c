//  zcc +zx -vn -SO3 -m -lm -clib=new main.c -o main -create-app

#define ABS(N) ((N<0)?(-N):(N))
#define abs(N) ((N<0)?(-N):(N))
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))

#pragma printf "%f %ld %d"
#pragma scanf  "%f %ld %d"

#include <arch/zx.h>
#include <math.h>
#include <float.h>
#include <stdio.h>
#include <input.h>

#include "variables.h"
#include "plot.h"
#include "sine_estimator.h"
#include "lissajous.h"
#include "rose.h"

void printOptions (void);

void set_a()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-50 Current = %d\n", a_setting);
	printf("\n");
	printf("Try 2,  larger is wider");
	printf("\n");
	scanf("%d", &a_setting);
}

void set_b()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-50 Current = %d\n", b_setting);
	printf("\n");
	printf("Try 3,  larger is wider");
	printf("\n");
	scanf("%d", &b_setting);
}

void set_A()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-255 Current = %d\n", A);
	printf("\n");
	printf("Try 2,  larger is wider");
	printf("\n");
	scanf("%d", &A);
}

void set_B()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-192 Current = %d\n", B);
	printf("\n");
	printf("Try 3,  larger is wider");
	printf("\n");
	scanf("%d", &B);
}

void set_R()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  0-10 Current = %d", R_setting);
	printf("\n");
	printf("Try 2");
	printf("\n");
	scanf("%d", &R_setting);
}

/*void set_r()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  0-100 Current = %d\n", r_setting);
	printf("\n");
	printf("Try 37");
	printf("\n");
	scanf("%d", &r_setting);
}*/

void set_d()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-10 Current = %d\n", d_setting);
	printf("\n");
	printf("Try 1");
	printf("\n");
	scanf("%d", &d_setting);
}





void set_x_offset()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-255 Current = %d\n", x_offset);
	printf("\n");
	printf("Try 128,  larger is wider");
	printf("\n");
	scanf("%d", &x_offset);
}

void set_y_offset()
{
	zx_cls(PAPER_WHITE | INK_BLUE);
	zx_border (2);
	printf("Input a setting  1-192 Current = %d\n", y_offset);
	printf("\n");
	printf("Try 90,  larger is wider");
	printf("\n");
	scanf("%d", &y_offset);
}

void options1 (void)
{
    //key presses
    while (1)
    {
        if (in_key_pressed( IN_KEY_SCANCODE_1 ))
		{
			in_wait_nokey();
			set_a();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_2 ))
		{
			in_wait_nokey();
			set_b();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_3 ))
		{
			in_wait_nokey();
			set_R();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_4 ))
		{
			in_wait_nokey();
			set_d();//routine
            in_wait_key();
            break;
		}

        //b_setting
        if (in_key_pressed( IN_KEY_SCANCODE_q ))
		{
		    zx_cls(PAPER_WHITE | INK_BLUE);
			in_wait_nokey();
			lissajous();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_w ))
		{
		    //19.93 seconds
		    zx_cls(PAPER_WHITE | INK_BLUE);
			in_wait_nokey();
			onecoder_lissajous();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_e ))
		{
		    //21.3 seconds
		    zx_cls(PAPER_WHITE | INK_BLUE);
			in_wait_nokey();
			smile_lissajous();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_r ))
		{
		    //19.27
		    zx_cls(PAPER_WHITE | INK_BLUE);
			in_wait_nokey();
			Q_lissajous();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_t ))
		{
		    //19.27
		    zx_cls(PAPER_WHITE | INK_BLUE);
			in_wait_nokey();
			Q_lissajous();//routine
            in_wait_key();
            break;
		}


		if (in_key_pressed( IN_KEY_SCANCODE_a ))
		{
		    zx_cls(PAPER_WHITE | INK_RED);
			in_wait_nokey();
			ROSE_TEST();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_s ))
		{
		    zx_cls(PAPER_WHITE | INK_RED);
			in_wait_nokey();
			ROSE_curious();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_d ))
		{
		    zx_cls(PAPER_WHITE | INK_RED);
			in_wait_nokey();
			ROSE_curious2();//routine
            in_wait_key();
            break;
		}

		if (in_key_pressed( IN_KEY_SCANCODE_f ))
		{
		    zx_cls(PAPER_WHITE | INK_RED);
			in_wait_nokey();
			ROSE_curious3();//routine
            in_wait_key();
            break;
		}

        //ROSE_TEST (void)
        if (in_key_pressed( IN_KEY_SCANCODE_z ))
		{
		    zx_cls(PAPER_WHITE | INK_RED);
			in_wait_nokey();
			ROSE_curious();//routine
            in_wait_key();
            break;
		}


    }//end while
}//end options1


void printOptions (void)
{
    {
        zx_cls(PAPER_WHITE | INK_BLUE);
        zx_border (2);
        printf("\x16\x01\x02");

        printf ("Welcome to the Lissajous / ROSE Curve V1.0");
        printf ("\n");
        printf ("press a key for test");
        printf ("\n");

		printf ("1 -           a setting (1) = %d", a_setting);
        printf ("\n");
		printf ("2 -           b setting (2) = %d", b_setting);
		printf ("\n\n");


        printf ("Q- Lissajous OFFICAL SINE");
        printf ("\n");
        printf ("W- Lissajous onecoder estimate");
        printf ("\n");
        printf ("E- Lissajous SMILE estimate");
        printf ("\n");
        printf ("R- Lissajous QSIN estimate");
        printf ("\n");
        printf ("R- Lissajous Hella Sine estimate");

        printf ("\n\n");

        printf ("3 -           R setting (3)= %d", R_setting);
        printf ("\n");
		printf ("4 -           d setting (3)= %d", d_setting);
		printf ("\n\n");
        printf ("A- ROSE Curve");
        printf ("\n\n\n");
        printf ("Press SPACE to STOP drawing");
    }

    options1();
}



void main()
{
	__asm
	ei
	__endasm

	zx_cls(PAPER_WHITE | INK_BLUE);

	yHeight = 190;
	xWidth = 255;
	X_start = 255;
	Y_start = 45;
	sineCycle = 0;
	waveHeight = 40;
	halfHeight = waveHeight / 2;
	freq = 2.0;
    offSet = 46;

    a_setting = 1;
    b_setting = 2;


    amplitude = 10;
//    period = 150;
    phase_shift = 0;
    vertical_shift = 87;

    R_setting = 3;//62.5       changes shape
//    r_setting = 50;//37.5
    d_setting = 3;//62.5

    while (1)
    {
        printOptions();
    }

}

//leave blank line after
