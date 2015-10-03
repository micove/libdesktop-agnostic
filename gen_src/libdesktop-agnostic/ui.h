/* ui.h generated by valac, the Vala compiler, do not modify */


#ifndef __DEFAULT_LIBDESKTOP_AGNOSTIC_UI_H__
#define __DEFAULT_LIBDESKTOP_AGNOSTIC_UI_H__

#include <glib.h>
#include <gtk/gtk.h>
#include <libdesktop-agnostic/desktop-agnostic.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk-pixbuf/gdk-pixdata.h>
#include <libdesktop-agnostic/vfs.h>

G_BEGIN_DECLS


#define DESKTOP_AGNOSTIC_UI_TYPE_COLOR_BUTTON (desktop_agnostic_ui_color_button_get_type ())
#define DESKTOP_AGNOSTIC_UI_COLOR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_UI_TYPE_COLOR_BUTTON, DesktopAgnosticUIColorButton))
#define DESKTOP_AGNOSTIC_UI_COLOR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_UI_TYPE_COLOR_BUTTON, DesktopAgnosticUIColorButtonClass))
#define DESKTOP_AGNOSTIC_UI_IS_COLOR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_UI_TYPE_COLOR_BUTTON))
#define DESKTOP_AGNOSTIC_UI_IS_COLOR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_UI_TYPE_COLOR_BUTTON))
#define DESKTOP_AGNOSTIC_UI_COLOR_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_UI_TYPE_COLOR_BUTTON, DesktopAgnosticUIColorButtonClass))

typedef struct _DesktopAgnosticUIColorButton DesktopAgnosticUIColorButton;
typedef struct _DesktopAgnosticUIColorButtonClass DesktopAgnosticUIColorButtonClass;
typedef struct _DesktopAgnosticUIColorButtonPrivate DesktopAgnosticUIColorButtonPrivate;

#define DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON (desktop_agnostic_ui_icon_button_get_type ())
#define DESKTOP_AGNOSTIC_UI_ICON_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON, DesktopAgnosticUIIconButton))
#define DESKTOP_AGNOSTIC_UI_ICON_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON, DesktopAgnosticUIIconButtonClass))
#define DESKTOP_AGNOSTIC_UI_IS_ICON_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON))
#define DESKTOP_AGNOSTIC_UI_IS_ICON_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON))
#define DESKTOP_AGNOSTIC_UI_ICON_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON, DesktopAgnosticUIIconButtonClass))

typedef struct _DesktopAgnosticUIIconButton DesktopAgnosticUIIconButton;
typedef struct _DesktopAgnosticUIIconButtonClass DesktopAgnosticUIIconButtonClass;
typedef struct _DesktopAgnosticUIIconButtonPrivate DesktopAgnosticUIIconButtonPrivate;

#define DESKTOP_AGNOSTIC_UI_TYPE_ICON_TYPE (desktop_agnostic_ui_icon_type_get_type ())

#define DESKTOP_AGNOSTIC_UI_TYPE_ICON_CHOOSER_DIALOG (desktop_agnostic_ui_icon_chooser_dialog_get_type ())
#define DESKTOP_AGNOSTIC_UI_ICON_CHOOSER_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_UI_TYPE_ICON_CHOOSER_DIALOG, DesktopAgnosticUIIconChooserDialog))
#define DESKTOP_AGNOSTIC_UI_ICON_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_UI_TYPE_ICON_CHOOSER_DIALOG, DesktopAgnosticUIIconChooserDialogClass))
#define DESKTOP_AGNOSTIC_UI_IS_ICON_CHOOSER_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_UI_TYPE_ICON_CHOOSER_DIALOG))
#define DESKTOP_AGNOSTIC_UI_IS_ICON_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_UI_TYPE_ICON_CHOOSER_DIALOG))
#define DESKTOP_AGNOSTIC_UI_ICON_CHOOSER_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_UI_TYPE_ICON_CHOOSER_DIALOG, DesktopAgnosticUIIconChooserDialogClass))

typedef struct _DesktopAgnosticUIIconChooserDialog DesktopAgnosticUIIconChooserDialog;
typedef struct _DesktopAgnosticUIIconChooserDialogClass DesktopAgnosticUIIconChooserDialogClass;
typedef struct _DesktopAgnosticUIIconChooserDialogPrivate DesktopAgnosticUIIconChooserDialogPrivate;

#define DESKTOP_AGNOSTIC_UI_TYPE_LAUNCHER_EDITOR_DIALOG (desktop_agnostic_ui_launcher_editor_dialog_get_type ())
#define DESKTOP_AGNOSTIC_UI_LAUNCHER_EDITOR_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_UI_TYPE_LAUNCHER_EDITOR_DIALOG, DesktopAgnosticUILauncherEditorDialog))
#define DESKTOP_AGNOSTIC_UI_LAUNCHER_EDITOR_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_UI_TYPE_LAUNCHER_EDITOR_DIALOG, DesktopAgnosticUILauncherEditorDialogClass))
#define DESKTOP_AGNOSTIC_UI_IS_LAUNCHER_EDITOR_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_UI_TYPE_LAUNCHER_EDITOR_DIALOG))
#define DESKTOP_AGNOSTIC_UI_IS_LAUNCHER_EDITOR_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_UI_TYPE_LAUNCHER_EDITOR_DIALOG))
#define DESKTOP_AGNOSTIC_UI_LAUNCHER_EDITOR_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_UI_TYPE_LAUNCHER_EDITOR_DIALOG, DesktopAgnosticUILauncherEditorDialogClass))

