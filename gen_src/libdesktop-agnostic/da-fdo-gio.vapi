/* da-fdo-gio.vapi generated by valac 0.10.4, do not modify. */

[CCode (cprefix = "DesktopAgnostic", lower_case_cprefix = "desktop_agnostic_")]
namespace DesktopAgnostic {
	[CCode (cprefix = "DesktopAgnosticFDO", lower_case_cprefix = "desktop_agnostic_fdo_")]
	namespace FDO {
		[CCode (cheader_filename = "libdesktop-agnostic/da-fdo-gio.h")]
		public class DesktopEntryGio : DesktopAgnostic.FDO.DesktopEntry, GLib.Object {
			public DesktopEntryGio ();
		}
	}
}
[CCode (cheader_filename = "libdesktop-agnostic/da-fdo-gio.h")]
public static GLib.Type register_plugin ();