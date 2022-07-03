def detect_leap_year():
    year = int(input("Year: "))
    if year%4 == 0 and year%100 != 0:
        print(f"{year} is a leap year")
    elif year%100 == 0 and year%400 == 0:
        print(f"{year} is a leap year")
    else:
        print(f"{year} is not a leap year")
    return detect_leap_year()

if __name__ == "__main__":
    detect_leap_year()

