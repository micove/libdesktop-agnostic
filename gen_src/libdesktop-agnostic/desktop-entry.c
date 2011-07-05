/* desktop-entry.c generated by valac 0.10.4, the Vala compiler
 * generated from desktop-entry.vala, do not modify */

/*
 * Desktop Agnostic Library: Desktop Entry interface.
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
#include <stdlib.h>
#include <string.h>
#include <libdesktop-agnostic/vfs.h>
#include <libdesktop-agnostic/desktop-agnostic.h>


#define DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY_LAUNCH_FLAGS (desktop_agnostic_fdo_desktop_entry_launch_flags_get_type ())

#define DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY_TYPE (desktop_agnostic_fdo_desktop_entry_type_get_type ())

#define DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY (desktop_agnostic_fdo_desktop_entry_get_type ())
#define DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY, DesktopAgnosticFDODesktopEntry))
#define DESKTOP_AGNOSTIC_FDO_IS_DESKTOP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY))
#define DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY, DesktopAgnosticFDODesktopEntryIface))

typedef struct _DesktopAgnosticFDODesktopEntry DesktopAgnosticFDODesktopEntry;
typedef struct _DesktopAgnosticFDODesktopEntryIface DesktopAgnosticFDODesktopEntryIface;
#define _g_free0(var) ((var == NULL) ? NULL : (var = (g_free (var), NULL)))

typedef enum  {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_ONLY_ONE = 1 << 0,
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_USE_CWD = 1 << 1,
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_DO_NOT_REAP_CHILD = 1 << 2
} DesktopAgnosticFDODesktopEntryLaunchFlags;

typedef enum  {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_UNKNOWN = 0,
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_APPLICATION,
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_LINK,
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_DIRECTORY
} DesktopAgnosticFDODesktopEntryType;

/**
   * Generic, DesktopEntry-related errors.
   */
typedef enum  {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_ERROR_INVALID_FILE,
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_ERROR_NOT_LAUNCHABLE
} DesktopAgnosticFDODesktopEntryError;
#define DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_ERROR desktop_agnostic_fdo_desktop_entry_error_quark ()
struct _DesktopAgnosticFDODesktopEntryIface {
	GTypeInterface parent_iface;
	gboolean (*key_exists) (DesktopAgnosticFDODesktopEntry* self, const char* key);
	gboolean (*get_boolean) (DesktopAgnosticFDODesktopEntry* self, const char* key);
	void (*set_boolean) (DesktopAgnosticFDODesktopEntry* self, const char* key, gboolean value);
	char* (*get_string) (DesktopAgnosticFDODesktopEntry* self, const char* key);
	void (*set_string) (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* value);
	char* (*get_localestring) (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* locale);
	void (*set_localestring) (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* locale, const char* value);
	char** (*get_string_list) (DesktopAgnosticFDODesktopEntry* self, const char* key);
	void (*set_string_list) (DesktopAgnosticFDODesktopEntry* self, const char* key, char** value);
	gboolean (*exists) (DesktopAgnosticFDODesktopEntry* self);
	GPid (*launch) (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticFDODesktopEntryLaunchFlags flags, GSList* documents, GError** error);
	void (*save) (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticVFSFile* new_file, GError** error);
	DesktopAgnosticVFSFile* (*get_file) (DesktopAgnosticFDODesktopEntry* self);
	void (*set_file) (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticVFSFile* value);
	GKeyFile* (*get_keyfile) (DesktopAgnosticFDODesktopEntry* self);
	void (*set_keyfile) (DesktopAgnosticFDODesktopEntry* self, GKeyFile* value);
	void (*set_data) (DesktopAgnosticFDODesktopEntry* self, const char* value);
	DesktopAgnosticFDODesktopEntryType (*get_entry_type) (DesktopAgnosticFDODesktopEntry* self);
	void (*set_entry_type) (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticFDODesktopEntryType value);
	char* (*get_name) (DesktopAgnosticFDODesktopEntry* self);
	void (*set_name) (DesktopAgnosticFDODesktopEntry* self, const char* value);
	char* (*get_icon) (DesktopAgnosticFDODesktopEntry* self);
	void (*set_icon) (DesktopAgnosticFDODesktopEntry* self, const char* value);
};


extern GType* desktop_agnostic_fdo_module_type;
GType* desktop_agnostic_fdo_module_type = NULL;

