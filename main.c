//
//  main.c
//
//  Created by Salim Braksa on 1/4/16.
//  Copyright © 2016 Braksa Salim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "navigations.h"

#include <stdarg.h>

int main(int argc, const char * argv[]) {
    
    // Initializer la pile des menus
    stack_menus = new_stack();
    
    // Afficher le menu principal
    show_main_menu();
    
    return 0;
}