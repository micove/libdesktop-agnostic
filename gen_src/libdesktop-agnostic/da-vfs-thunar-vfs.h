/* da-vfs-thunar-vfs.h generated by valac 0.10.4, the Vala compiler, do not modify */


#ifndef __DEFAULT_LIBDESKTOP_AGNOSTIC_DA_VFS_THUNAR_VFS_H__
#define __DEFAULT_LIBDESKTOP_AGNOSTIC_DA_VFS_THUNAR_VFS_H__

#include <glib.h>
#include <glib-object.h>
#include <libdesktop-agnostic/vfs.h>
#include <dbus/dbus-glib-lowlevel.h>
#include <dbus/dbus-glib.h>
#include <stdlib.h>
#include <string.h>
#include <thunar-vfs/thunar-vfs.h>

G_BEGIN_DECLS


#define DESKTOP_AGNOSTIC_VFS_TYPE_THUNAR_VFS_IMPLEMENTATION (desktop_agnostic_vfs_thunar_vfs_implementation_get_type ())
#define DESKTOP_AGNOSTIC_VFS_THUNAR_VFS_IMPLEMENTATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_THUNAR_VFS_IMPLEMENTATION, DesktopAgnosticVFSThunarVFSImplementation))
#define DESKTOP_AGNOSTIC_VFS_THUNAR_VFS_IMPLEMENTATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_THUNAR_VFS_IMPLEMENTATION, DesktopAgnosticVFSThunarVFSImplementationClass))
#define DESKTOP_AGNOSTIC_VFS_IS_THUNAR_VFS_IMPLEMENTATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_THUNAR_VFS_IMPLEMENTATION))
#define DESKTOP_AGNOSTIC_VFS_IS_THUNAR_VFS_IMPLEMENTATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_THUNAR_VFS_IMPLEMENTATION))
#define DESKTOP_AGNOSTIC_VFS_THUNAR_VFS_IMPLEMENTATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_THUNAR_VFS_IMPLEMENTATION, DesktopAgnosticVFSThunarVFSImplementationClass))

typedef struct _DesktopAgnosticVFSThunarVFSImplementation DesktopAgnosticVFSThunarVFSImplementation;
typedef struct _DesktopAgnosticVFSThunarVFSImplementationClass DesktopAgnosticVFSThunarVFSImplementationClass;
typedef struct _DesktopAgnosticVFSThunarVFSImplementationPrivate DesktopAgnosticVFSThunarVFSImplementationPrivate;

#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS (desktop_agnostic_vfs_file_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_FILE_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS, DesktopAgnosticVFSFileThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS, DesktopAgnosticVFSFileThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_THUNAR_VFS, DesktopAgnosticVFSFileThunarVFSClass))

typedef struct _DesktopAgnosticVFSFileThunarVFS DesktopAgnosticVFSFileThunarVFS;
typedef struct _DesktopAgnosticVFSFileThunarVFSClass DesktopAgnosticVFSFileThunarVFSClass;
typedef struct _DesktopAgnosticVFSFileThunarVFSPrivate DesktopAgnosticVFSFileThunarVFSPrivate;

#define DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS (desktop_agnostic_vfs_file_monitor_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_MONITOR_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_FILE_MONITOR_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_FILE_MONITOR_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_FILE_MONITOR_THUNAR_VFS, DesktopAgnosticVFSFileMonitorThunarVFSClass))

typedef struct _DesktopAgnosticVFSFileMonitorThunarVFS DesktopAgnosticVFSFileMonitorThunarVFS;
typedef struct _DesktopAgnosticVFSFileMonitorThunarVFSClass DesktopAgnosticVFSFileMonitorThunarVFSClass;
typedef struct _DesktopAgnosticVFSFileMonitorThunarVFSPrivate DesktopAgnosticVFSFileMonitorThunarVFSPrivate;

#define XFCE_TYPE_TRASH (xfce_trash_get_type ())
#define XFCE_TRASH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), XFCE_TYPE_TRASH, XfceTrash))
#define XFCE_IS_TRASH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), XFCE_TYPE_TRASH))
#define XFCE_TRASH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), XFCE_TYPE_TRASH, XfceTrashIface))

typedef struct _XfceTrash XfceTrash;
typedef struct _XfceTrashIface XfceTrashIface;