GType desktop_agnostic_fdo_desktop_entry_launch_flags_get_type (void) G_GNUC_CONST;
GType desktop_agnostic_fdo_desktop_entry_type_get_type (void) G_GNUC_CONST;
GQuark desktop_agnostic_fdo_desktop_entry_error_quark (void);
char* desktop_agnostic_fdo_desktop_entry_type_to_string (DesktopAgnosticFDODesktopEntryType entry_type);
GType desktop_agnostic_fdo_desktop_entry_get_type (void) G_GNUC_CONST;
gboolean desktop_agnostic_fdo_desktop_entry_key_exists (DesktopAgnosticFDODesktopEntry* self, const char* key);
gboolean desktop_agnostic_fdo_desktop_entry_get_boolean (DesktopAgnosticFDODesktopEntry* self, const char* key);
void desktop_agnostic_fdo_desktop_entry_set_boolean (DesktopAgnosticFDODesktopEntry* self, const char* key, gboolean value);
char* desktop_agnostic_fdo_desktop_entry_get_string (DesktopAgnosticFDODesktopEntry* self, const char* key);
void desktop_agnostic_fdo_desktop_entry_set_string (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* value);
char* desktop_agnostic_fdo_desktop_entry_get_localestring (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* locale);
void desktop_agnostic_fdo_desktop_entry_set_localestring (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* locale, const char* value);
char** desktop_agnostic_fdo_desktop_entry_get_string_list (DesktopAgnosticFDODesktopEntry* self, const char* key);
void desktop_agnostic_fdo_desktop_entry_set_string_list (DesktopAgnosticFDODesktopEntry* self, const char* key, char** value);
gboolean desktop_agnostic_fdo_desktop_entry_exists (DesktopAgnosticFDODesktopEntry* self);
GPid desktop_agnostic_fdo_desktop_entry_launch (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticFDODesktopEntryLaunchFlags flags, GSList* documents, GError** error);
void desktop_agnostic_fdo_desktop_entry_save (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticVFSFile* new_file, GError** error);
DesktopAgnosticVFSFile* desktop_agnostic_fdo_desktop_entry_get_file (DesktopAgnosticFDODesktopEntry* self);
void desktop_agnostic_fdo_desktop_entry_set_file (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticVFSFile* value);
GKeyFile* desktop_agnostic_fdo_desktop_entry_get_keyfile (DesktopAgnosticFDODesktopEntry* self);
void desktop_agnostic_fdo_desktop_entry_set_keyfile (DesktopAgnosticFDODesktopEntry* self, GKeyFile* value);
void desktop_agnostic_fdo_desktop_entry_set_data (DesktopAgnosticFDODesktopEntry* self, const char* value);
DesktopAgnosticFDODesktopEntryType desktop_agnostic_fdo_desktop_entry_get_entry_type (DesktopAgnosticFDODesktopEntry* self);
void desktop_agnostic_fdo_desktop_entry_set_entry_type (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticFDODesktopEntryType value);
char* desktop_agnostic_fdo_desktop_entry_get_name (DesktopAgnosticFDODesktopEntry* self);
void desktop_agnostic_fdo_desktop_entry_set_name (DesktopAgnosticFDODesktopEntry* self, const char* value);
char* desktop_agnostic_fdo_desktop_entry_get_icon (DesktopAgnosticFDODesktopEntry* self);
void desktop_agnostic_fdo_desktop_entry_set_icon (DesktopAgnosticFDODesktopEntry* self, const char* value);
GType desktop_agnostic_fdo_get_type (GError** error);
static GType* _g_type_dup (GType* self);
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new (GError** error);
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new_for_file (DesktopAgnosticVFSFile* file, GError** error);
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new_for_keyfile (GKeyFile* keyfile, GError** error);
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new_for_data (const char* data, GError** error);



/**
   * Flags used when launching an application from a desktop entry.
   */
