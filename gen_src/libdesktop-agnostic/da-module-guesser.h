/* da-module-guesser.h generated by valac 0.10.4, the Vala compiler, do not modify */


#ifndef __DEFAULT_LIBDESKTOP_AGNOSTIC_DA_MODULE_GUESSER_H__
#define __DEFAULT_LIBDESKTOP_AGNOSTIC_DA_MODULE_GUESSER_H__

#include <glib.h>
#include <libdesktop-agnostic/desktop-agnostic.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS



GType guess_module (DesktopAgnosticModuleLoader* loader, const char* library_prefix);


G_END_DECLS

#endif