typedef struct _DesktopAgnosticUILauncherEditorDialog DesktopAgnosticUILauncherEditorDialog;
typedef struct _DesktopAgnosticUILauncherEditorDialogClass DesktopAgnosticUILauncherEditorDialogClass;
typedef struct _DesktopAgnosticUILauncherEditorDialogPrivate DesktopAgnosticUILauncherEditorDialogPrivate;

struct _DesktopAgnosticUIColorButton {
	GtkColorButton parent_instance;
	DesktopAgnosticUIColorButtonPrivate * priv;
};

struct _DesktopAgnosticUIColorButtonClass {
	GtkColorButtonClass parent_class;
};

struct _DesktopAgnosticUIIconButton {
	GtkButton parent_instance;
	DesktopAgnosticUIIconButtonPrivate * priv;
};

struct _DesktopAgnosticUIIconButtonClass {
	GtkButtonClass parent_class;
};

typedef enum  {
	DESKTOP_AGNOSTIC_UI_ICON_TYPE_NONE,
	DESKTOP_AGNOSTIC_UI_ICON_TYPE_THEMED,
	DESKTOP_AGNOSTIC_UI_ICON_TYPE_FILE
} DesktopAgnosticUIIconType;

struct _DesktopAgnosticUIIconChooserDialog {
	GtkDialog parent_instance;
	DesktopAgnosticUIIconChooserDialogPrivate * priv;
};

struct _DesktopAgnosticUIIconChooserDialogClass {
	GtkDialogClass parent_class;
};

struct _DesktopAgnosticUILauncherEditorDialog {
	GtkDialog parent_instance;
	DesktopAgnosticUILauncherEditorDialogPrivate * priv;
};

struct _DesktopAgnosticUILauncherEditorDialogClass {
	GtkDialogClass parent_class;
};


GType desktop_agnostic_ui_color_button_get_type (void);
DesktopAgnosticUIColorButton* desktop_agnostic_ui_color_button_new_with_color (DesktopAgnosticColor* color);
DesktopAgnosticUIColorButton* desktop_agnostic_ui_color_button_construct_with_color (GType object_type, DesktopAgnosticColor* color);
void desktop_agnostic_ui_color_button_set_color (DesktopAgnosticUIColorButton* self, GdkColor* color);
void desktop_agnostic_ui_color_button_set_alpha (DesktopAgnosticUIColorButton* self, guint16 alpha);
DesktopAgnosticUIColorButton* desktop_agnostic_ui_color_button_new (void);
DesktopAgnosticUIColorButton* desktop_agnostic_ui_color_button_construct (GType object_type);
DesktopAgnosticColor* desktop_agnostic_ui_color_button_get_da_color (DesktopAgnosticUIColorButton* self);
void desktop_agnostic_ui_color_button_set_da_color (DesktopAgnosticUIColorButton* self, DesktopAgnosticColor* value);
GType desktop_agnostic_ui_icon_button_get_type (void);
DesktopAgnosticUIIconButton* desktop_agnostic_ui_icon_button_new (const char* icon);
DesktopAgnosticUIIconButton* desktop_agnostic_ui_icon_button_construct (GType object_type, const char* icon);
const char* desktop_agnostic_ui_icon_button_get_icon (DesktopAgnosticUIIconButton* self);
void desktop_agnostic_ui_icon_button_set_icon (DesktopAgnosticUIIconButton* self, const char* value);
GType desktop_agnostic_ui_icon_type_get_type (void);
DesktopAgnosticUIIconType desktop_agnostic_ui_icon_button_get_icon_type (DesktopAgnosticUIIconButton* self);
GType desktop_agnostic_ui_icon_chooser_dialog_get_type (void);
DesktopAgnosticUIIconChooserDialog* desktop_agnostic_ui_icon_chooser_dialog_new (void);
DesktopAgnosticUIIconChooserDialog* desktop_agnostic_ui_icon_chooser_dialog_construct (GType object_type);
const char* desktop_agnostic_ui_icon_chooser_dialog_get_selected_icon (DesktopAgnosticUIIconChooserDialog* self);
GdkPixbuf* desktop_agnostic_ui_icon_chooser_dialog_get_selected_pixbuf (DesktopAgnosticUIIconChooserDialog* self);
DesktopAgnosticUIIconType desktop_agnostic_ui_icon_chooser_dialog_get_selected_icon_type (DesktopAgnosticUIIconChooserDialog* self);
GType desktop_agnostic_ui_launcher_editor_dialog_get_type (void);
DesktopAgnosticUILauncherEditorDialog* desktop_agnostic_ui_launcher_editor_dialog_new (DesktopAgnosticVFSFile* file, DesktopAgnosticVFSFile* output, gboolean standalone);
DesktopAgnosticUILauncherEditorDialog* desktop_agnostic_ui_launcher_editor_dialog_construct (GType object_type, DesktopAgnosticVFSFile* file, DesktopAgnosticVFSFile* output, gboolean standalone);
DesktopAgnosticVFSFile* desktop_agnostic_ui_launcher_editor_dialog_get_file (DesktopAgnosticUILauncherEditorDialog* self);
DesktopAgnosticVFSFile* desktop_agnostic_ui_launcher_editor_dialog_get_output (DesktopAgnosticUILauncherEditorDialog* self);


G_END_DECLS

#endif