GType desktop_agnostic_fdo_desktop_entry_launch_flags_get_type (void) {
	static volatile gsize desktop_agnostic_fdo_desktop_entry_launch_flags_type_id__volatile = 0;
	if (g_once_init_enter (&desktop_agnostic_fdo_desktop_entry_launch_flags_type_id__volatile)) {
		static const GEnumValue values[] = {{DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_ONLY_ONE, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_ONLY_ONE", "only-one"}, {DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_USE_CWD, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_USE_CWD", "use-cwd"}, {DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_DO_NOT_REAP_CHILD, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_LAUNCH_FLAGS_DO_NOT_REAP_CHILD", "do-not-reap-child"}, {0, NULL, NULL}};
		GType desktop_agnostic_fdo_desktop_entry_launch_flags_type_id;
		desktop_agnostic_fdo_desktop_entry_launch_flags_type_id = g_enum_register_static ("DesktopAgnosticFDODesktopEntryLaunchFlags", values);
		g_once_init_leave (&desktop_agnostic_fdo_desktop_entry_launch_flags_type_id__volatile, desktop_agnostic_fdo_desktop_entry_launch_flags_type_id);
	}
	return desktop_agnostic_fdo_desktop_entry_launch_flags_type_id__volatile;
}


/**
   * The kind of desktop entry.
   *
   * [[http://standards.freedesktop.org/desktop-entry-spec/latest/ar01s05.html]]
   */
GType desktop_agnostic_fdo_desktop_entry_type_get_type (void) {
	static volatile gsize desktop_agnostic_fdo_desktop_entry_type_type_id__volatile = 0;
	if (g_once_init_enter (&desktop_agnostic_fdo_desktop_entry_type_type_id__volatile)) {
		static const GEnumValue values[] = {{DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_UNKNOWN, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_UNKNOWN", "unknown"}, {DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_APPLICATION, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_APPLICATION", "application"}, {DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_LINK, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_LINK", "link"}, {DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_DIRECTORY, "DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_DIRECTORY", "directory"}, {0, NULL, NULL}};
		GType desktop_agnostic_fdo_desktop_entry_type_type_id;
		desktop_agnostic_fdo_desktop_entry_type_type_id = g_enum_register_static ("DesktopAgnosticFDODesktopEntryType", values);
		g_once_init_leave (&desktop_agnostic_fdo_desktop_entry_type_type_id__volatile, desktop_agnostic_fdo_desktop_entry_type_type_id);
	}
	return desktop_agnostic_fdo_desktop_entry_type_type_id__volatile;
}


GQuark desktop_agnostic_fdo_desktop_entry_error_quark (void) {
	return g_quark_from_static_string ("desktop_agnostic_fdo_desktop_entry_error-quark");
}


/**
   * Converts a DesktopEntryType to its string counterpart.
   */
char* desktop_agnostic_fdo_desktop_entry_type_to_string (DesktopAgnosticFDODesktopEntryType entry_type) {
	char* result = NULL;
	switch (entry_type) {
		case DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_APPLICATION:
		{
			result = g_strdup ("Application");
			return result;
		}
		case DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_LINK:
		{
			result = g_strdup ("Link");
			return result;
		}
		case DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_TYPE_DIRECTORY:
		{
			result = g_strdup ("Directory");
			return result;
		}
		default:
		{
			result = g_strdup ("Unknown");
			return result;
		}
	}
}


gboolean desktop_agnostic_fdo_desktop_entry_key_exists (DesktopAgnosticFDODesktopEntry* self, const char* key) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->key_exists (self, key);
}


gboolean desktop_agnostic_fdo_desktop_entry_get_boolean (DesktopAgnosticFDODesktopEntry* self, const char* key) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_boolean (self, key);
}


void desktop_agnostic_fdo_desktop_entry_set_boolean (DesktopAgnosticFDODesktopEntry* self, const char* key, gboolean value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_boolean (self, key, value);
}


char* desktop_agnostic_fdo_desktop_entry_get_string (DesktopAgnosticFDODesktopEntry* self, const char* key) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_string (self, key);
}


void desktop_agnostic_fdo_desktop_entry_set_string (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_string (self, key, value);
}


char* desktop_agnostic_fdo_desktop_entry_get_localestring (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* locale) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_localestring (self, key, locale);
}


void desktop_agnostic_fdo_desktop_entry_set_localestring (DesktopAgnosticFDODesktopEntry* self, const char* key, const char* locale, const char* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_localestring (self, key, locale, value);
}


char** desktop_agnostic_fdo_desktop_entry_get_string_list (DesktopAgnosticFDODesktopEntry* self, const char* key) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_string_list (self, key);
}


void desktop_agnostic_fdo_desktop_entry_set_string_list (DesktopAgnosticFDODesktopEntry* self, const char* key, char** value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_string_list (self, key, value);
}


