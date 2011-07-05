/* test-vfs-trash.c generated by valac 0.10.4, the Vala compiler
 * generated from test-vfs-trash.vala, do not modify */

/*
 * Test program for the Trash VFS backends.
 *
 * Copyright (C) 2008, 2009 Mark Lee <libdesktop-agnostic@lazymalevolence.com>
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
#include <libdesktop-agnostic/vfs.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TYPE_TEST_TRASH (test_trash_get_type ())
#define TEST_TRASH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TEST_TRASH, TestTrash))
#define TEST_TRASH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TEST_TRASH, TestTrashClass))
#define IS_TEST_TRASH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TEST_TRASH))
#define IS_TEST_TRASH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TEST_TRASH))
#define TEST_TRASH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TEST_TRASH, TestTrashClass))

typedef struct _TestTrash TestTrash;
typedef struct _TestTrashClass TestTrashClass;
typedef struct _TestTrashPrivate TestTrashPrivate;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _ParamSpecTestTrash ParamSpecTestTrash;

struct _TestTrash {
	GTypeInstance parent_instance;
	volatile int ref_count;
	TestTrashPrivate * priv;
};

struct _TestTrashClass {
	GTypeClass parent_class;
	void (*finalize) (TestTrash *self);
};

struct _ParamSpecTestTrash {
	GParamSpec parent_instance;
};


static GMainLoop* test_trash_mainloop;
static GMainLoop* test_trash_mainloop = NULL;
static gpointer test_trash_parent_class = NULL;

gpointer test_trash_ref (gpointer instance);
void test_trash_unref (gpointer instance);
GParamSpec* param_spec_test_trash (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_test_trash (GValue* value, gpointer v_object);
void value_take_test_trash (GValue* value, gpointer v_object);
gpointer value_get_test_trash (const GValue* value);
GType test_trash_get_type (void) G_GNUC_CONST;
enum  {
	TEST_TRASH_DUMMY_PROPERTY
};
static void test_trash_on_file_count_changed (DesktopAgnosticVFSTrash* t);
static gint test_trash_main (char** args, int args_length1);
static void _test_trash_on_file_count_changed_desktop_agnostic_vfs_trash_file_count_changed (DesktopAgnosticVFSTrash* _sender, gpointer self);
TestTrash* test_trash_new (void);
TestTrash* test_trash_construct (GType object_type);
static void test_trash_finalize (TestTrash* obj);



static void test_trash_on_file_count_changed (DesktopAgnosticVFSTrash* t) {
	g_return_if_fail (t != NULL);
	g_message ("test-vfs-trash.vala:30: Number of files in the trash: %u\n", desktop_agnostic_vfs_trash_get_file_count (t));
	g_main_loop_quit (test_trash_mainloop);
}


static void _test_trash_on_file_count_changed_desktop_agnostic_vfs_trash_file_count_changed (DesktopAgnosticVFSTrash* _sender, gpointer self) {
	test_trash_on_file_count_changed (_sender);
}


static gint test_trash_main (char** args, int args_length1) {
	gint result = 0;
	GError * _inner_error_ = NULL;
	{
		DesktopAgnosticVFSTrash* t;
		GMainLoop* _tmp0_;
		desktop_agnostic_vfs_init (&_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
		t = desktop_agnostic_vfs_trash_get_default (&_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
		g_signal_connect (t, "file-count-changed", (GCallback) _test_trash_on_file_count_changed_desktop_agnostic_vfs_trash_file_count_changed, NULL);
		test_trash_mainloop = (_tmp0_ = g_main_loop_new (NULL, TRUE), _g_main_loop_unref0 (test_trash_mainloop), _tmp0_);
		g_main_loop_run (test_trash_mainloop);
		desktop_agnostic_vfs_shutdown (&_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		{
			g_critical ("test-vfs-trash.vala:46: Error: %s", err->message);
			_g_error_free0 (err);
		}
	}
	__finally0:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return 0;
	}
	result = 0;
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return test_trash_main (argv, argc);
}


TestTrash* test_trash_construct (GType object_type) {
	TestTrash* self = (TestTrash*) g_type_create_instance (object_type);
	return self;
}


TestTrash* test_trash_new (void) {
	return test_trash_construct (TYPE_TEST_TRASH);
}


static void value_test_trash_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_test_trash_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		test_trash_unref (value->data[0].v_pointer);
	}
}


static void value_test_trash_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = test_trash_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_test_trash_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_test_trash_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		TestTrash* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = test_trash_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_test_trash_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	TestTrash** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = test_trash_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_test_trash (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecTestTrash* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_TEST_TRASH), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_test_trash (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_TEST_TRASH), NULL);
	return value->data[0].v_pointer;
}


void value_set_test_trash (GValue* value, gpointer v_object) {
	TestTrash* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_TEST_TRASH));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_TEST_TRASH));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		test_trash_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		test_trash_unref (old);
	}
}


void value_take_test_trash (GValue* value, gpointer v_object) {
	TestTrash* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_TEST_TRASH));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_TEST_TRASH));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		test_trash_unref (old);
	}
}


static void test_trash_class_init (TestTrashClass * klass) {
	test_trash_parent_class = g_type_class_peek_parent (klass);
	TEST_TRASH_CLASS (klass)->finalize = test_trash_finalize;
}


static void test_trash_instance_init (TestTrash * self) {
	self->ref_count = 1;
}


static void test_trash_finalize (TestTrash* obj) {
	TestTrash * self;
	self = TEST_TRASH (obj);
}


GType test_trash_get_type (void) {
	static volatile gsize test_trash_type_id__volatile = 0;
	if (g_once_init_enter (&test_trash_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_test_trash_init, value_test_trash_free_value, value_test_trash_copy_value, value_test_trash_peek_pointer, "p", value_test_trash_collect_value, "p", value_test_trash_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (TestTrashClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) test_trash_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TestTrash), 0, (GInstanceInitFunc) test_trash_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType test_trash_type_id;
		test_trash_type_id = g_type_register_fundamental (g_type_fundamental_next (), "TestTrash", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&test_trash_type_id__volatile, test_trash_type_id);
	}
	return test_trash_type_id__volatile;
}


gpointer test_trash_ref (gpointer instance) {
	TestTrash* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void test_trash_unref (gpointer instance) {
	TestTrash* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		TEST_TRASH_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}




