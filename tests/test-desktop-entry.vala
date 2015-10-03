/*
 * Desktop Agnostic Library: Test for the desktop entry implementations.
 *
 * Copyright (C) 2009 Mark Lee <libdesktop-agnostic@lazymalevolence.com>
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

using DesktopAgnostic;
using DesktopAgnostic.FDO;

int main (string[] args)
{
  Gdk.init (ref args);
  try
  {
    VFS.init ();
    if (args.length > 1)
    {
      bool hit_first_arg = false;
      foreach (unowned string arg in args)
      {
        if (!hit_first_arg)
        {
          hit_first_arg = true;
          continue;
        }

        VFS.File file = VFS.file_new_for_path (arg);
        DesktopEntry entry = desktop_entry_new_for_file (file);
        message ("Entry: %s", entry.name);
        message ("Entry exec line: %s", entry.get_string ("Exec"));
        if (entry.exists ())
        {
          entry.launch (0, null);
        }
        else
        {
          critical ("Entry does not exist.");
        }
      }
    }
    else
    {
      DesktopEntry entry;
      VFS.File file;

      entry = FDO.desktop_entry_new ();
      entry.name = "hosts file";
      entry.entry_type = DesktopEntryType.LINK;
      entry.set_string ("URL", "file:///etc/hosts");
      file = VFS.file_new_for_path ("/tmp/desktop-agnostic-test.desktop");
      entry.save (file);
      entry = null;
    }
    VFS.shutdown ();
  }
  catch (GLib.Error err)
  {
    critical ("Error: %s", err.message);
  }
  return 0;
}

// vim: set ts=2 sts=2 sw=2 ai cindent :