/**
     * Whether the path specified in the "Exec" key exists. if the entry type is
     * "Application", also checks to see if it's launchable.
     */
gboolean desktop_agnostic_fdo_desktop_entry_exists (DesktopAgnosticFDODesktopEntry* self) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->exists (self);
}


GPid desktop_agnostic_fdo_desktop_entry_launch (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticFDODesktopEntryLaunchFlags flags, GSList* documents, GError** error) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->launch (self, flags, documents, error);
}


void desktop_agnostic_fdo_desktop_entry_save (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticVFSFile* new_file, GError** error) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->save (self, new_file, error);
}


DesktopAgnosticVFSFile* desktop_agnostic_fdo_desktop_entry_get_file (DesktopAgnosticFDODesktopEntry* self) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_file (self);
}


void desktop_agnostic_fdo_desktop_entry_set_file (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticVFSFile* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_file (self, value);
}


GKeyFile* desktop_agnostic_fdo_desktop_entry_get_keyfile (DesktopAgnosticFDODesktopEntry* self) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_keyfile (self);
}


void desktop_agnostic_fdo_desktop_entry_set_keyfile (DesktopAgnosticFDODesktopEntry* self, GKeyFile* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_keyfile (self, value);
}


void desktop_agnostic_fdo_desktop_entry_set_data (DesktopAgnosticFDODesktopEntry* self, const char* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_data (self, value);
}


DesktopAgnosticFDODesktopEntryType desktop_agnostic_fdo_desktop_entry_get_entry_type (DesktopAgnosticFDODesktopEntry* self) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_entry_type (self);
}


void desktop_agnostic_fdo_desktop_entry_set_entry_type (DesktopAgnosticFDODesktopEntry* self, DesktopAgnosticFDODesktopEntryType value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_entry_type (self, value);
}


char* desktop_agnostic_fdo_desktop_entry_get_name (DesktopAgnosticFDODesktopEntry* self) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_name (self);
}


void desktop_agnostic_fdo_desktop_entry_set_name (DesktopAgnosticFDODesktopEntry* self, const char* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_name (self, value);
}


char* desktop_agnostic_fdo_desktop_entry_get_icon (DesktopAgnosticFDODesktopEntry* self) {
	return DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->get_icon (self);
}


void desktop_agnostic_fdo_desktop_entry_set_icon (DesktopAgnosticFDODesktopEntry* self, const char* value) {
	DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY_GET_INTERFACE (self)->set_icon (self, value);
}


