/* da-cfg-type-color.h generated by valac, the Vala compiler, do not modify */


#ifndef __DEFAULT_LIBDESKTOP_AGNOSTIC_DA_CFG_TYPE_COLOR_H__
#define __DEFAULT_LIBDESKTOP_AGNOSTIC_DA_CFG_TYPE_COLOR_H__

#include <glib.h>
#include <libdesktop-agnostic/config.h>

G_BEGIN_DECLS


#define DESKTOP_AGNOSTIC_CONFIG_TYPE_COLOR_TYPE (desktop_agnostic_config_color_type_get_type ())
#define DESKTOP_AGNOSTIC_CONFIG_COLOR_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DESKTOP_AGNOSTIC_CONFIG_TYPE_COLOR_TYPE, DesktopAgnosticConfigColorType))
#define DESKTOP_AGNOSTIC_CONFIG_COLOR_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DESKTOP_AGNOSTIC_CONFIG_TYPE_COLOR_TYPE, DesktopAgnosticConfigColorTypeClass))
#define DESKTOP_AGNOSTIC_CONFIG_IS_COLOR_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DESKTOP_AGNOSTIC_CONFIG_TYPE_COLOR_TYPE))
#define DESKTOP_AGNOSTIC_CONFIG_IS_COLOR_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DESKTOP_AGNOSTIC_CONFIG_TYPE_COLOR_TYPE))
#define DESKTOP_AGNOSTIC_CONFIG_COLOR_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DESKTOP_AGNOSTIC_CONFIG_TYPE_COLOR_TYPE, DesktopAgnosticConfigColorTypeClass))

typedef struct _DesktopAgnosticConfigColorType DesktopAgnosticConfigColorType;
typedef struct _DesktopAgnosticConfigColorTypeClass DesktopAgnosticConfigColorTypeClass;
typedef struct _DesktopAgnosticConfigColorTypePrivate DesktopAgnosticConfigColorTypePrivate;

struct _DesktopAgnosticConfigColorType {
	DesktopAgnosticConfigSchemaType parent_instance;
	DesktopAgnosticConfigColorTypePrivate * priv;
};

struct _DesktopAgnosticConfigColorTypeClass {
	DesktopAgnosticConfigSchemaTypeClass parent_class;
};


GType desktop_agnostic_config_color_type_get_type (void);
DesktopAgnosticConfigColorType* desktop_agnostic_config_color_type_new (void);
DesktopAgnosticConfigColorType* desktop_agnostic_config_color_type_construct (GType object_type);
void desktop_agnostic_config_color_to_string (GValue* src_value, GValue* dest_value);
void desktop_agnostic_config_string_to_color (GValue* src_value, GValue* dest_value);
GType register_plugin (void);


G_END_DECLS

#endif
