/* config-schema-type.c generated by valac, the Vala compiler
 * generated from config-schema-type.vala, do not modify */

/*
 * Desktop Agnostic Library: Configuration Schema Abstract Type.
 *
 * Copyright (C) 2008, 2009 Mark Lee <libdesktop-agnostic@lazymalevolence.com>
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
#include <stdlib.h>
#include <string.h>


#define DESKTOP_AGNOSTIC_CONFIG_TYPE_SCHEMA_TYPE (desktop_agnostic_config_schema_type_get_type ())
#define DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_CONFIG_TYPE_SCHEMA_TYPE, DesktopAgnosticConfigSchemaType))
#define DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_CONFIG_TYPE_SCHEMA_TYPE, DesktopAgnosticConfigSchemaTypeClass))
#define DESKTOP_AGNOSTIC_CONFIG_IS_SCHEMA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_CONFIG_TYPE_SCHEMA_TYPE))
#define DESKTOP_AGNOSTIC_CONFIG_IS_SCHEMA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_CONFIG_TYPE_SCHEMA_TYPE))
#define DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_CONFIG_TYPE_SCHEMA_TYPE, DesktopAgnosticConfigSchemaTypeClass))

typedef struct _DesktopAgnosticConfigSchemaType DesktopAgnosticConfigSchemaType;
typedef struct _DesktopAgnosticConfigSchemaTypeClass DesktopAgnosticConfigSchemaTypeClass;
typedef struct _DesktopAgnosticConfigSchemaTypePrivate DesktopAgnosticConfigSchemaTypePrivate;

typedef enum  {
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_PARSE,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_INVALID_METADATA_OPTION,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_INVALID_METADATA_TYPE,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_INVALID_TYPE,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_INVALID_LIST_TYPE,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_TYPE_NAME_EXISTS,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR_TYPE_GTYPE_EXISTS
} DesktopAgnosticConfigSchemaError;
#define DESKTOP_AGNOSTIC_CONFIG_SCHEMA_ERROR desktop_agnostic_config_schema_error_quark ()
struct _DesktopAgnosticConfigSchemaType {
	GObject parent_instance;
	DesktopAgnosticConfigSchemaTypePrivate * priv;
};

struct _DesktopAgnosticConfigSchemaTypeClass {
	GObjectClass parent_class;
	char* (*serialize) (DesktopAgnosticConfigSchemaType* self, GValue* val, GError** error);
	void (*deserialize) (DesktopAgnosticConfigSchemaType* self, const char* serialized, GValue* result, GError** error);
	void (*parse_default_value) (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GValue* result, GError** error);
	GValueArray* (*parse_default_list_value) (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GError** error);
	char* (*get_name) (DesktopAgnosticConfigSchemaType* self);
	GType (*get_schema_type) (DesktopAgnosticConfigSchemaType* self);
};


static gpointer desktop_agnostic_config_schema_type_parent_class = NULL;

GType desktop_agnostic_config_schema_type_get_type (void);
GQuark desktop_agnostic_config_schema_error_quark (void);
enum  {
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_DUMMY_PROPERTY,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_NAME,
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_SCHEMA_TYPE
};
char* desktop_agnostic_config_schema_type_serialize (DesktopAgnosticConfigSchemaType* self, GValue* val, GError** error);
static char* desktop_agnostic_config_schema_type_real_serialize (DesktopAgnosticConfigSchemaType* self, GValue* val, GError** error);
void desktop_agnostic_config_schema_type_deserialize (DesktopAgnosticConfigSchemaType* self, const char* serialized, GValue* result, GError** error);
static void desktop_agnostic_config_schema_type_real_deserialize (DesktopAgnosticConfigSchemaType* self, const char* serialized, GValue* result, GError** error);
void desktop_agnostic_config_schema_type_parse_default_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GValue* result, GError** error);
static void desktop_agnostic_config_schema_type_real_parse_default_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GValue* result, GError** error);
GValueArray* desktop_agnostic_config_schema_type_parse_default_list_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GError** error);
static GValueArray* desktop_agnostic_config_schema_type_real_parse_default_list_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GError** error);
DesktopAgnosticConfigSchemaType* desktop_agnostic_config_schema_type_construct (GType object_type);
char* desktop_agnostic_config_schema_type_get_name (DesktopAgnosticConfigSchemaType* self);
GType desktop_agnostic_config_schema_type_get_schema_type (DesktopAgnosticConfigSchemaType* self);
static void desktop_agnostic_config_schema_type_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);



static char* desktop_agnostic_config_schema_type_real_serialize (DesktopAgnosticConfigSchemaType* self, GValue* val, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	g_critical ("Type `%s' does not implement abstract method `desktop_agnostic_config_schema_type_serialize'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


char* desktop_agnostic_config_schema_type_serialize (DesktopAgnosticConfigSchemaType* self, GValue* val, GError** error) {
	return DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS (self)->serialize (self, val, error);
}


static void desktop_agnostic_config_schema_type_real_deserialize (DesktopAgnosticConfigSchemaType* self, const char* serialized, GValue* result, GError** error) {
	g_return_if_fail (self != NULL);
	g_critical ("Type `%s' does not implement abstract method `desktop_agnostic_config_schema_type_deserialize'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void desktop_agnostic_config_schema_type_deserialize (DesktopAgnosticConfigSchemaType* self, const char* serialized, GValue* result, GError** error) {
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS (self)->deserialize (self, serialized, result, error);
}


static void desktop_agnostic_config_schema_type_real_parse_default_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GValue* result, GError** error) {
	g_return_if_fail (self != NULL);
	g_critical ("Type `%s' does not implement abstract method `desktop_agnostic_config_schema_type_parse_default_value'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void desktop_agnostic_config_schema_type_parse_default_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GValue* result, GError** error) {
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS (self)->parse_default_value (self, schema, group, result, error);
}


static GValueArray* desktop_agnostic_config_schema_type_real_parse_default_list_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	g_critical ("Type `%s' does not implement abstract method `desktop_agnostic_config_schema_type_parse_default_list_value'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GValueArray* desktop_agnostic_config_schema_type_parse_default_list_value (DesktopAgnosticConfigSchemaType* self, GKeyFile* schema, const char* group, GError** error) {
	return DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS (self)->parse_default_list_value (self, schema, group, error);
}


DesktopAgnosticConfigSchemaType* desktop_agnostic_config_schema_type_construct (GType object_type) {
	DesktopAgnosticConfigSchemaType * self;
	self = (DesktopAgnosticConfigSchemaType*) g_object_new (object_type, NULL);
	return self;
}


char* desktop_agnostic_config_schema_type_get_name (DesktopAgnosticConfigSchemaType* self) {
	return DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS (self)->get_name (self);
}


GType desktop_agnostic_config_schema_type_get_schema_type (DesktopAgnosticConfigSchemaType* self) {
	return DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_GET_CLASS (self)->get_schema_type (self);
}


static void desktop_agnostic_config_schema_type_class_init (DesktopAgnosticConfigSchemaTypeClass * klass) {
	desktop_agnostic_config_schema_type_parent_class = g_type_class_peek_parent (klass);
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_CLASS (klass)->serialize = desktop_agnostic_config_schema_type_real_serialize;
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_CLASS (klass)->deserialize = desktop_agnostic_config_schema_type_real_deserialize;
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_CLASS (klass)->parse_default_value = desktop_agnostic_config_schema_type_real_parse_default_value;
	DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_CLASS (klass)->parse_default_list_value = desktop_agnostic_config_schema_type_real_parse_default_list_value;
	G_OBJECT_CLASS (klass)->get_property = desktop_agnostic_config_schema_type_get_property;
	g_object_class_install_property (G_OBJECT_CLASS (klass), DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE_SCHEMA_TYPE, g_param_spec_gtype ("schema-type", "schema-type", "schema-type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void desktop_agnostic_config_schema_type_instance_init (DesktopAgnosticConfigSchemaType * self) {
}


GType desktop_agnostic_config_schema_type_get_type (void) {
	static GType desktop_agnostic_config_schema_type_type_id = 0;
	if (desktop_agnostic_config_schema_type_type_id == 0) {
		static const GTypeInfo g_define_type_info = { sizeof (DesktopAgnosticConfigSchemaTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) desktop_agnostic_config_schema_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DesktopAgnosticConfigSchemaType), 0, (GInstanceInitFunc) desktop_agnostic_config_schema_type_instance_init, NULL };
		desktop_agnostic_config_schema_type_type_id = g_type_register_static (G_TYPE_OBJECT, "DesktopAgnosticConfigSchemaType", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	}
	return desktop_agnostic_config_schema_type_type_id;
}


static void desktop_agnostic_config_schema_type_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DesktopAgnosticConfigSchemaType * self;
	self = DESKTOP_AGNOSTIC_CONFIG_SCHEMA_TYPE (object);
	switch (property_id) {
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}




