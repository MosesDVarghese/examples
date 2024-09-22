#include <gtk/gtk.h>

#include "exampleapp.h"

int
main (int argc, char *argv[])
{
  return g_application_run (G_APPLICATION (example_app_new ()), argc, argv);
}

// run 
// gcc -o app $(pkg-config --cflags --libs gtk4) main.c exampleapp.c exampleappwin.c && ./app
//
