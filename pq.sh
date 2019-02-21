#!/bin/bash
a=375
hello=$a
echo hello
echo $hello
echo ${hello}
echo "$hello"
echo "${hello}"

echo
hello="A B  C   D"
echo $hello   # A B C D
echo "$hello" # A B  C   D

echo

echo '$hello'  # $hello
hello=    # Запись пустого значения в переменную.
echo "\$hello  = $hello"
var1=variable1  var2=variable2  var3=variable3
echo
echo "var1=$var1   var2=$var2  var3=$var3"
echo; echo

numbers="один два три"
other_numbers="1 2 3"
echo "numbers = $numbers"
echo "other_numbers = $other_numbers"   # other_numbers = 1 2 3
echo

echo "uninitialized_variable = $uninitialized_variable"
# Неинициализированная переменная содержит "пустое" значение.
uninitialized_variable=   #  Объявление неинициализированной переменной
                          #+ (то же, что и присваивание пустого значения, см. выше).
			  echo "uninitialized_variable = $uninitialized_variable"
			  # Переменная содержит "пустое" значение.

						    uninitialized_variable=23       # Присваивание.
						    unset uninitialized_variable    # Сброс.
						    echo "uninitialized_variable = $uninitialized_variable"
						                                    # Переменная содержит "пустое" значение.

										    echo

										    exit 0
										   echo "$uninitialized"                                # (пустая строка)
										   let "uninitialized += 5"                             # Прибавить 5.
										   echo "$uninitialized"                                # 5
