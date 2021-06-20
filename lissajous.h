#ifndef LISSAJOUS_H
#define LISSAJOUS_H


//working
void onecoder_lissajous (void)
{
    float t=0;
    float calcX, calcY;
    float a = (float) a_setting;
    float b = (float) b_setting;

    while (1)
    {
		t += 0.01;
        calcX = (float)A * _oneCoder_sin(a * t + delta);
        calcY = (float)B * _oneCoder_sin(b * t);
        x = (int) calcX + x_offset;
        y = (int) calcY + y_offset;
		plot(x, y);

        if (in_key_pressed( IN_KEY_SCANCODE_SPACE ))
        {
            break;
        }
    }
}

//_sine_Smile
void smile_lissajous (void)
{
    float t=0;
    float calcX, calcY;
    float a = (float) a_setting;
    float b = (float) b_setting;

    while (1)
    {
		t += 0.01;
        calcX = (float)A * S_sine(a * t + delta);
        calcY = (float)B * S_sine(b * t);
        x = (int) calcX + x_offset;
        y = (int) calcY + y_offset;
		plot(x, y);

        if (in_key_pressed( IN_KEY_SCANCODE_SPACE ))
        {
            break;
        }
    }
}

void Q_lissajous (void)
{
    float t=0;
    float calcX, calcY;
    float a = (float) a_setting;
    float b = (float) b_setting;

    while (1)
    {
		t += 0.01;
        calcX = (float)A * Q_sin(a * t + delta);
        calcY = (float)B * Q_sin(b * t);
        x = (int) calcX + x_offset;
        y = (int) calcY + y_offset;
		plot(x, y);

        if (in_key_pressed( IN_KEY_SCANCODE_SPACE ))
        {
            break;
        }
    }
}

void Hella_lissajous (void)
{
    float t=0;
    float calcX, calcY;
    float a = (float) a_setting;
    float b = (float) b_setting;

    while (1)
    {
		t += 0.01;
        calcX = (float)A * hellaSin(a * t + delta);
        calcY = (float)B * hellaSin(b * t);
        x = (int) calcX + x_offset;
        y = (int) calcY + y_offset;
		plot(x, y);

        if (in_key_pressed( IN_KEY_SCANCODE_SPACE ))
        {
            break;
        }
    }
}

//working
void lissajous (void)
{
    float t=0;
    float calcX, calcY;
    float a = (float) a_setting;
    float b = (float) b_setting;

    while (1)
    {
		t += 0.01;
        calcX = (float)A * sin(a * t + delta);
        calcY = (float)B * sin(b * t);
        x = (int) calcX + x_offset;
        y = (int) calcY + y_offset;
		plot(x, y);

        if (in_key_pressed( IN_KEY_SCANCODE_SPACE ))
        {
            break;
        }
    }
}

#endif
//leave blank line after

