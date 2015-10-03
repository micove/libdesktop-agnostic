/* vfs-file-monitor.c generated by valac 0.10.4, the Vala compiler
 * generated from vfs-file-monitor.vala, do not modify */

/*
 * Desktop Agnostic Library: File monitor interface (similar to GFileMonitor).
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


#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_EVENT (desktop_agnostic_vfs_file_monitor_event_get_type ())

#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR (desktop_agnostic_vfs_file_monitor_get_type ())
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR, DesktopAgnosticVFSFileMonitor))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_MONITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR))
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR, DesktopAgnosticVFSFileMonitorIface))

typedef struct _DesktopAgnosticVFSFileMonitor DesktopAgnosticVFSFileMonitor;
typedef struct _DesktopAgnosticVFSFileMonitorIface DesktopAgnosticVFSFileMonitorIface;

#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE (desktop_agnostic_vfs_file_get_type ())
#define DESKTOP_AGNOSTIC_VFS_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE, DesktopAgnosticVFSFile))
#define DESKTOP_AGNOSTIC_VFS_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE, DesktopAgnosticVFSFileClass))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE))
#define DESKTOP_AGNOSTIC_VFS_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE, DesktopAgnosticVFSFileClass))

typedef struct _DesktopAgnosticVFSFile DesktopAgnosticVFSFile;
typedef struct _DesktopAgnosticVFSFileClass DesktopAgnosticVFSFileClass;

typedef enum  {
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_UNKNOWN = 0,
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CHANGED,
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CREATED,
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_DELETED,
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED
} DesktopAgnosticVFSFileMonitorEvent;

struct _DesktopAgnosticVFSFileMonitorIface {
	GTypeInterface parent_iface;
	void (*emit) (DesktopAgnosticVFSFileMonitor* self, DesktopAgnosticVFSFile* other, DesktopAgnosticVFSFileMonitorEvent event);
	gboolean (*cancel) (DesktopAgnosticVFSFileMonitor* self);
	gboolean (*get_cancelled) (DesktopAgnosticVFSFileMonitor* self);
};



GType desktop_agnostic_vfs_file_monitor_event_get_type (void) G_GNUC_CONST;
GType desktop_agnostic_vfs_file_get_type (void) G_GNUC_CONST;
GType desktop_agnostic_vfs_file_monitor_get_type (void) G_GNUC_CONST;
void desktop_agnostic_vfs_file_monitor_emit (DesktopAgnosticVFSFileMonitor* self, DesktopAgnosticVFSFile* other, DesktopAgnosticVFSFileMonitorEvent event);
gboolean desktop_agnostic_vfs_file_monitor_cancel (DesktopAgnosticVFSFileMonitor* self);
gboolean desktop_agnostic_vfs_file_monitor_get_cancelled (DesktopAgnosticVFSFileMonitor* self);


static void g_cclosure_user_marshal_VOID__OBJECT_OBJECT_ENUM (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);

/**
   * The file monitor events that will be propagated to the signal handlers.
   */
GType desktop_agnostic_vfs_file_monitor_event_get_type (void) {
	static volatile gsize desktop_agnostic_vfs_file_monitor_event_type_id__volatile = 0;
	if (g_once_init_enter (&desktop_agnostic_vfs_file_monitor_event_type_id__volatile)) {
		static const GEnumValue values[] = {{DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_UNKNOWN, "DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_UNKNOWN", "unknown"}, {DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CHANGED, "DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CHANGED", "changed"}, {DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CREATED, "DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_CREATED", "created"}, {DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_DELETED, "DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_DELETED", "deleted"}, {DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED, "DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED", "attribute-changed"}, {0, NULL, NULL}};
		GType desktop_agnostic_vfs_file_monitor_event_type_id;
		desktop_agnostic_vfs_file_monitor_event_type_id = g_enum_register_static ("DesktopAgnosticVFSFileMonitorEvent", values);
		g_once_init_leave (&desktop_agnostic_vfs_file_monitor_event_type_id__volatile, desktop_agnostic_vfs_file_monitor_event_type_id);
	}
	return desktop_agnostic_vfs_file_monitor_event_type_id__volatile;
}


/**
     * Emits a file monitor event for the file backend associated with
     * the monitor.
     * @param other if the associated URI is a directory, the child file that
     * triggered the event. Otherwise, it should be NULL.
     * @param event the event type to emit.
     */
void desktop_agnostic_vfs_file_monitor_emit (DesktopAgnosticVFSFileMonitor* self, DesktopAgnosticVFSFile* other, DesktopAgnosticVFSFileMonitorEvent event) {
	DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_GET_INTERFACE (self)->emit (self, other, event);
}


/**
     * Prevent the monitor from monitoring any events from the URI associated
     * with it.
     * @return whether the monitor was successfully cancelled.
     */
gboolean desktop_agnostic_vfs_file_monitor_cancel (DesktopAgnosticVFSFileMonitor* self) {
	return DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_GET_INTERFACE (self)->cancel (self);
}


gboolean desktop_agnostic_vfs_file_monitor_get_cancelled (DesktopAgnosticVFSFileMonitor* self) {
	return DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_GET_INTERFACE (self)->get_cancelled (self);
}


static void desktop_agnostic_vfs_file_monitor_base_init (DesktopAgnosticVFSFileMonitorIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		     * Whether the monitor has been cancelled via cancel().
		     */
		g_object_interface_install_property (iface, g_param_spec_boolean ("cancelled", "cancelled", "cancelled", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		     * The signal emitted when something changes
		     * @param file the file associated with the monitor.
		     * @param other if the URI associated with the monitor is a directory, the
		     * child file that triggered the event. Otherwise, it should be NULL.
		     * @param event the event type to send
		     */
		g_signal_new ("changed", DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__OBJECT_OBJECT_ENUM, G_TYPE_NONE, 3, DESKTOP_AGNOSTIC_VFS_TYPE_FILE, DESKTOP_AGNOSTIC_VFS_TYPE_FILE, DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_EVENT);
	}
}


/**
   * The base class for file/directory monitoring.
   */
GType desktop_agnostic_vfs_file_monitor_get_type (void) {
	static volatile gsize desktop_agnostic_vfs_file_monitor_type_id__volatile = 0;
	if (g_once_init_enter (&desktop_agnostic_vfs_file_monitor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DesktopAgnosticVFSFileMonitorIface), (GBaseInitFunc) desktop_agnostic_vfs_file_monitor_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType desktop_agnostic_vfs_file_monitor_type_id;
		desktop_agnostic_vfs_file_monitor_type_id = g_type_register_static (G_TYPE_INTERFACE, "DesktopAgnosticVFSFileMonitor", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (desktop_agnostic_vfs_file_monitor_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&desktop_agnostic_vfs_file_monitor_type_id__volatile, desktop_agnostic_vfs_file_monitor_type_id);
	}
	return desktop_agnostic_vfs_file_monitor_type_id__volatile;
}



static void g_cclosure_user_marshal_VOID__OBJECT_OBJECT_ENUM (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__OBJECT_OBJECT_ENUM) (gpointer data1, gpointer arg_1, gpointer arg_2, gint arg_3, gpointer data2);
	register GMarshalFunc_VOID__OBJECT_OBJECT_ENUM callback;
	register GCClosure * cc;
	register gpointer data1, data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 4);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__OBJECT_OBJECT_ENUM) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_object (param_values + 1), g_value_get_object (param_values + 2), g_value_get_enum (param_values + 3), data2);
}



