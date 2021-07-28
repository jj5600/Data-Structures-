ArrayManipulation.cpp ArrayManipulationPtr.cpp
------------------------
Menu Driven program that utilizes arrays. 
Function passes arrays via value vs  Ptr function passes via ref.
Functionality includes: row swap , display, count vowels, count user given char,exit.

func dec: void swapcol(char[][COL],int ROW); vs void swapcol(char* point);

func call:swapcol(words,ROW); vs  swapcol(point);

func def: void swapcol(char words[][COL],int ROW) vs  void swapcol(char * point)

Ptr def:
char * point=words //where words is char array
Ptr access: *(point + i)\

------------------------

