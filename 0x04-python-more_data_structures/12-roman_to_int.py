#!/usr/bin/python3
def roman_to_int(roman_string):
    if isinstance(roman_string, str) is False or roman_string is None:
        return 0
    numerals = [
           ('I', 1), ('V', 5), ('X', 10), ('L', 50),
           ('C', 100), ('D', 500), ('M', 1000)
         ]
    before_tens = 0
    result, flag, is_single = 0, 0, 0
    for i in roman_string:
        for n in range(len(numerals)):
            if i == numerals[n][0]:
                check_tens1 = i == 'V' or i == 'X' or i == 'L'
                check_tens2 = i == 'C' or i == 'D' or i == 'M'
                if check_tens1 or check_tens2:
                    result += numerals[n][1] - before_tens
                    before_tens = 0
                    is_single = 1
                elif i == 'I' and is_single == 1:
                    result += numerals[n][1]
                elif i == 'I' or i == 'V' or i == 'C':
                    before_tens = numerals[n][1]
                    is_single = 1
                    break
                break
    return result
