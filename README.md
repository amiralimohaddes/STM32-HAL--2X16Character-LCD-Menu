# STM32-HAL--2X16Character-LCD-Menu
This Project Shows how to create Menus for 2x16 character LCD for STM32 using state machine methode


functions:

1 - To update menus on LCD
```c
void update_menu(void){
   switch (menu) {
    
    case 1:
      lcd_clear();
      lcd_puts(">MenuItem1");
      lcd_gotoxy(0, 1);
      lcd_puts(" MenuItem2");
      break;
    case 2:
      lcd_clear();
      lcd_puts(" MenuItem1");
      lcd_gotoxy(0, 1);
      lcd_puts(">MenuItem2");
      break;
    case 3:
      lcd_clear();
      lcd_puts(">MenuItem3");
      lcd_gotoxy(0, 1);
      lcd_puts(" MenuItem4");
      break;
    case 4:
      lcd_clear();
      lcd_puts(" MenuItem3");
      lcd_gotoxy(0, 1);
      lcd_puts(">MenuItem4");
      break;
    case 5:
      menu = 1;
      break;
  }
}
```
2 - To choose betwheen menus.
```c
void executeAction(void) {
  switch (menu) {
    case 1:
      action1();
      break;
    case 2:
      action2();
      break;
    case 3:
      action3();
      break;
    case 4:
      action4();
      break;
  }
}
```





