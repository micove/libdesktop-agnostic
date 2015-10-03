/* test-ui-color-button.c generated by valac, the Vala compiler
 * generated from test-ui-color-button.vala, do not modify */

/*
 * Tests the GtkColorButton wrapper class.
 *
 * Copyright (C) 2009 Mark Lee <libdesktop-agnostic@lazymalevolence.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA.
 *
 * Author : Mark Lee <libdesktop-agnostic@lazymalevolence.com>
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <libdesktop-agnostic/ui.h>
#include <libdesktop-agnostic/desktop-agnostic.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_TEST_COLOR_BUTTON (test_color_button_get_type ())
#define TEST_COLOR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TEST_COLOR_BUTTON, TestColorButton))
#define TEST_COLOR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TEST_COLOR_BUTTON, TestColorButtonClass))
#define IS_TEST_COLOR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TEST_COLOR_BUTTON))
#define IS_TEST_COLOR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TEST_COLOR_BUTTON))
#define TEST_COLOR_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TEST_COLOR_BUTTON, TestColorButtonClass))

typedef struct _TestColorButton TestColorButton;
typedef struct _TestColorButtonClass TestColorButtonClass;
typedef struct _TestColorButtonPrivate TestColorButtonPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _TestColorButton {
	GtkWindow parent_instance;
	TestColorButtonPrivate * priv;
};

struct _TestColorButtonClass {
	GtkWindowClass parent_class;
};


static gpointer test_color_button_parent_class = NULL;

GType test_color_button_get_type (void);
enum  {
	TEST_COLOR_BUTTON_DUMMY_PROPERTY
};
static gboolean test_color_button_on_quit (TestColorButton* self, GtkWidget* widget, GdkEvent* event);
static void test_color_button_on_color_set (TestColorButton* self, GtkColorButton* button);
TestColorButton* test_color_button_new (void);
TestColorButton* test_color_button_construct (GType object_type);
gint test_color_button_main (char** args, int args_length1);
static gboolean _test_color_button_on_quit_gtk_widget_delete_event (GtkWidget* _sender, GdkEvent* event, gpointer self);
static void _test_color_button_on_color_set_gtk_color_button_color_set (GtkColorButton* _sender, gpointer self);
static GObject * test_color_button_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);



static gboolean test_color_button_on_quit (TestColorButton* self, GtkWidget* widget, GdkEvent* event) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (widget != NULL, FALSE);
	g_return_val_if_fail (event != NULL, FALSE);
	gtk_main_quit ();
	result = TRUE;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void test_color_button_on_color_set (TestColorButton* self, GtkColorButton* button) {
	GtkColorButton* _tmp0_;
	DesktopAgnosticUIColorButton* real_button;
	char* _tmp1_;
	GdkColor _tmp5_;
	GdkColor _tmp4_;
	GdkColor _tmp2_ = {0};
	GdkColor _tmp3_ = {0};
	g_return_if_fail (self != NULL);
	g_return_if_fail (button != NULL);
	real_button = _g_object_ref0 ((_tmp0_ = button, DESKTOP_AGNOSTIC_UI_IS_COLOR_BUTTON (_tmp0_) ? ((DesktopAgnosticUIColorButton*) _tmp0_) : NULL));
	g_message ("test-ui-color-button.vala:62: Selected color: %s", _tmp1_ = desktop_agnostic_color_to_string (desktop_agnostic_ui_color_button_get_da_color (real_button)));
	_g_free0 (_tmp1_);
	g_assert (gdk_color_equal ((_tmp4_ = (desktop_agnostic_color_get_color (desktop_agnostic_ui_color_button_get_da_color (real_button), &_tmp2_), _tmp2_), &_tmp4_), (_tmp5_ = (gtk_color_button_get_color ((GtkColorButton*) real_button, &_tmp3_), _tmp3_), &_tmp5_)));
	g_assert (desktop_agnostic_color_get_alpha (desktop_agnostic_ui_color_button_get_da_color (real_button)) == gtk_color_button_get_alpha ((GtkColorButton*) real_button));
	gtk_main_quit ();
	_g_object_unref0 (real_button);
}


gint test_color_button_main (char** args, int args_length1) {
	gint result;
	TestColorButton* window;
	TestColorButton* _tmp0_;
	window = NULL;
	gtk_init (&args_length1, &args);
	window = (_tmp0_ = g_object_ref_sink (test_color_button_new ()), _g_object_unref0 (window), _tmp0_);
	gtk_widget_show_all ((GtkWidget*) window);
	gtk_main ();
	result = 0;
	_g_object_unref0 (window);
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return test_color_button_main (argv, argc);
}


TestColorButton* test_color_button_construct (GType object_type) {
	TestColorButton * self;
	self = g_object_newv (object_type, 0, NULL);
	return self;
}


TestColorButton* test_color_button_new (void) {
	return test_color_button_construct (TYPE_TEST_COLOR_BUTTON);
}


static gboolean _test_color_button_on_quit_gtk_widget_delete_event (GtkWidget* _sender, GdkEvent* event, gpointer self) {
	return test_color_button_on_quit (self, _sender, event);
}


static void _test_color_button_on_color_set_gtk_color_button_color_set (GtkColorButton* _sender, gpointer self) {
	test_color_button_on_color_set (self, _sender);
}


static GObject * test_color_button_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	TestColorButton * self;
	GError * _inner_error_;
	parent_class = G_OBJECT_CLASS (test_color_button_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = TEST_COLOR_BUTTON (obj);
	_inner_error_ = NULL;
	{
		GtkVBox* box;
		DesktopAgnosticColor* color;
		GtkLabel* label;
		DesktopAgnosticUIColorButton* button;
		GtkVBox* _tmp0_;
		GtkLabel* _tmp1_;
		DesktopAgnosticColor* _tmp2_;
		DesktopAgnosticColor* _tmp3_;
		DesktopAgnosticUIColorButton* _tmp4_;
		GtkLabel* _tmp5_;
		DesktopAgnosticUIColorButton* _tmp6_;
		box = NULL;
		color = NULL;
		label = NULL;
		button = NULL;
		g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) _test_color_button_on_quit_gtk_widget_delete_event, self, 0);
		box = (_tmp0_ = g_object_ref_sink ((GtkVBox*) gtk_vbox_new (FALSE, 5)), _g_object_unref0 (box), _tmp0_);
		label = (_tmp1_ = g_object_ref_sink ((GtkLabel*) gtk_label_new ("With default color")), _g_object_unref0 (label), _tmp1_);
		gtk_container_add ((GtkContainer*) box, (GtkWidget*) label);
		_tmp2_ = desktop_agnostic_color_new_from_string ("green", &_inner_error_);
		if (_inner_error_ != NULL) {
			_g_object_unref0 (box);
			_g_object_unref0 (color);
			_g_object_unref0 (label);
			_g_object_unref0 (button);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
		}
		color = (_tmp3_ = _tmp2_, _g_object_unref0 (color), _tmp3_);
		desktop_agnostic_color_set_alpha (color, (guint) (G_MAXUSHORT / 2));
		button = (_tmp4_ = g_object_ref_sink (desktop_agnostic_ui_color_button_new_with_color (color)), _g_object_unref0 (button), _tmp4_);
		g_signal_connect_object ((GtkColorButton*) button, "color-set", (GCallback) _test_color_button_on_color_set_gtk_color_button_color_set, self, 0);
		gtk_container_add ((GtkContainer*) box, (GtkWidget*) button);
		label = (_tmp5_ = g_object_ref_sink ((GtkLabel*) gtk_label_new ("Without default color")), _g_object_unref0 (label), _tmp5_);
		gtk_container_add ((GtkContainer*) box, (GtkWidget*) label);
		button = (_tmp6_ = g_object_ref_sink (desktop_agnostic_ui_color_button_new ()), _g_object_unref0 (button), _tmp6_);
		g_signal_connect_object ((GtkColorButton*) button, "color-set", (GCallback) _test_color_button_on_color_set_gtk_color_button_color_set, self, 0);
		gtk_container_add ((GtkContainer*) box, (GtkWidget*) button);
		gtk_container_add ((GtkContainer*) self, (GtkWidget*) box);
		_g_object_unref0 (box);
		_g_object_unref0 (color);
		_g_object_unref0 (label);
		_g_object_unref0 (button);
	}
	return obj;
}


static void test_color_button_class_init (TestColorButtonClass * klass) {
	test_color_button_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->constructor = test_color_button_constructor;
}


static void test_color_button_instance_init (TestColorButton * self) {
}


GType test_color_button_get_type (void) {
	static GType test_color_button_type_id = 0;
	if (test_color_button_type_id == 0) {
		static const GTypeInfo g_define_type_info = { sizeof (TestColorButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) test_color_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TestColorButton), 0, (GInstanceInitFunc) test_color_button_instance_init, NULL };
		test_color_button_type_id = g_type_register_static (GTK_TYPE_WINDOW, "TestColorButton", &g_define_type_info, 0);
	}
	return test_color_button_type_id;
}




