

#include <stdio.h>
#include <stdbool.h>


// 13
#define RECTANGLE 1
#define CIRCLE 2

// 14
#define PI 3.14

// 1, legal as long as you don't add tags
struct { int x, y; } x;
struct { int x, y; } y;

// 2.a
// struct {
//     double real;
//     double imaginary;
// } c1, c2, c3;

// 2.b
// struct {
//     double real;
//     double imaginary;
// } c1 = { 0.0,0.0 }, c2 = { 1.0,0.0 }, c3;


// 3.a

struct complex {
    double real;
    double imaginary;
};

// 4.a
typedef struct {
    double real;
    double imaginary;
} Complex;

// 5
typedef struct {
    int month;
    int day;
    int year;
} Date;

// 6
typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

// 7
typedef struct {
    int numerator;
    int denomirator;
} Fraction;

// 8
typedef struct {
    int red;
    int green;
    int blue;
} Color;


// 10
typedef struct point { int x, y; } Point;
typedef struct { Point upper_left, lower_right; } Rectangle;


// 11
struct {
    double a; // 8
    union {
        char b[4]; // 4
        double c; // 8
        int d; // 4
    } e; // 8
    char f[4]; // 4
} s; // 20


// 13
struct shape {
    int shape_kind;
    Point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s4;




// 3.c
// struct complex make_complex(double real_part, double imaginary_part);

// 4.c
Complex make_complex(double real_part, double imaginary_part);

// 3.d
// struct complex add_complex(struct complex comp1, struct complex comp2);

// 4.d
Complex add_complex(Complex comp1, Complex comp2);

// 5.a
int day_of_year(Date d);

// 5.b
int compare_dates(Date d1, Date d2);

// 6
Time split_time(long total_seconds);

// 7
int gcd(int n, int m);


// 7.a
Fraction to_lowest_terms(Fraction f);

// 7.b 
Fraction add_fractions(Fraction f1, Fraction f2);


// 7.c
Fraction subtract_fractions(Fraction f1, Fraction f2);

// 7.d
Fraction multiply_factions(Fraction f1, Fraction f2);


// 7.e
Fraction divide_factions(Fraction f1, Fraction f2);

// 9
void print_color(Color color);

// 9.a
Color make_color(int red, int green, int blue);

// 9.b
int getRed(Color c);

// 9.c
bool equal_color(Color color1, Color color2);


// 9.d
Color brighter(Color c);

// 9.e
Color darker(Color c);


// 10
void print_rectangle(Rectangle r);


// 10.a
int area(Rectangle r);

// 10.b
Point center(Rectangle r);

// 10.c
Rectangle move(Rectangle r, int x, int y);


// 10.d
bool rects_collide(Rectangle p, Rectangle r);

// 14.a
int shape_area(struct shape s);


// 14.b
struct shape move_shape(struct shape s, int x, int y);


int main(void) {
    // // 3.b
    // struct complex c1 = { 0.0,0.0 }, c2 = make_complex(1.0, 0.0) /* 3.c */, c3;

    // 4.b
    Complex c1 = { 0.0 }, c2 = make_complex(1.0, 0.0) /* 4.c */, c3;

    // 2.c, yes the can, in one statement

    c1 = c2;

    c3 = add_complex(c1, c2); // 3.d

    // // 2.d
    // c3.imaginary = c2.imaginary + c1.imaginary;

    printf("real: %.2lf, imaginary: %.2lf\n", c3.real, c3.imaginary);
    printf("Day of year: %d\n", day_of_year((Date) { .year = 2024, .day = 30, .month = 2 })); // 5.a

    Date date1 = {
        .year = 2024,
        .month = 10,
        .day = 30
    };
    Date date2 = {
      .year = 2024,
      .month = 10,
      .day = 30
    };

    printf("Day of year: %d\n", compare_dates(date1, date2)); // 5.b

    Time t = split_time(2000); // 6

    printf("Hours: %d, Minutes: %d, Seconds: %d\n", t.hours, t.minutes, t.seconds); // 6

    Fraction f1 = {
        .numerator = 12,
        .denomirator = 4,
    };


    printf("Fraction: %d/%d\n", f1.numerator, f1.denomirator); // 7.a
    f1 = to_lowest_terms(f1);
    printf("Fraction (lowest terms): %d/%d\n", f1.numerator, f1.denomirator); // 7.a


    Fraction f2 = {
            .numerator = 1,
            .denomirator = 3,
    };


    Fraction f3 = {
            .numerator = 1,
            .denomirator = 3,
    };

    Fraction f4 = add_fractions(f2, f3); // 7.b
    Fraction f5 = subtract_fractions(f2, f3); // 7.c
    Fraction f6 = multiply_factions(f2, f3); // 7.d
    Fraction f7 = divide_factions(f2, f3); // 7.e



    printf("Fraction 2: %d/%d\n", f2.numerator, f2.denomirator); // 7.b
    printf("Fraction 3: %d/%d\n", f3.numerator, f3.denomirator); // 7.b
    printf("Fraction 4 (2+3): %d/%d\n", f4.numerator, f4.denomirator); // 7.b
    printf("Fraction 5 (2-3): %d/%d\n", f5.numerator, f5.denomirator); // 7.c
    printf("Fraction 6 (2*3): %d/%d\n", f6.numerator, f6.denomirator); // 7.d
    printf("Fraction 7 (2/3): %d/%d\n", f7.numerator, f7.denomirator); // 7.e

    // 8.a
    const Color MAGNETA = { 255,0,255 };

    // 8 b
    const Color MAGNETA99 = { .red = 255,.blue = 255 };

    print_color(make_color(800, 0, 50)); // 9.a

    printf("Red value of color: %d\n", getRed(make_color(200, 100, 0))); // 9.b
    Color color1 = make_color(200, 9, 0);
    Color color2 = make_color(200, 9, 0);
    printf("Color 1: \n");
    print_color(color1);
    printf("Color 2: \n");
    print_color(color2);
    printf("Colors are equal: %s\n", equal_color(color1, color2) ? "True" : "False"); // 9.c
    print_color(brighter(make_color(23, 13, 4)));
    print_color(darker(make_color(23, 13, 4)));

    Rectangle r1 = {
        .upper_left = {
            .x = 100,
            .y = 100,
        },
        .lower_right = {
            .x = 104,
            .y = 104,
        }
    };

    Rectangle r2 = {
        .upper_left = {
            .x = 100,
            .y = 100,
        },
        .lower_right = {
            .x = 102,
            .y = 102,
        }
    };
    print_rectangle(r1);
    printf("The area of rect: %d\n", area(r1));
    printf("The center of rect: (%d,%d)\n", center(r1).x, center(r1).y);
    r1 = move(r1, 10, 5);
    print_rectangle(r1);
    printf("Rects collide: %s\n", rects_collide(r2, r1) ? "True" : "False"); // 9.c
    printf("Size of struct: %d\n", sizeof(s)); // 11


    // 12
    s4.shape_kind = RECTANGLE; // 12.a LEGAL
    s4.center.x = 10; // 12.b LEGAl
    // s4.height // 12.c ILLEGAL
    s4.u.rectangle.height = 10; // 12.c LEGAL
    s4.u.rectangle.width = 8; // 12.d LEGAl
    // s4.u.circle = 5; // 12.e ILLEGAL
    s4.u.circle.radius = 5; // 12.e LEGAL
    // s4.u.radius ILLEGAL
    s4.u.circle.radius;  // 12.f LEGAl

}


// 3.c
// struct complex make_complex(double real_part, double imaginary_part) {
//     return (struct complex) {
//         .imaginary = imaginary_part,
//             .real = real_part,
//     };
// }

// 3.d
// struct complex add_complex(struct complex comp1, struct complex comp2) {
//     return (struct complex) {
//         .imaginary = comp1.imaginary + comp2.imaginary,
//             .real = comp1.real + comp2.real,
//     };
// }

// 4.c
Complex make_complex(double real_part, double imaginary_part) {
    return (Complex) {
        .imaginary = imaginary_part,
            .real = real_part,
    };
}

// 4.d
Complex add_complex(Complex comp1, Complex comp2) {
    return (Complex) {
        .imaginary = comp1.imaginary + comp2.imaginary,
            .real = comp1.real + comp2.real,
    };
}

// 5.a
int day_of_year(Date d) {
    int day_of_year = d.day;
    bool isLeap = ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0));

    for (int currentMonth = 1; currentMonth < d.month; currentMonth++) {
        switch (currentMonth) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: day_of_year += 31; break;
            case 2: day_of_year += isLeap ? 29 : 28; break;
            case 4: case 6: case 9: case 11: day_of_year += 30; break;
        }
    }

    return day_of_year;
}


