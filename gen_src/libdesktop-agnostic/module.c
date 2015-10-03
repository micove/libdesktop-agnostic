/* module.c generated by valac, the Vala compiler
 * generated from module.vala, do not modify */

/*
 * Init function for the library.
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
#include <gmodule.h>
#include <glib/gstdio.h>
#include <build-config.h>


#define DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER (desktop_agnostic_module_loader_get_type ())
#define DESKTOP_AGNOSTIC_MODULE_LOADER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER, DesktopAgnosticModuleLoader))
#define DESKTOP_AGNOSTIC_MODULE_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER, DesktopAgnosticModuleLoaderClass))
#define DESKTOP_AGNOSTIC_IS_MODULE_LOADER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER))
#define DESKTOP_AGNOSTIC_IS_MODULE_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER))
#define DESKTOP_AGNOSTIC_MODULE_LOADER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER, DesktopAgnosticModuleLoaderClass))

typedef struct _DesktopAgnosticModuleLoader DesktopAgnosticModuleLoader;
typedef struct _DesktopAgnosticModuleLoaderClass DesktopAgnosticModuleLoaderClass;
typedef struct _DesktopAgnosticModuleLoaderPrivate DesktopAgnosticModuleLoaderPrivate;
#define _g_module_close0(var) ((var == NULL) ? NULL : (var = (g_module_close (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_key_file_free0(var) ((var == NULL) ? NULL : (var = (g_key_file_free (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

typedef enum  {
	DESKTOP_AGNOSTIC_MODULE_ERROR_NO_GMODULE
} DesktopAgnosticModuleError;
#define DESKTOP_AGNOSTIC_MODULE_ERROR desktop_agnostic_module_error_quark ()
struct _DesktopAgnosticModuleLoader {
	GObject parent_instance;
	DesktopAgnosticModuleLoaderPrivate * priv;
};

struct _DesktopAgnosticModuleLoaderClass {
	GObjectClass parent_class;
};

struct _DesktopAgnosticModuleLoaderPrivate {
	GModule* module_guesser;
};

typedef GType (*DesktopAgnosticModuleLoaderRegisterModuleFunction) ();
typedef GType (*DesktopAgnosticModuleLoaderGuessModuleFunction) (DesktopAgnosticModuleLoader* loader, const char* library_prefix);

extern GData* desktop_agnostic_modules;
GData* desktop_agnostic_modules = {0};
static char** desktop_agnostic_module_loader_paths;
static gint desktop_agnostic_module_loader_paths_length1;
static char** desktop_agnostic_module_loader_paths = NULL;
static gint desktop_agnostic_module_loader_paths_length1 = 0;
static gint desktop_agnostic_module_loader_paths_size = 0;
static DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_module_loader;
static DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_module_loader = NULL;
static gpointer desktop_agnostic_module_loader_parent_class = NULL;
extern GKeyFile* desktop_agnostic_module_config;
GKeyFile* desktop_agnostic_module_config = NULL;

GQuark desktop_agnostic_module_error_quark (void);
void desktop_agnostic_debug_msg (const char* message);
GType desktop_agnostic_module_loader_get_type (void);
#define DESKTOP_AGNOSTIC_MODULE_LOADER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER, DesktopAgnosticModuleLoaderPrivate))
enum  {
	DESKTOP_AGNOSTIC_MODULE_LOADER_DUMMY_PROPERTY
};
static DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_new (void);
static DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_construct (GType object_type);
DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_get_default (void);
static char** _vala_array_dup1 (char** self, int length);
char** desktop_agnostic_module_loader_get_search_paths (int* result_length1);
GType desktop_agnostic_module_loader_load_from_path (DesktopAgnosticModuleLoader* self, const char* name, const char* path);
GType desktop_agnostic_module_loader_load (DesktopAgnosticModuleLoader* self, const char* name);
gboolean desktop_agnostic_module_loader_is_guess_module_loaded (DesktopAgnosticModuleLoader* self);
static GModule* desktop_agnostic_module_loader_try_load_guess_module (DesktopAgnosticModuleLoader* self, const char* prefix);
GType desktop_agnostic_module_loader_guess_module (DesktopAgnosticModuleLoader* self, const char* library_prefix);
static void desktop_agnostic_module_loader_finalize (GObject* obj);
GType desktop_agnostic_get_module_type (const char* prefix, const char* key, GError** error);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);



GQuark desktop_agnostic_module_error_quark (void) {
	return g_quark_from_static_string ("desktop_agnostic_module_error-quark");
}


void desktop_agnostic_debug_msg (const char* message) {
	g_return_if_fail (message != NULL);
	if (g_getenv ("DESKTOP_AGNOSTIC_MODULE_DEBUG") != NULL) {
		g_debug ("module.vala:35: %s", message);
	}
}


static DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_construct (GType object_type) {
	DesktopAgnosticModuleLoader * self;
	GModule* _tmp0_;
	self = (DesktopAgnosticModuleLoader*) g_object_new (object_type, NULL);
	g_assert (g_module_supported ());
	self->priv->module_guesser = (_tmp0_ = NULL, _g_module_close0 (self->priv->module_guesser), _tmp0_);
	return self;
}


static DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_new (void) {
	return desktop_agnostic_module_loader_construct (DESKTOP_AGNOSTIC_TYPE_MODULE_LOADER);
}


DesktopAgnosticModuleLoader* desktop_agnostic_module_loader_get_default (void) {
	DesktopAgnosticModuleLoader* result;
	if (desktop_agnostic_module_loader_module_loader == NULL) {
		DesktopAgnosticModuleLoader* _tmp0_;
		desktop_agnostic_module_loader_module_loader = (_tmp0_ = desktop_agnostic_module_loader_new (), _g_object_unref0 (desktop_agnostic_module_loader_module_loader), _tmp0_);
	}
	result = desktop_agnostic_module_loader_module_loader;
	return result;
}


static char** _vala_array_dup1 (char** self, int length) {
	char** result;
	int i;
	result = g_new0 (char*, length + 1);
	for (i = 0; i < length; i++) {
		result[i] = g_strdup (self[i]);
	}
	return result;
}


char** desktop_agnostic_module_loader_get_search_paths (int* result_length1) {
	char** result;
	char** _tmp0_;
	char** _tmp1_;
	result = (_tmp1_ = (_tmp0_ = desktop_agnostic_module_loader_paths, (_tmp0_ == NULL) ? ((gpointer) _tmp0_) : _vala_array_dup1 (_tmp0_, desktop_agnostic_module_loader_paths_length1)), *result_length1 = desktop_agnostic_module_loader_paths_length1, _tmp1_);
	return result;
}


GType desktop_agnostic_module_loader_load_from_path (DesktopAgnosticModuleLoader* self, const char* name, const char* path) {
	GType result;
	GModule* module;
	char* _tmp0_;
	GModule* _tmp1_;
	g_return_val_if_fail (self != NULL, 0UL);
	g_return_val_if_fail (name != NULL, 0UL);
	g_return_val_if_fail (path != NULL, 0UL);
	module = NULL;
	desktop_agnostic_debug_msg (_tmp0_ = g_strdup_printf ("Loading plugin with path: '%s'", path));
	_g_free0 (_tmp0_);
	module = (_tmp1_ = g_module_open (path, G_MODULE_BIND_LAZY), _g_module_close0 (module), _tmp1_);
	if (module == NULL) {
		g_critical ("module.vala:99: Could not load the module '%s': %s", path, g_module_error ());
		result = G_TYPE_INVALID;
		_g_module_close0 (module);
		return result;
	} else {
		void* function;
		function = NULL;
		g_module_symbol (module, "register_plugin", &function);
		if (function == NULL) {
			g_critical ("module.vala:110: Could not find entry function for '%s'.", path);
			result = G_TYPE_INVALID;
			_g_module_close0 (module);
			return result;
		} else {
			DesktopAgnosticModuleLoaderRegisterModuleFunction register_plugin = NULL;
			GModule* _tmp2_;
			register_plugin = (DesktopAgnosticModuleLoaderRegisterModuleFunction) function;
			g_datalist_set_data (&desktop_agnostic_modules, name, (_tmp2_ = module, module = NULL, _tmp2_));
			result = register_plugin ();
			_g_module_close0 (module);
			return result;
		}
	}
	_g_module_close0 (module);
}


GType desktop_agnostic_module_loader_load (DesktopAgnosticModuleLoader* self, const char* name) {
	GType result;
	char* path;
	GType module_type;
	g_return_val_if_fail (self != NULL, 0UL);
	g_return_val_if_fail (name != NULL, 0UL);
	path = NULL;
	module_type = G_TYPE_INVALID;
	{
		char** prefix_collection;
		int prefix_collection_length1;
		int prefix_it;
		prefix_collection = desktop_agnostic_module_loader_paths;
		prefix_collection_length1 = desktop_agnostic_module_loader_paths_length1;
		for (prefix_it = 0; prefix_it < desktop_agnostic_module_loader_paths_length1; prefix_it = prefix_it + 1) {
			const char* prefix;
			prefix = prefix_collection[prefix_it];
			{
				gboolean _tmp0_ = FALSE;
				char* _tmp4_;
				char* _tmp3_;
				char* _tmp2_;
				char* _tmp1_;
				char* _tmp5_;
				if (prefix == NULL) {
					_tmp0_ = TRUE;
				} else {
					_tmp0_ = !g_file_test (prefix, G_FILE_TEST_IS_DIR);
				}
				if (_tmp0_) {
					continue;
				}
				path = (_tmp4_ = g_module_build_path (_tmp2_ = g_build_filename (prefix, _tmp1_ = g_path_get_dirname (name), NULL), _tmp3_ = g_path_get_basename (name)), _g_free0 (path), _tmp4_);
				_g_free0 (_tmp3_);
				_g_free0 (_tmp2_);
				_g_free0 (_tmp1_);
				module_type = desktop_agnostic_module_loader_load_from_path (self, name, path);
				desktop_agnostic_debug_msg (_tmp5_ = g_strdup_printf ("Plugin type: %s", g_type_name (module_type)));
				_g_free0 (_tmp5_);
				if (module_type != G_TYPE_INVALID) {
					break;
				}
			}
		}
	}
	if (module_type == G_TYPE_INVALID) {
		char* _tmp8_;
		char* _tmp7_;
		char* _tmp6_;
		path = (_tmp8_ = g_module_build_path (_tmp6_ = g_get_current_dir (), _tmp7_ = g_path_get_basename (name)), _g_free0 (path), _tmp8_);
		_g_free0 (_tmp7_);
		_g_free0 (_tmp6_);
		module_type = desktop_agnostic_module_loader_load_from_path (self, name, path);
		if (module_type == G_TYPE_INVALID) {
			g_warning ("module.vala:155: Could not locate the plugin '%s'.", name);
		}
	}
	result = module_type;
	_g_free0 (path);
	return result;
}


gboolean desktop_agnostic_module_loader_is_guess_module_loaded (DesktopAgnosticModuleLoader* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->module_guesser != NULL;
	return result;
}


static GModule* desktop_agnostic_module_loader_try_load_guess_module (DesktopAgnosticModuleLoader* self, const char* prefix) {
	GModule* result;
	char* library;
	char* path;
	char* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (prefix != NULL, NULL);
	library = g_strdup ("libda-module-guesser");
	path = NULL;
	path = (_tmp0_ = g_module_build_path (prefix, library), _g_free0 (path), _tmp0_);
	result = g_module_open (path, G_MODULE_BIND_LAZY);
	_g_free0 (library);
	_g_free0 (path);
	return result;
}


GType desktop_agnostic_module_loader_guess_module (DesktopAgnosticModuleLoader* self, const char* library_prefix) {
	GType result;
	void* function = NULL;
	DesktopAgnosticModuleLoaderGuessModuleFunction guess_module = NULL;
	g_return_val_if_fail (self != NULL, 0UL);
	g_return_val_if_fail (library_prefix != NULL, 0UL);
	if (self->priv->module_guesser == NULL) {
		{
			char** prefix_collection;
			int prefix_collection_length1;
			int prefix_it;
			prefix_collection = desktop_agnostic_module_loader_paths;
			prefix_collection_length1 = desktop_agnostic_module_loader_paths_length1;
			for (prefix_it = 0; prefix_it < desktop_agnostic_module_loader_paths_length1; prefix_it = prefix_it + 1) {
				const char* prefix;
				prefix = prefix_collection[prefix_it];
				{
					gboolean _tmp0_ = FALSE;
					GModule* _tmp1_;
					if (prefix == NULL) {
						_tmp0_ = TRUE;
					} else {
						_tmp0_ = !g_file_test (prefix, G_FILE_TEST_IS_DIR);
					}
					if (_tmp0_) {
						continue;
					}
					self->priv->module_guesser = (_tmp1_ = desktop_agnostic_module_loader_try_load_guess_module (self, prefix), _g_module_close0 (self->priv->module_guesser), _tmp1_);
					if (self->priv->module_guesser != NULL) {
						break;
					}
				}
			}
		}
		if (self->priv->module_guesser == NULL) {
			GModule* _tmp3_;
			char* _tmp2_;
			self->priv->module_guesser = (_tmp3_ = desktop_agnostic_module_loader_try_load_guess_module (self, _tmp2_ = g_get_current_dir ()), _g_module_close0 (self->priv->module_guesser), _tmp3_);
			_g_free0 (_tmp2_);
		}
	}
	g_assert (self->priv->module_guesser != NULL);
	g_module_symbol (self->priv->module_guesser, "guess_module", &function);
	guess_module = (DesktopAgnosticModuleLoaderGuessModuleFunction) function;
	result = guess_module (self, library_prefix);
	return result;
}


static void desktop_agnostic_module_loader_class_init (DesktopAgnosticModuleLoaderClass * klass) {
	desktop_agnostic_module_loader_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DesktopAgnosticModuleLoaderPrivate));
	G_OBJECT_CLASS (klass)->finalize = desktop_agnostic_module_loader_finalize;
	{
		char** _tmp1_;
		char** _tmp0_ = NULL;
		GData* _tmp2_ = {0};
		desktop_agnostic_module_loader_paths = (_tmp1_ = (_tmp0_ = g_new0 (char*, 3 + 1), _tmp0_[0] = g_strdup (g_getenv ("DESKTOP_AGNOSTIC_MODULE_DIR")), _tmp0_[1] = g_build_filename (LIBDIR, "desktop-agnostic", "modules", NULL), _tmp0_[2] = g_build_filename (g_get_home_dir (), ".local", "lib", "desktop-agnostic", NULL), _tmp0_), desktop_agnostic_module_loader_paths = (_vala_array_free (desktop_agnostic_module_loader_paths, desktop_agnostic_module_loader_paths_length1, (GDestroyNotify) g_free), NULL), desktop_agnostic_module_loader_paths_length1 = 3, desktop_agnostic_module_loader_paths_size = desktop_agnostic_module_loader_paths_length1, _tmp1_);
		desktop_agnostic_modules = (g_datalist_init (&_tmp2_), _tmp2_);
	}
}


static void desktop_agnostic_module_loader_instance_init (DesktopAgnosticModuleLoader * self) {
	self->priv = DESKTOP_AGNOSTIC_MODULE_LOADER_GET_PRIVATE (self);
}


static void desktop_agnostic_module_loader_finalize (GObject* obj) {
	DesktopAgnosticModuleLoader * self;
	self = DESKTOP_AGNOSTIC_MODULE_LOADER (obj);
	_g_module_close0 (self->priv->module_guesser);
	G_OBJECT_CLASS (desktop_agnostic_module_loader_parent_class)->finalize (obj);
}


GType desktop_agnostic_module_loader_get_type (void) {
	static GType desktop_agnostic_module_loader_type_id = 0;
	if (desktop_agnostic_module_loader_type_id == 0) {
		static const GTypeInfo g_define_type_info = { sizeof (DesktopAgnosticModuleLoaderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) desktop_agnostic_module_loader_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DesktopAgnosticModuleLoader), 0, (GInstanceInitFunc) desktop_agnostic_module_loader_instance_init, NULL };
		desktop_agnostic_module_loader_type_id = g_type_register_static (G_TYPE_OBJECT, "DesktopAgnosticModuleLoader", &g_define_type_info, 0);
	}
	return desktop_agnostic_module_loader_type_id;
}


GType desktop_agnostic_get_module_type (const char* prefix, const char* key, GError** error) {
	GType result;
	GError * _inner_error_;
	DesktopAgnosticModuleLoader* loader;
	char* cfg_file;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (prefix != NULL, 0UL);
	g_return_val_if_fail (key != NULL, 0UL);
	_inner_error_ = NULL;
	loader = NULL;
	cfg_file = g_strdup ("desktop-agnostic.ini");
	if (!g_module_supported ()) {
		_inner_error_ = g_error_new_literal (DESKTOP_AGNOSTIC_MODULE_ERROR, DESKTOP_AGNOSTIC_MODULE_ERROR_NO_GMODULE, "libdesktop-agnostic requires GModule support.");
		{
			g_propagate_error (error, _inner_error_);
			_g_free0 (cfg_file);
			return 0UL;
		}
	}
	loader = desktop_agnostic_module_loader_get_default ();
	if (desktop_agnostic_module_config == NULL) {
		_tmp0_ = !desktop_agnostic_module_loader_is_guess_module_loaded (loader);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		gboolean loaded_config;
		char* system_path;
		char* user_path;
		GKeyFile* _tmp1_;
		char* _tmp2_;
		char* _tmp5_;
		loaded_config = FALSE;
		system_path = NULL;
		user_path = NULL;
		desktop_agnostic_module_config = (_tmp1_ = g_key_file_new (), _g_key_file_free0 (desktop_agnostic_module_config), _tmp1_);
		system_path = (_tmp2_ = g_build_filename (SYSCONFDIR, "xdg", "libdesktop-agnostic", cfg_file, NULL), _g_free0 (system_path), _tmp2_);
		{
			if (g_file_test (system_path, G_FILE_TEST_EXISTS)) {
				char* _tmp3_;
				gboolean _tmp4_;
				desktop_agnostic_debug_msg (_tmp3_ = g_strdup_printf ("Loading module config from the system: '%s'", system_path));
				_g_free0 (_tmp3_);
				_tmp4_ = g_key_file_load_from_file (desktop_agnostic_module_config, system_path, G_KEY_FILE_NONE, &_inner_error_);
				if (_inner_error_ != NULL) {
					if (_inner_error_->domain == G_KEY_FILE_ERROR) {
						goto __catch0_g_key_file_error;
					}
					goto __finally0;
				}
				loaded_config = _tmp4_;
			}
		}
		goto __finally0;
		__catch0_g_key_file_error:
		{
			GError * _error_;
			_error_ = _inner_error_;
			_inner_error_ = NULL;
			{
				g_warning ("module.vala:246: KeyFile error: %s", _error_->message);
				_g_error_free0 (_error_);
			}
		}
		__finally0:
		if (_inner_error_ != NULL) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (system_path);
			_g_free0 (user_path);
			_g_free0 (cfg_file);
			return 0UL;
		}
		user_path = (_tmp5_ = g_build_filename (g_get_user_config_dir (), cfg_file, NULL), _g_free0 (user_path), _tmp5_);
		{
			if (g_file_test (user_path, G_FILE_TEST_EXISTS)) {
				char* _tmp6_;
				gboolean _tmp7_;
				desktop_agnostic_debug_msg (_tmp6_ = g_strdup_printf ("Loading module config from the user directory: '%s'", user_path));
				_g_free0 (_tmp6_);
				_tmp7_ = g_key_file_load_from_file (desktop_agnostic_module_config, user_path, G_KEY_FILE_NONE, &_inner_error_);
				if (_inner_error_ != NULL) {
					if (_inner_error_->domain == G_KEY_FILE_ERROR) {
						goto __catch1_g_key_file_error;
					}
					goto __finally1;
				}
				loaded_config = loaded_config | _tmp7_;
			}
		}
		goto __finally1;
		__catch1_g_key_file_error:
		{
			GError * _error_;
			_error_ = _inner_error_;
			_inner_error_ = NULL;
			{
				g_warning ("module.vala:261: KeyFile error: %s", _error_->message);
				_g_error_free0 (_error_);
			}
		}
		__finally1:
		if (_inner_error_ != NULL) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (system_path);
			_g_free0 (user_path);
			_g_free0 (cfg_file);
			return 0UL;
		}
		_g_free0 (system_path);
		_g_free0 (user_path);
	}
	if (g_key_file_has_group (desktop_agnostic_module_config, "DEFAULT")) {
		char* _tmp8_;
		char* _tmp9_;
		char* _tmp10_;
		char* library;
		_tmp8_ = g_key_file_get_string (desktop_agnostic_module_config, "DEFAULT", key, &_inner_error_);
		if (_inner_error_ != NULL) {
			g_propagate_error (error, _inner_error_);
			_g_free0 (cfg_file);
			return 0UL;
		}
		library = (_tmp10_ = g_strdup_printf ("libda-%s-%s", prefix, _tmp9_ = _tmp8_), _g_free0 (_tmp9_), _tmp10_);
		result = desktop_agnostic_module_loader_load (loader, library);
		_g_free0 (library);
		_g_free0 (cfg_file);
		return result;
	} else {
		char* library_prefix;
		desktop_agnostic_debug_msg ("No module config files found, falling back to guessing.");
		library_prefix = g_strdup_printf ("libda-%s-", prefix);
		result = desktop_agnostic_module_loader_guess_module (loader, library_prefix);
		_g_free0 (library_prefix);
		_g_free0 (cfg_file);
		return result;
	}
	_g_free0 (cfg_file);
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}




