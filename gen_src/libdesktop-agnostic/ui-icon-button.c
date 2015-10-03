/* ui-icon-button.c generated by valac, the Vala compiler
 * generated from ui-icon-button.vala, do not modify */

/*
 * Desktop Agnostic Library: Icon chooser button.
 *
 * Copyright (C) 2009 Mark Lee <libdesktop-agnostic@lazymalevolence.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * Author : Mark Lee <libdesktop-agnostic@lazymalevolence.com>
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk-pixbuf/gdk-pixdata.h>


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
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

struct _DesktopAgnosticUIIconButtonPrivate {
	char* _icon;
	DesktopAgnosticUIIconType _icon_type;
	DesktopAgnosticUIIconChooserDialog* _dialog;
};


static gpointer desktop_agnostic_ui_icon_button_parent_class = NULL;

GType desktop_agnostic_ui_icon_button_get_type (void);
GType desktop_agnostic_ui_icon_type_get_type (void);
GType desktop_agnostic_ui_icon_chooser_dialog_get_type (void);
#define DESKTOP_AGNOSTIC_UI_ICON_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON, DesktopAgnosticUIIconButtonPrivate))
enum  {
	DESKTOP_AGNOSTIC_UI_ICON_BUTTON_DUMMY_PROPERTY,
	DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON,
	DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON_TYPE
};
void desktop_agnostic_ui_icon_button_set_icon (DesktopAgnosticUIIconButton* self, const char* value);
DesktopAgnosticUIIconButton* desktop_agnostic_ui_icon_button_new (const char* icon);
DesktopAgnosticUIIconButton* desktop_agnostic_ui_icon_button_construct (GType object_type, const char* icon);
DesktopAgnosticUIIconChooserDialog* desktop_agnostic_ui_icon_chooser_dialog_new (void);
DesktopAgnosticUIIconChooserDialog* desktop_agnostic_ui_icon_chooser_dialog_construct (GType object_type);
static void desktop_agnostic_ui_icon_button_on_icon_selected (DesktopAgnosticUIIconButton* self, DesktopAgnosticUIIconChooserDialog* dialog);
static void _desktop_agnostic_ui_icon_button_on_icon_selected_desktop_agnostic_ui_icon_chooser_dialog_icon_selected (DesktopAgnosticUIIconChooserDialog* _sender, gpointer self);
static void desktop_agnostic_ui_icon_button_on_clicked (DesktopAgnosticUIIconButton* self);
GdkPixbuf* desktop_agnostic_ui_icon_chooser_dialog_get_selected_pixbuf (DesktopAgnosticUIIconChooserDialog* self);
const char* desktop_agnostic_ui_icon_chooser_dialog_get_selected_icon (DesktopAgnosticUIIconChooserDialog* self);
DesktopAgnosticUIIconType desktop_agnostic_ui_icon_chooser_dialog_get_selected_icon_type (DesktopAgnosticUIIconChooserDialog* self);
const char* desktop_agnostic_ui_icon_button_get_icon (DesktopAgnosticUIIconButton* self);
DesktopAgnosticUIIconType desktop_agnostic_ui_icon_button_get_icon_type (DesktopAgnosticUIIconButton* self);
static void _desktop_agnostic_ui_icon_button_on_clicked_gtk_button_clicked (GtkButton* _sender, gpointer self);
static GObject * desktop_agnostic_ui_icon_button_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void desktop_agnostic_ui_icon_button_finalize (GObject* obj);
static void desktop_agnostic_ui_icon_button_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void desktop_agnostic_ui_icon_button_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);



DesktopAgnosticUIIconButton* desktop_agnostic_ui_icon_button_construct (GType object_type, const char* icon) {
	DesktopAgnosticUIIconButton * self;
	g_return_val_if_fail (icon != NULL, NULL);
	self = g_object_newv (object_type, 0, NULL);
	desktop_agnostic_ui_icon_button_set_icon (self, icon);
	return self;
}


DesktopAgnosticUIIconButton* desktop_agnostic_ui_icon_button_new (const char* icon) {
	return desktop_agnostic_ui_icon_button_construct (DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON, icon);
}


static void _desktop_agnostic_ui_icon_button_on_icon_selected_desktop_agnostic_ui_icon_chooser_dialog_icon_selected (DesktopAgnosticUIIconChooserDialog* _sender, gpointer self) {
	desktop_agnostic_ui_icon_button_on_icon_selected (self, _sender);
}


static void desktop_agnostic_ui_icon_button_on_clicked (DesktopAgnosticUIIconButton* self) {
	g_return_if_fail (self != NULL);
	if (self->priv->_dialog == NULL) {
		GtkWidget* parent;
		DesktopAgnosticUIIconChooserDialog* _tmp0_;
		gboolean _tmp1_ = FALSE;
		parent = NULL;
		parent = gtk_widget_get_toplevel ((GtkWidget*) self);
		self->priv->_dialog = (_tmp0_ = g_object_ref_sink (desktop_agnostic_ui_icon_chooser_dialog_new ()), _g_object_unref0 (self->priv->_dialog), _tmp0_);
		g_signal_connect_object (self->priv->_dialog, "icon-selected", (GCallback) _desktop_agnostic_ui_icon_button_on_icon_selected_desktop_agnostic_ui_icon_chooser_dialog_icon_selected, self, 0);
		if (GTK_WIDGET_TOPLEVEL (parent)) {
			_tmp1_ = GTK_IS_WINDOW (parent);
		} else {
			_tmp1_ = FALSE;
		}
		if (_tmp1_) {
			GtkWindow* parent_window;
			GtkWidget* _tmp2_;
			parent_window = NULL;
			parent_window = (_tmp2_ = parent, GTK_IS_WINDOW (_tmp2_) ? ((GtkWindow*) _tmp2_) : NULL);
			if (parent_window != gtk_window_get_transient_for ((GtkWindow*) self->priv->_dialog)) {
				gtk_window_set_transient_for ((GtkWindow*) self->priv->_dialog, parent_window);
			}
			gtk_window_set_modal ((GtkWindow*) self->priv->_dialog, gtk_window_get_modal (parent_window));
		}
	}
	gtk_window_present ((GtkWindow*) self->priv->_dialog);
}


static void desktop_agnostic_ui_icon_button_on_icon_selected (DesktopAgnosticUIIconButton* self, DesktopAgnosticUIIconChooserDialog* dialog) {
	GtkWidget* _tmp0_;
	char* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (dialog != NULL);
	gtk_image_set_from_pixbuf ((_tmp0_ = gtk_button_get_image ((GtkButton*) self), GTK_IS_IMAGE (_tmp0_) ? ((GtkImage*) _tmp0_) : NULL), desktop_agnostic_ui_icon_chooser_dialog_get_selected_pixbuf (dialog));
	self->priv->_icon = (_tmp1_ = g_strdup (desktop_agnostic_ui_icon_chooser_dialog_get_selected_icon (dialog)), _g_free0 (self->priv->_icon), _tmp1_);
	self->priv->_icon_type = desktop_agnostic_ui_icon_chooser_dialog_get_selected_icon_type (dialog);
	g_signal_emit_by_name (self, "icon-selected");
}


const char* desktop_agnostic_ui_icon_button_get_icon (DesktopAgnosticUIIconButton* self) {
	const char* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_icon;
	return result;
}


void desktop_agnostic_ui_icon_button_set_icon (DesktopAgnosticUIIconButton* self, const char* value) {
	char* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_icon = (_tmp0_ = g_strdup (value), _g_free0 (self->priv->_icon), _tmp0_);
	if (g_path_is_absolute (value)) {
		GtkImage* _tmp1_;
		self->priv->_icon_type = DESKTOP_AGNOSTIC_UI_ICON_TYPE_FILE;
		gtk_button_set_image ((GtkButton*) self, (GtkWidget*) (_tmp1_ = g_object_ref_sink ((GtkImage*) gtk_image_new_from_file (value))));
		_g_object_unref0 (_tmp1_);
	} else {
		GtkImage* _tmp2_;
		self->priv->_icon_type = DESKTOP_AGNOSTIC_UI_ICON_TYPE_THEMED;
		gtk_button_set_image ((GtkButton*) self, (GtkWidget*) (_tmp2_ = g_object_ref_sink ((GtkImage*) gtk_image_new_from_icon_name (value, GTK_ICON_SIZE_DIALOG))));
		_g_object_unref0 (_tmp2_);
	}
	g_object_notify ((GObject *) self, "icon");
}


DesktopAgnosticUIIconType desktop_agnostic_ui_icon_button_get_icon_type (DesktopAgnosticUIIconButton* self) {
	DesktopAgnosticUIIconType result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_icon_type;
	return result;
}


static void _desktop_agnostic_ui_icon_button_on_clicked_gtk_button_clicked (GtkButton* _sender, gpointer self) {
	desktop_agnostic_ui_icon_button_on_clicked (self);
}


static GObject * desktop_agnostic_ui_icon_button_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DesktopAgnosticUIIconButton * self;
	parent_class = G_OBJECT_CLASS (desktop_agnostic_ui_icon_button_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = DESKTOP_AGNOSTIC_UI_ICON_BUTTON (obj);
	{
		g_signal_connect_object ((GtkButton*) self, "clicked", (GCallback) _desktop_agnostic_ui_icon_button_on_clicked_gtk_button_clicked, self, 0);
	}
	return obj;
}


static void desktop_agnostic_ui_icon_button_class_init (DesktopAgnosticUIIconButtonClass * klass) {
	desktop_agnostic_ui_icon_button_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DesktopAgnosticUIIconButtonPrivate));
	G_OBJECT_CLASS (klass)->get_property = desktop_agnostic_ui_icon_button_get_property;
	G_OBJECT_CLASS (klass)->set_property = desktop_agnostic_ui_icon_button_set_property;
	G_OBJECT_CLASS (klass)->constructor = desktop_agnostic_ui_icon_button_constructor;
	G_OBJECT_CLASS (klass)->finalize = desktop_agnostic_ui_icon_button_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON, g_param_spec_string ("icon", "icon", "icon", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON_TYPE, g_param_spec_enum ("icon-type", "icon-type", "icon-type", DESKTOP_AGNOSTIC_UI_TYPE_ICON_TYPE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_signal_new ("icon_selected", DESKTOP_AGNOSTIC_UI_TYPE_ICON_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void desktop_agnostic_ui_icon_button_instance_init (DesktopAgnosticUIIconButton * self) {
	self->priv = DESKTOP_AGNOSTIC_UI_ICON_BUTTON_GET_PRIVATE (self);
	self->priv->_icon_type = DESKTOP_AGNOSTIC_UI_ICON_TYPE_NONE;
	self->priv->_dialog = NULL;
}


static void desktop_agnostic_ui_icon_button_finalize (GObject* obj) {
	DesktopAgnosticUIIconButton * self;
	self = DESKTOP_AGNOSTIC_UI_ICON_BUTTON (obj);
	_g_free0 (self->priv->_icon);
	_g_object_unref0 (self->priv->_dialog);
	G_OBJECT_CLASS (desktop_agnostic_ui_icon_button_parent_class)->finalize (obj);
}


GType desktop_agnostic_ui_icon_button_get_type (void) {
	static GType desktop_agnostic_ui_icon_button_type_id = 0;
	if (desktop_agnostic_ui_icon_button_type_id == 0) {
		static const GTypeInfo g_define_type_info = { sizeof (DesktopAgnosticUIIconButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) desktop_agnostic_ui_icon_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DesktopAgnosticUIIconButton), 0, (GInstanceInitFunc) desktop_agnostic_ui_icon_button_instance_init, NULL };
		desktop_agnostic_ui_icon_button_type_id = g_type_register_static (GTK_TYPE_BUTTON, "DesktopAgnosticUIIconButton", &g_define_type_info, 0);
	}
	return desktop_agnostic_ui_icon_button_type_id;
}


static void desktop_agnostic_ui_icon_button_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DesktopAgnosticUIIconButton * self;
	self = DESKTOP_AGNOSTIC_UI_ICON_BUTTON (object);
	switch (property_id) {
		case DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON:
		g_value_set_string (value, desktop_agnostic_ui_icon_button_get_icon (self));
		break;
		case DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON_TYPE:
		g_value_set_enum (value, desktop_agnostic_ui_icon_button_get_icon_type (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void desktop_agnostic_ui_icon_button_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	DesktopAgnosticUIIconButton * self;
	self = DESKTOP_AGNOSTIC_UI_ICON_BUTTON (object);
	switch (property_id) {
		case DESKTOP_AGNOSTIC_UI_ICON_BUTTON_ICON:
		desktop_agnostic_ui_icon_button_set_icon (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}