// 5.b
int compare_dates(Date d1, Date d2) {
    int d1_day_of_year = day_of_year(d1);
    int d2_day_of_year = day_of_year(d2);

    if (d1_day_of_year < d2_day_of_year) {
        return -1;
    } else if (d1_day_of_year > d2_day_of_year) {
        return +1;
    } else {
        return 0;
    }
}

// 6
Time split_time(long total_seconds) {
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    return (Time) {
        .hours = hours,
            .minutes = minutes,
            .seconds = seconds,
    };
}

// 7
int gcd(int n, int m) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
}

// 7.a
Fraction to_lowest_terms(Fraction f) {
    int n = gcd(f.numerator, f.denomirator);

    return (Fraction) {
        .numerator = f.numerator / n,
            .denomirator = f.denomirator / n,
    };
}

// 7.b 
Fraction add_fractions(Fraction f1, Fraction f2) {
    int lcm = (f1.denomirator * f2.denomirator) / gcd(f1.denomirator, f2.denomirator);

    Fraction added_fraction = {
        .numerator = (f1.numerator * (lcm / f1.denomirator)) + (f2.numerator * (lcm / f2.denomirator)),
        .denomirator = lcm,
    };

    return to_lowest_terms(added_fraction);
}


// 7.c
Fraction subtract_fractions(Fraction f1, Fraction f2) {
    int lcm = (f1.denomirator * f2.denomirator) / gcd(f1.denomirator, f2.denomirator);

    Fraction subtracted_fraction = {
        .numerator = (f1.numerator * (lcm / f1.denomirator)) - (f2.numerator * (lcm / f2.denomirator)),
        .denomirator = lcm,
    };

    return to_lowest_terms(subtracted_fraction);
}


