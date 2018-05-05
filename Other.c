void reverseNb(double *x, double xmax, double xmin) {
    *x =  (xmax + xmin) - *x;
}

void normalize(double *x,double xmax, double xmin){
        *x=(*x-xmin)/(xmax-xmin);
}

int checkTime(unsigned int *currentTime,unsigned int *lastTime){
        *currentTime=SDL_GetTicks();
        if(*currentTime>*lastTime+SECOND){
                *lastTime=*currentTime;
                return MIN1;
        }
        return MIN0;
}
