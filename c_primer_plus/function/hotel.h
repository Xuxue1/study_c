//
// Created by Candy on 2019-01-02.
//

#ifndef STUDY_C_HOTEL_H
#define STUDY_C_HOTEL_H

#define QUIT        5
#define HOTEL1      180.00
#define HOTEL2      225.00
#define HOTEL3      255.00
#define HOTEL4      355.00
#define DISCOUNT    0.95
#define STARS       "********************************"

int menu(void);

int get_nights(void);

void show_price(double rate,int nights);

#endif //STUDY_C_HOTEL_H