// 7.d
Fraction multiply_factions(Fraction f1, Fraction f2) {
    int new_num = f1.numerator * f2.numerator;
    int new_denom = f1.denomirator * f2.denomirator;

    return to_lowest_terms((Fraction) {
        .numerator = new_num,
            .denomirator = new_denom,
    });
}

// 7.e
Fraction divide_factions(Fraction f1, Fraction f2) {
    int new_num = f1.numerator * f2.denomirator;
    int new_denom = f1.denomirator * f2.numerator;

    return to_lowest_terms((Fraction) {
        .numerator = new_num,
            .denomirator = new_denom,
    });
}

// 9
void print_color(Color color) {
    printf("Color values are \nRed: %d\nGreen: %d\nBlue: %d\n", color.red, color.green, color.blue);
}

// 9.a
Color make_color(int red, int green, int blue) {
    return (Color) {
        .red = red < 0 ? 0 : red > 255 ? 255 : red,
            .green = green < 0 ? 0 : green > 255 ? 255 : green,
            .blue = blue < 0 ? 0 : blue > 255 ? 255 : blue,
    };
}

// 9.b
int getRed(Color c) {
    return c.red;
}

// 9.c
bool equal_color(Color color1, Color color2) {
    return color1.blue == color2.blue && color1.green == color2.green && color1.red == color2.red;
}


