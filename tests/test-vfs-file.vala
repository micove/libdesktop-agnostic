/*
 * Desktop Agnostic Library: Test for the file (monitor) implementations.
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

const string CONTENT = "Desktop Agnostic Library";

int main (string[] args)
{
  Gdk.init (ref args);
  try
  {
    bool test_launch;
    unowned string path;
    VFS.File tmp;
    string file_path;
    VFS.File file;
    string contents;
    size_t length;
    string file_copy_path;
    VFS.File file_copy;
    string copy_contents;
    size_t copy_length;

    test_launch = (args.length > 1 && args[1] == "launch");

    VFS.init ();
    path = Environment.get_tmp_dir ();
    tmp = VFS.file_new_for_path (path);
    assert (tmp.parent != null);
    assert (tmp.exists ());
    assert (tmp.file_type == VFS.FileType.DIRECTORY);
    assert ((tmp.access_flags & VFS.AccessFlags.READ) != 0);
    assert (tmp.is_readable ());
    assert ((tmp.access_flags & VFS.AccessFlags.WRITE) != 0);
    assert (tmp.is_writable ());
    message ("URI: %s", tmp.uri);
    message ("Path: %s", tmp.path);
    message ("# of files: %u", tmp.enumerate_children ().length ());
    file_path = Path.build_filename (path, "desktop-agnostic-test");
    file = VFS.file_new_for_path (file_path);
    assert (file.parent != null && file.parent.uri == tmp.uri);
    tmp = null;
    file.replace_contents (CONTENT);
    file.load_contents (out contents, out length);
    assert (contents == CONTENT);
    if (test_launch)
    {
      assert (file.launch ());
    }
    file_copy_path = "%s-copy".printf (file_path);
    file_copy = VFS.file_new_for_path (file_copy_path);
    assert (file.copy (file_copy, true));
    file_copy.load_contents (out copy_contents, out copy_length);
    assert (contents == copy_contents);
    assert (length == copy_length);
    if (!test_launch)
    {
      assert (file_copy.remove ());
      assert (!file_copy.exists ());
      assert (file.remove ());
      assert (!file.exists ());
    }
    file = null;
    VFS.shutdown ();
  }
  catch (Error err)
  {
    critical ("Error: %s", err.message);
  }
  return 0;
}

// vim: set et ts=2 sts=2 sw=2 ai :