#define DESKTOP_AGNOSTIC_VFS_TYPE_TRASH_THUNAR_VFS (desktop_agnostic_vfs_trash_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_TRASH_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_TRASH_THUNAR_VFS, DesktopAgnosticVFSTrashThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_TRASH_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_TRASH_THUNAR_VFS, DesktopAgnosticVFSTrashThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_TRASH_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_TRASH_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_TRASH_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_TRASH_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_TRASH_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_TRASH_THUNAR_VFS, DesktopAgnosticVFSTrashThunarVFSClass))

typedef struct _DesktopAgnosticVFSTrashThunarVFS DesktopAgnosticVFSTrashThunarVFS;
typedef struct _DesktopAgnosticVFSTrashThunarVFSClass DesktopAgnosticVFSTrashThunarVFSClass;
typedef struct _DesktopAgnosticVFSTrashThunarVFSPrivate DesktopAgnosticVFSTrashThunarVFSPrivate;

#define DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_THUNAR_VFS (desktop_agnostic_vfs_volume_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_VOLUME_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_THUNAR_VFS, DesktopAgnosticVFSVolumeThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_VOLUME_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_THUNAR_VFS, DesktopAgnosticVFSVolumeThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_VOLUME_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_VOLUME_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_VOLUME_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_THUNAR_VFS, DesktopAgnosticVFSVolumeThunarVFSClass))

typedef struct _DesktopAgnosticVFSVolumeThunarVFS DesktopAgnosticVFSVolumeThunarVFS;
typedef struct _DesktopAgnosticVFSVolumeThunarVFSClass DesktopAgnosticVFSVolumeThunarVFSClass;
typedef struct _DesktopAgnosticVFSVolumeThunarVFSPrivate DesktopAgnosticVFSVolumeThunarVFSPrivate;

#define DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_MONITOR_THUNAR_VFS (desktop_agnostic_vfs_volume_monitor_thunar_vfs_get_type ())
#define DESKTOP_AGNOSTIC_VFS_VOLUME_MONITOR_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_MONITOR_THUNAR_VFS, DesktopAgnosticVFSVolumeMonitorThunarVFS))
#define DESKTOP_AGNOSTIC_VFS_VOLUME_MONITOR_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_MONITOR_THUNAR_VFS, DesktopAgnosticVFSVolumeMonitorThunarVFSClass))
#define DESKTOP_AGNOSTIC_VFS_IS_VOLUME_MONITOR_THUNAR_VFS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_MONITOR_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_IS_VOLUME_MONITOR_THUNAR_VFS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_MONITOR_THUNAR_VFS))
#define DESKTOP_AGNOSTIC_VFS_VOLUME_MONITOR_THUNAR_VFS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_VFS_TYPE_VOLUME_MONITOR_THUNAR_VFS, DesktopAgnosticVFSVolumeMonitorThunarVFSClass))

typedef struct _DesktopAgnosticVFSVolumeMonitorThunarVFS DesktopAgnosticVFSVolumeMonitorThunarVFS;
typedef struct _DesktopAgnosticVFSVolumeMonitorThunarVFSClass DesktopAgnosticVFSVolumeMonitorThunarVFSClass;
typedef struct _DesktopAgnosticVFSVolumeMonitorThunarVFSPrivate DesktopAgnosticVFSVolumeMonitorThunarVFSPrivate;

struct _DesktopAgnosticVFSThunarVFSImplementation {
	GObject parent_instance;
	DesktopAgnosticVFSThunarVFSImplementationPrivate * priv;
};

struct _DesktopAgnosticVFSThunarVFSImplementationClass {
	GObjectClass parent_class;
};

struct _DesktopAgnosticVFSFileThunarVFS {
	DesktopAgnosticVFSFile parent_instance;
	DesktopAgnosticVFSFileThunarVFSPrivate * priv;
};

struct _DesktopAgnosticVFSFileThunarVFSClass {
	DesktopAgnosticVFSFileClass parent_class;
};

struct _DesktopAgnosticVFSFileMonitorThunarVFS {
	GObject parent_instance;
	DesktopAgnosticVFSFileMonitorThunarVFSPrivate * priv;
};

struct _DesktopAgnosticVFSFileMonitorThunarVFSClass {
	GObjectClass parent_class;
};

struct _XfceTrashIface {
	GTypeInterface parent_iface;
	void (*DisplayTrash) (XfceTrash* self, const char* display, GError** error);
	void (*EmptyTrash) (XfceTrash* self, const char* display, GError** error);
	void (*MoveToTrash) (XfceTrash* self, char** uris, int uris_length1, const char* display, GError** error);
	gboolean (*QueryTrash) (XfceTrash* self, GError** error);
};