static void desktop_agnostic_fdo_desktop_entry_base_init (DesktopAgnosticFDODesktopEntryIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		     * The file object which points to the desktop entry file. Cannot be
		     * constructed in conjunction with either keyfile or data.
		     * Note: these are really construct-only, but construct-only properties
		     * don't work with GModules.
		     */
		g_object_interface_install_property (iface, g_param_spec_object ("file", "file", "file", DESKTOP_AGNOSTIC_VFS_TYPE_FILE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
		/**
		     * The URI of the desktop entry. Cannot be constructed with either file
		     * or data.
		     * Note: these are really construct-only, but construct-only properties
		     * don't work with GModules.
		     */
		g_object_interface_install_property (iface, g_param_spec_pointer ("keyfile", "keyfile", "keyfile", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
		/**
		     * The raw data that is formatted according to the desktop entry
		     * specification. Cannot be constructed in conjunction with either file or
		     * keyfile.
		     * Note: these are really construct-only, but construct-only properties
		     * don't work with GModules.
		     */
		g_object_interface_install_property (iface, g_param_spec_string ("data", "data", "data", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
		/**
		     * The type of desktop entry, corresponding to the "Type" key.
		     */
		g_object_interface_install_property (iface, g_param_spec_enum ("entry-type", "entry-type", "entry-type", DESKTOP_AGNOSTIC_FDO_TYPE_DESKTOP_ENTRY_TYPE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("icon", "icon", "icon", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	}
}


GType desktop_agnostic_fdo_desktop_entry_get_type (void) {
	static volatile gsize desktop_agnostic_fdo_desktop_entry_type_id__volatile = 0;
	if (g_once_init_enter (&desktop_agnostic_fdo_desktop_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DesktopAgnosticFDODesktopEntryIface), (GBaseInitFunc) desktop_agnostic_fdo_desktop_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType desktop_agnostic_fdo_desktop_entry_type_id;
		desktop_agnostic_fdo_desktop_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "DesktopAgnosticFDODesktopEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (desktop_agnostic_fdo_desktop_entry_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&desktop_agnostic_fdo_desktop_entry_type_id__volatile, desktop_agnostic_fdo_desktop_entry_type_id);
	}
	return desktop_agnostic_fdo_desktop_entry_type_id__volatile;
}


static GType* _g_type_dup (GType* self) {
	GType* dup;
	dup = g_new0 (GType, 1);
	memcpy (dup, self, sizeof (GType));
	return dup;
}


static gpointer __g_type_dup0 (gpointer self) {
	return self ? _g_type_dup (self) : NULL;
}


GType desktop_agnostic_fdo_get_type (GError** error) {
	GType result = 0UL;
	GError * _inner_error_ = NULL;
	if (desktop_agnostic_fdo_module_type == NULL) {
		GType _tmp0_;
		GType* _tmp1_;
		_tmp0_ = desktop_agnostic_get_module_type ("fdo", "desktop-entry", &_inner_error_);
		if (_inner_error_ != NULL) {
			g_propagate_error (error, _inner_error_);
			return 0UL;
		}
		desktop_agnostic_fdo_module_type = (_tmp1_ = __g_type_dup0 (&_tmp0_), _g_free0 (desktop_agnostic_fdo_module_type), _tmp1_);
	}
	result = *desktop_agnostic_fdo_module_type;
	return result;
}


/**
   * Convenience method for creating a new desktop entry from scratch.
   */
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new (GError** error) {
	DesktopAgnosticFDODesktopEntry* result = NULL;
	GType type;
	GError * _inner_error_ = NULL;
	type = desktop_agnostic_fdo_get_type (&_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return NULL;
	}
	if (type == G_TYPE_INVALID) {
		result = NULL;
		return result;
	} else {
		GObject* _tmp0_;
		result = DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY ((_tmp0_ = g_object_new (type, NULL), G_IS_INITIALLY_UNOWNED (_tmp0_) ? g_object_ref_sink (_tmp0_) : _tmp0_));
		return result;
	}
}


/**
   * Convenience method for loading a desktop entry via a VFS.File.
   */
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new_for_file (DesktopAgnosticVFSFile* file, GError** error) {
	DesktopAgnosticFDODesktopEntry* result = NULL;
	GType type;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (file != NULL, NULL);
	type = desktop_agnostic_fdo_get_type (&_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return NULL;
	}
	if (type == G_TYPE_INVALID) {
		result = NULL;
		return result;
	} else {
		GObject* _tmp0_;
		result = DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY ((_tmp0_ = g_object_new (type, "file", file, NULL), G_IS_INITIALLY_UNOWNED (_tmp0_) ? g_object_ref_sink (_tmp0_) : _tmp0_));
		return result;
	}
}


/**
   * Convenience method for loading a desktop entry from a KeyFile object.
   */
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new_for_keyfile (GKeyFile* keyfile, GError** error) {
	DesktopAgnosticFDODesktopEntry* result = NULL;
	GType type;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (keyfile != NULL, NULL);
	type = desktop_agnostic_fdo_get_type (&_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return NULL;
	}
	if (type == G_TYPE_INVALID) {
		result = NULL;
		return result;
	} else {
		GObject* _tmp0_;
		result = DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY ((_tmp0_ = g_object_new (type, "keyfile", keyfile, NULL), G_IS_INITIALLY_UNOWNED (_tmp0_) ? g_object_ref_sink (_tmp0_) : _tmp0_));
		return result;
	}
}


/**
   * Convenience method for loading a desktop entry from a string of data.
   */
DesktopAgnosticFDODesktopEntry* desktop_agnostic_fdo_desktop_entry_new_for_data (const char* data, GError** error) {
	DesktopAgnosticFDODesktopEntry* result = NULL;
	GType type;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (data != NULL, NULL);
	type = desktop_agnostic_fdo_get_type (&_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return NULL;
	}
	if (type == G_TYPE_INVALID) {
		result = NULL;
		return result;
	} else {
		GObject* _tmp0_;
		result = DESKTOP_AGNOSTIC_FDO_DESKTOP_ENTRY ((_tmp0_ = g_object_new (type, "data", data, NULL), G_IS_INITIALLY_UNOWNED (_tmp0_) ? g_object_ref_sink (_tmp0_) : _tmp0_));
		return result;
	}
}