// 9.d
Color brighter(Color c) {
    Color newColor;
    if (c.red == 0 && c.blue == 0 && c.green == 0) {
        newColor = (Color){
            .red = 3,
            .blue = 3,
            .green = 3
        };
    } else if (c.red < 3 || c.blue < 3 || c.green < 3) {
        newColor = (Color){
    .red = (int)(3 / 0.7),
    .blue = (int)(3 / 0.7),
    .green = (int)(3 / 0.7)
        };
    } else {
        newColor = (Color){
         .red = (c.red / 0.7) > 255 ? 255 : (c.red / 0.7),
         .blue = (c.blue / 0.7) > 255 ? 255 : (c.blue / 0.7),
         .green = (c.green / 0.7) > 255 ? 255 : (c.green / 0.7)
        };
    }

    return newColor;
}

// 9.e
Color darker(Color c) {
    Color newColor;
    if (c.red == 0 && c.blue == 0 && c.green == 0) {
        newColor = (Color){
            .red = 3,
            .blue = 3,
            .green = 3
        };
    } else if (c.red < 3 || c.blue < 3 || c.green < 3) {
        newColor = (Color){
    .red = (int)(3 * 0.7),
    .blue = (int)(3 * 0.7),
    .green = (int)(3 * 0.7)
        };
    } else {
        newColor = (Color){
         .red = (c.red * 0.7) > 255 ? 255 : (c.red * 0.7),
         .blue = (c.blue * 0.7) > 255 ? 255 : (c.blue * 0.7),
         .green = (c.green * 0.7) > 255 ? 255 : (c.green * 0.7)
        };
    }

    return newColor;
}



// 9
void print_rectangle(Rectangle r) {
    printf("Rectangle Ponits are \nTop Left: (%d,%d)\nDown Right: (%d,%d)\n",
        r.upper_left.x, r.upper_left.y, r.lower_right.x, r.lower_right.y);
}


// 10.a
int area(Rectangle r) {
    int width = r.lower_right.x - r.upper_left.x;
    int height = r.lower_right.y - r.upper_left.y;
    return width * height;
}

// 10.b
Point center(Rectangle r) {
    return (Point) {
        .x = (r.upper_left.x + r.lower_right.x) / 2,
            .y = (r.upper_left.y + r.lower_right.x) / 2,
    };
}

// 10.c
Rectangle move(Rectangle r, int x, int y) {
    return (Rectangle) {
        .lower_right = {
            .x = r.lower_right.x + x,
            .y = r.lower_right.x + y,
        },
        .upper_left = {
        .x = r.upper_left.x + x,
        .y = r.upper_left.x + y,
        }
    };
}

// 10.d
bool rects_collide(Rectangle p, Rectangle r) {
    if (p.upper_left.x >= r.upper_left.x && p.upper_left.y >= r.upper_left.x
        && p.lower_right.x <= r.lower_right.x && p.lower_right.y <= r.lower_right.y) {
        return true;
    } else {
        return false;
    }
}

// 14.a
int shape_area(struct shape s) {
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.width * s.u.rectangle.height;
    } else {
        return s.u.circle.radius * s.u.circle.radius * 3.14;
    }
}


// 14.b
struct shape move_shape(struct shape s, int x, int y) {
    return (struct shape) {
        .shape_kind = s.shape_kind,
            .center = (Point){
                .x = s.center.x += x,
                .y = s.center.y += y,
        },
        .u = s.u,
    };
}

// 14.c
struct shape scale_shape(struct shape s, double scale) {
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.height *= scale;
        s.u.rectangle.width *= scale;
    } else {
        s.u.circle.radius *= scale;

    }
    return s;
}