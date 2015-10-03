/* vfs-file-monitor-impl-thunar-vfs.c generated by valac 0.10.4, the Vala compiler
 * generated from vfs-file-monitor-impl-thunar-vfs.vala, do not modify */

/*
 * Desktop Agnostic Library: File monitor implementation (with Thunar VFS).
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
#include <libdesktop-agnostic/vfs.h>
#include <thunar-vfs/thunar-vfs.h>


#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS (desktop_agnostic_vfs_file_monitor_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_MONITOR_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_MONITOR_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFSClass))

typedef struct _DesktopAgnosticVFSFileMonitorThunarVFS DesktopAgnosticVFSFileMonitorThunarVFS;
typedef struct _DesktopAgnosticVFSFileMonitorThunarVFSClass DesktopAgnosticVFSFileMonitorThunarVFSClass;
typedef struct _DesktopAgnosticVFSFileMonitorThunarVFSPrivate DesktopAgnosticVFSFileMonitorThunarVFSPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS (desktop_agnostic_vfs_file_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_FILE_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS, DesktopAgnosticVFSFileThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS, DesktopAgnosticVFSFileThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS, DesktopAgnosticVFSFileThunarVFSClass))

typedef struct _DesktopAgnosticVFSFileThunarVFS DesktopAgnosticVFSFileThunarVFS;
typedef struct _DesktopAgnosticVFSFileThunarVFSClass DesktopAgnosticVFSFileThunarVFSClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _thunar_vfs_path_unref0(var) ((var == NULL) ? NULL : (var = (thunar_vfs_path_unref (var), NULL)))

struct _DesktopAgnosticVFSFileMonitorThunarVFS {
	GObject parent_instance;
	DesktopAgnosticVFSFileMonitorThunarVFSPrivate * priv;
};

struct _DesktopAgnosticVFSFileMonitorThunarVFSClass {
	GObjectClass parent_class;
};

struct _DesktopAgnosticVFSFileMonitorThunarVFSPrivate {
	ThunarVfsMonitorHandle* handle;
	DesktopAgnosticVFSFile* file;
	gboolean _cancelled;
};


static gpointer desktop_agnostic_vfs_file_monitor_thunar_vfs_parent_class = NULL;
static DesktopAgnosticVFSFileMonitorIface* desktop_agnostic_vfs_file_monitor_thunar_vfs_desktop_agnostic_vfs_file_monitor_parent_iface = NULL;

GType desktop_agnostic_vfs_file_monitor_thunar_vfs_get_type (void) G_GNUC_CONST;
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFSPrivate))
enum  {
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_DUMMY_PROPERTY,
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_CANCELLED
};
GType desktop_agnostic_vfs_file_thunar_vfs_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSFileMonitorThunarVFS* desktop_agnostic_vfs_file_monitor_thunar_vfs_new (DesktopAgnosticVFSFileThunarVFS* file);
DesktopAgnosticVFSFileMonitorThunarVFS* desktop_agnostic_vfs_file_monitor_thunar_vfs_construct (GType object_type, DesktopAgnosticVFSFileThunarVFS* file);
static void desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback (DesktopAgnosticVFSFileMonitorThunarVFS* self, ThunarVfsMonitor* monitor, ThunarVfsMonitorHandle* handle, ThunarVfsMonitorEvent event, ThunarVfsPath* handle_path, ThunarVfsPath* event_path);
static void _desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback_thunar_vfs_monitor_callback (ThunarVfsMonitor* monitor, ThunarVfsMonitorHandle* handle, ThunarVfsMonitorEvent event, ThunarVfsPath* handle_path, ThunarVfsPath* event_path, gpointer self);
static void desktop_agnostic_vfs_file_monitor_thunar_vfs_real_emit (DesktopAgnosticVFSFileMonitor* base, DesktopAgnosticVFSFile* other, DesktopAgnosticVFSFileMonitorEvent event);
static gboolean desktop_agnostic_vfs_file_monitor_thunar_vfs_real_cancel (DesktopAgnosticVFSFileMonitor* base);
static void desktop_agnostic_vfs_file_monitor_thunar_vfs_finalize (GObject* obj);
static void desktop_agnostic_vfs_file_monitor_thunar_vfs_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);



static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback_thunar_vfs_monitor_callback (ThunarVfsMonitor* monitor, ThunarVfsMonitorHandle* handle, ThunarVfsMonitorEvent event, ThunarVfsPath* handle_path, ThunarVfsPath* event_path, gpointer self) {
	desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback (self, monitor, handle, event, handle_path, event_path);
}


DesktopAgnosticVFSFileMonitorThunarVFS* desktop_agnostic_vfs_file_monitor_thunar_vfs_construct (GType object_type, DesktopAgnosticVFSFileThunarVFS* file) {
	DesktopAgnosticVFSFileMonitorThunarVFS * self = NULL;
	DesktopAgnosticVFSFile* _tmp0_;
	ThunarVfsMonitor* mon;
	g_return_val_if_fail (file != NULL, NULL);
	self = (DesktopAgnosticVFSFileMonitorThunarVFS*) g_object_new (object_type, NULL);
	self->priv->file = (_tmp0_ = _g_object_ref0 ((DesktopAgnosticVFSFile*) file), _g_object_unref0 (self->priv->file), _tmp0_);
	mon = thunar_vfs_monitor_get_default ();
	if (desktop_agnostic_vfs_file_get_file_type ((DesktopAgnosticVFSFile*) file) == DESKTOP_AGNOSTIC_VFS_FILE_TYPE_DIRECTORY) {
		self->priv->handle = thunar_vfs_monitor_add_directory (mon, (ThunarVfsPath*) desktop_agnostic_vfs_file_get_implementation ((DesktopAgnosticVFSFile*) file), _desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback_thunar_vfs_monitor_callback, self);
	} else {
		self->priv->handle = thunar_vfs_monitor_add_file (mon, (ThunarVfsPath*) desktop_agnostic_vfs_file_get_implementation ((DesktopAgnosticVFSFile*) file), _desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback_thunar_vfs_monitor_callback, self);
	}
	self->priv->_cancelled = FALSE;
	return self;
}


DesktopAgnosticVFSFileMonitorThunarVFS* desktop_agnostic_vfs_file_monitor_thunar_vfs_new (DesktopAgnosticVFSFileThunarVFS* file) {
	return desktop_agnostic_vfs_file_monitor_thunar_vfs_construct (DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, file);
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_monitor_callback (DesktopAgnosticVFSFileMonitorThunarVFS* self, ThunarVfsMonitor* monitor, ThunarVfsMonitorHandle* handle, ThunarVfsMonitorEvent event, ThunarVfsPath* handle_path, ThunarVfsPath* event_path) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (monitor != NULL);
	g_return_if_fail (handle != NULL);
	g_return_if_fail (handle_path != NULL);
	g_return_if_fail (event_path != NULL);
	{
		DesktopAgnosticVFSFile* event_file;
		DesktopAgnosticVFSFileMonitorEvent da_event;
		event_file = desktop_agnostic_vfs_file_new_for_uri (thunar_vfs_path_dup_uri (event_path), &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch2_g_error;
		}
		da_event = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_UNKNOWN;
		switch (event) {
			case THUNAR_VFS_MONITOR_EVENT_CHANGED:
			{
				da_event = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CHANGED;
				break;
			}
			case THUNAR_VFS_MONITOR_EVENT_CREATED:
			{
				da_event = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CREATED;
				break;
			}
			case THUNAR_VFS_MONITOR_EVENT_DELETED:
			{
				da_event = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_DELETED;
				break;
			}
		}
		g_signal_emit_by_name ((DesktopAgnosticVFSFileMonitor*) self, "changed", self->priv->file, event_file, da_event);
		_g_object_unref0 (event_file);
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		{
			g_critical ("vfs-file-monitor-impl-thunar-vfs.vala:75: Error: %s", err->message);
			_g_error_free0 (err);
		}
	}
	__finally2:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static gpointer _thunar_vfs_path_ref0 (gpointer self) {
	return self ? thunar_vfs_path_ref (self) : NULL;
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_real_emit (DesktopAgnosticVFSFileMonitor* base, DesktopAgnosticVFSFile* other, DesktopAgnosticVFSFileMonitorEvent event) {
	DesktopAgnosticVFSFileMonitorThunarVFS * self;
	ThunarVfsMonitorEvent tvfs_event = 0;
	ThunarVfsPath* path;
	ThunarVfsMonitor* mon;
	self = (DesktopAgnosticVFSFileMonitorThunarVFS*) base;
	path = NULL;
	mon = thunar_vfs_monitor_get_default ();
	switch (event) {
		case DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CHANGED:
		{
			tvfs_event = THUNAR_VFS_MONITOR_EVENT_CHANGED;
			break;
		}
		case DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CREATED:
		{
			tvfs_event = THUNAR_VFS_MONITOR_EVENT_CREATED;
			break;
		}
		case DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_DELETED:
		{
			tvfs_event = THUNAR_VFS_MONITOR_EVENT_DELETED;
			break;
		}
		default:
		{
			_thunar_vfs_path_unref0 (path);
			return;
		}
	}
	if (other == NULL) {
		ThunarVfsPath* _tmp0_;
		path = (_tmp0_ = _thunar_vfs_path_ref0 ((ThunarVfsPath*) desktop_agnostic_vfs_file_get_implementation (self->priv->file)), _thunar_vfs_path_unref0 (path), _tmp0_);
	} else {
		ThunarVfsPath* _tmp1_;
		path = (_tmp1_ = _thunar_vfs_path_ref0 ((ThunarVfsPath*) desktop_agnostic_vfs_file_get_implementation (other)), _thunar_vfs_path_unref0 (path), _tmp1_);
	}
	thunar_vfs_monitor_feed (mon, tvfs_event, path);
	_thunar_vfs_path_unref0 (path);
}


static gboolean desktop_agnostic_vfs_file_monitor_thunar_vfs_real_cancel (DesktopAgnosticVFSFileMonitor* base) {
	DesktopAgnosticVFSFileMonitorThunarVFS * self;
	gboolean result = FALSE;
	self = (DesktopAgnosticVFSFileMonitorThunarVFS*) base;
	thunar_vfs_monitor_remove (thunar_vfs_monitor_get_default (), self->priv->handle);
	self->priv->_cancelled = TRUE;
	result = TRUE;
	return result;
}


static gboolean desktop_agnostic_vfs_file_monitor_thunar_vfs_real_get_cancelled (DesktopAgnosticVFSFileMonitor* base) {
	gboolean result;
	DesktopAgnosticVFSFileMonitorThunarVFS* self;
	self = (DesktopAgnosticVFSFileMonitorThunarVFS*) base;
	result = self->priv->_cancelled;
	return result;
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_class_init (DesktopAgnosticVFSFileMonitorThunarVFSClass * klass) {
	desktop_agnostic_vfs_file_monitor_thunar_vfs_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DesktopAgnosticVFSFileMonitorThunarVFSPrivate));
	G_OBJECT_CLASS (klass)->get_property = desktop_agnostic_vfs_file_monitor_thunar_vfs_get_property;
	G_OBJECT_CLASS (klass)->finalize = desktop_agnostic_vfs_file_monitor_thunar_vfs_finalize;
	g_object_class_override_property (G_OBJECT_CLASS (klass), DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_CANCELLED, "cancelled");
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_desktop_agnostic_vfs_file_monitor_interface_init (DesktopAgnosticVFSFileMonitorIface * iface) {
	desktop_agnostic_vfs_file_monitor_thunar_vfs_desktop_agnostic_vfs_file_monitor_parent_iface = g_type_interface_peek_parent (iface);
	iface->emit = desktop_agnostic_vfs_file_monitor_thunar_vfs_real_emit;
	iface->cancel = desktop_agnostic_vfs_file_monitor_thunar_vfs_real_cancel;
	iface->get_cancelled = desktop_agnostic_vfs_file_monitor_thunar_vfs_real_get_cancelled;
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_instance_init (DesktopAgnosticVFSFileMonitorThunarVFS * self) {
	self->priv = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_GET_PRIVATE (self);
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_finalize (GObject* obj) {
	DesktopAgnosticVFSFileMonitorThunarVFS * self;
	self = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS (obj);
	_g_object_unref0 (self->priv->file);
	G_OBJECT_CLASS (desktop_agnostic_vfs_file_monitor_thunar_vfs_parent_class)->finalize (obj);
}


GType desktop_agnostic_vfs_file_monitor_thunar_vfs_get_type (void) {
	static volatile gsize desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id__volatile = 0;
	if (g_once_init_enter (&desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DesktopAgnosticVFSFileMonitorThunarVFSClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) desktop_agnostic_vfs_file_monitor_thunar_vfs_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DesktopAgnosticVFSFileMonitorThunarVFS), 0, (GInstanceInitFunc) desktop_agnostic_vfs_file_monitor_thunar_vfs_instance_init, NULL };
		static const GInterfaceInfo desktop_agnostic_vfs_file_monitor_info = { (GInterfaceInitFunc) desktop_agnostic_vfs_file_monitor_thunar_vfs_desktop_agnostic_vfs_file_monitor_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id;
		desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id = g_type_register_static (G_TYPE_OBJECT, "DesktopAgnosticVFSFileMonitorThunarVFS", &g_define_type_info, 0);
		g_type_add_interface_static (desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id, DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR, &desktop_agnostic_vfs_file_monitor_info);
		g_once_init_leave (&desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id__volatile, desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id);
	}
	return desktop_agnostic_vfs_file_monitor_thunar_vfs_type_id__volatile;
}


static void desktop_agnostic_vfs_file_monitor_thunar_vfs_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DesktopAgnosticVFSFileMonitorThunarVFS * self;
	self = DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS (object);
	switch (property_id) {
		case DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_CANCELLED:
		g_value_set_boolean (value, desktop_agnostic_vfs_file_monitor_get_cancelled ((DesktopAgnosticVFSFileMonitor*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}




