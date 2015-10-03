/* da-cfg-keyfile.vapi generated by valac 0.10.4, do not modify. */

[CCode (cprefix = "DesktopAgnostic", lower_case_cprefix = "desktop_agnostic_")]
namespace DesktopAgnostic {
	[CCode (cprefix = "DesktopAgnosticConfig", lower_case_cprefix = "desktop_agnostic_config_")]
	namespace Config {
		[CCode (cheader_filename = "libdesktop-agnostic/da-cfg-keyfile.h")]
		public class GKeyFile : DesktopAgnostic.Config.Backend {
			public GKeyFile ();
			public override void constructed ();
			public override bool get_bool (string group, string key) throws GLib.Error;
			public override float get_float (string group, string key) throws DesktopAgnostic.Config.Error;
			public override int get_int (string group, string key) throws GLib.Error;
			public override GLib.ValueArray get_list (string group, string key) throws GLib.Error;
			public override string get_string (string group, string key) throws GLib.Error;
			public override GLib.Value get_value (string group, string key) throws GLib.Error;
			public override void notify (string group, string key) throws GLib.Error;
			public override void notify_add (string group, string key, DesktopAgnostic.Config.NotifyFunc callback) throws GLib.Error;
			public override void notify_remove (string group, string key, DesktopAgnostic.Config.NotifyFunc callback) throws GLib.Error;
			public override void remove () throws GLib.Error;
			public override void reset () throws GLib.Error;
			public override void set_bool (string group, string key, bool value) throws GLib.Error;
			public override void set_float (string group, string key, float value) throws GLib.Error;
			public override void set_int (string group, string key, int value) throws GLib.Error;
			public override void set_list (string group, string key, GLib.ValueArray value) throws GLib.Error;
			public override void set_string (string group, string key, string value) throws GLib.Error;
			public override string name { owned get; }
		}
	}
}
[CCode (cheader_filename = "libdesktop-agnostic/da-cfg-keyfile.h")]
public static GLib.Type register_plugin ();