struct _DesktopAgnosticVFSTrashThunarVFS {
	GObject parent_instance;
	DesktopAgnosticVFSTrashThunarVFSPrivate * priv;
	ThunarVfsPath* trash;
};

struct _DesktopAgnosticVFSTrashThunarVFSClass {
	GObjectClass parent_class;
};

struct _DesktopAgnosticVFSVolumeThunarVFS {
	GObject parent_instance;
	DesktopAgnosticVFSVolumeThunarVFSPrivate * priv;
};

struct _DesktopAgnosticVFSVolumeThunarVFSClass {
	GObjectClass parent_class;
};

struct _DesktopAgnosticVFSVolumeMonitorThunarVFS {
	GObject parent_instance;
	DesktopAgnosticVFSVolumeMonitorThunarVFSPrivate * priv;
};

struct _DesktopAgnosticVFSVolumeMonitorThunarVFSClass {
	GObjectClass parent_class;
};


GType desktop_agnostic_vfs_thunar_vfs_implementation_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSThunarVFSImplementation* desktop_agnostic_vfs_thunar_vfs_implementation_new (void);
DesktopAgnosticVFSThunarVFSImplementation* desktop_agnostic_vfs_thunar_vfs_implementation_construct (GType object_type);
GType register_plugin (void);
GType desktop_agnostic_vfs_file_thunar_vfs_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSFileThunarVFS* desktop_agnostic_vfs_file_thunar_vfs_new (void);
DesktopAgnosticVFSFileThunarVFS* desktop_agnostic_vfs_file_thunar_vfs_construct (GType object_type);
GType desktop_agnostic_vfs_file_monitor_thunar_vfs_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSFileMonitorThunarVFS* desktop_agnostic_vfs_file_monitor_thunar_vfs_new (DesktopAgnosticVFSFileThunarVFS* file);
DesktopAgnosticVFSFileMonitorThunarVFS* desktop_agnostic_vfs_file_monitor_thunar_vfs_construct (GType object_type, DesktopAgnosticVFSFileThunarVFS* file);
XfceTrash* xfce_trash_dbus_proxy_new (DBusGConnection* connection, const char* name, const char* path);
GType xfce_trash_get_type (void) G_GNUC_CONST;
void xfce_trash_DisplayTrash (XfceTrash* self, const char* display, GError** error);
void xfce_trash_EmptyTrash (XfceTrash* self, const char* display, GError** error);
void xfce_trash_MoveToTrash (XfceTrash* self, char** uris, int uris_length1, const char* display, GError** error);
gboolean xfce_trash_QueryTrash (XfceTrash* self, GError** error);
GType desktop_agnostic_vfs_trash_thunar_vfs_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSTrashThunarVFS* desktop_agnostic_vfs_trash_thunar_vfs_new (void);
DesktopAgnosticVFSTrashThunarVFS* desktop_agnostic_vfs_trash_thunar_vfs_construct (GType object_type);
GType desktop_agnostic_vfs_volume_thunar_vfs_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSVolumeThunarVFS* desktop_agnostic_vfs_volume_thunar_vfs_new_for_implementation (ThunarVfsVolume* impl);
DesktopAgnosticVFSVolumeThunarVFS* desktop_agnostic_vfs_volume_thunar_vfs_construct_for_implementation (GType object_type, ThunarVfsVolume* impl);
gboolean desktop_agnostic_vfs_volume_thunar_vfs_do_mount (DesktopAgnosticVFSVolumeThunarVFS* self);
gboolean desktop_agnostic_vfs_volume_thunar_vfs_do_unmount (DesktopAgnosticVFSVolumeThunarVFS* self);
gboolean desktop_agnostic_vfs_volume_thunar_vfs_do_eject (DesktopAgnosticVFSVolumeThunarVFS* self);
DesktopAgnosticVFSVolumeThunarVFS* desktop_agnostic_vfs_volume_thunar_vfs_new (void);
DesktopAgnosticVFSVolumeThunarVFS* desktop_agnostic_vfs_volume_thunar_vfs_construct (GType object_type);
GType desktop_agnostic_vfs_volume_monitor_thunar_vfs_get_type (void) G_GNUC_CONST;
DesktopAgnosticVFSVolumeMonitorThunarVFS* desktop_agnostic_vfs_volume_monitor_thunar_vfs_new (void);
DesktopAgnosticVFSVolumeMonitorThunarVFS* desktop_agnostic_vfs_volume_monitor_thunar_vfs_construct (GType object_type);


G_END_DECLS

#endif
