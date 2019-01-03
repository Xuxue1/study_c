//
// Created by Candy on 2019-01-02.
//

#include "hotel.h"
#include <stdio.h>

int main(void){
    int night;
    double hotel_rate;
    int code;
    
    while((code=menu())!=QUIT){
        
        switch (code){
            case 1:
                hotel_rate = HOTEL1;
                break;
            case 2:
                hotel_rate = HOTEL2;
                break;
            case 3:
                hotel_rate = HOTEL3;
                break;
            case 4:
                hotel_rate = HOTEL4;
                break;
            default:
                hotel_rate = 0.0;
                printf("Ops! \n");
                break;
        }
        night = get_nights();
        show_price(hotel_rate,night);
    }
    printf("Thank you and goodbye.\n");
    return 0;
    
}