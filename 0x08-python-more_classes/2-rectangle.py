#!/usr/bin/python3
"""Contains class that defines a rectangle"""


class Rectangle:
    """Represents a rectangle"""

    def __init__(self, width=0, height=0):
        """Initializes a new rectangle"""
        self.width = width
        self.height = height

    @property
    def width(self) -> int:
        return self.__width

    @width.setter
    def width(self, value) -> None:
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self) -> int:
        return self.__height

    @height.setter
    def height(self, value) -> None:
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self) -> int:
        """Compute the area of a rectangle"""
        return self.__width * self.__height

    def perimeter(self) -> int:
        """Return the perimeter of the rectangle"""
        if self.__width == 0 or self.__height == 0:
            return 0
        return ((self.__width * 2) + (self.__height * 2))
