# 2. C++
Спроектировать систему классов, где на вход приложение принимает тип объекта (круг, треугольник, прямоугольник) и 
координаты, на выходе выдать площадь объекта.

# Решение
Для решения создадим абстрактный класс `AbstractShape` с виртуальной функцией `Area`, от которого будут наследоваться 
наши фигуры.

 - `Triangle` - класс треугольника, принимает на вход 6 чисел - координаты углов, возвращает площадь.
 - `Rectangle` - класс прямоугольника (на самом деле любого четырехугольника), 
   принимает 8 чисел - координаты углов, возвращает площадь.
 - `Circle` - класс круга, принимает на вход три числа - координаты центра и радиус, возвращает площадь.

Для исполнения программы необходимо запустить файл `main.cpp`, после чего на экране будут выведены дальнейшие инструкции.
