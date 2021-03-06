/*
MIT License

Copyright (c) 2017 Juan de Urtubey

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "Defines.c"
bool loopStatus;

int limit(int min, int val, int max) {
    if(min > max) {
        min = min ^ max;
        max = max ^ min;
        min = min ^ max;
    }
    if(val < min) {val = min;}
    if(val > max) {val = max;}
    return val;
}

void infiniteLoop() {
    loopStatus = true;
    while(loopstatus) {
        if(LOOP_CURRENT >= loopMax-5) {
    	    LOOP_CURRENT = 0;
        }
    }
}

void loop(S_STATUS status) {
    switch(status) {
        case ON:
            loopStatus = true;
            break;
        case OFF:
            loopStatus = false;
            break;
    }
}

void setTimer(int max, int current) {
    clearTimer(T1);
    loopMax = max;
    LOOP_CURRENT = current;
}

bool checkLoop() {
    return (LOOP_CURRENT <= loopMax);
}

int sRound(float number) {
    return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}
