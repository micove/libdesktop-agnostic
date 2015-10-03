/*
 * Desktop Agnostic Library: VFS implementation interface.
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

[CCode (cheader_filename = "libdesktop-agnostic/vfs.h")]
namespace DesktopAgnostic.VFS
{
  public interface Implementation : Object
  {
    /**
     * The (unique) name of the implementation.
     */
    public abstract string name { get; }
    public abstract Type file_type { get; }
    public abstract Type file_monitor_type { get; }
    public abstract Type trash_type { get; }
    public abstract Type volume_type { get; }
    public abstract void init ();
    public abstract SList<File>
      files_from_uri_list (string uri_list) throws GLib.Error;
    public abstract unowned VolumeMonitor volume_monitor_get_default ();
    public abstract void shutdown ();
  }

  private static Implementation vfs = null;

  public unowned VFS.Implementation?
  get_default () throws GLib.Error
  {
    if (vfs == null)
    {
      Type type = get_module_type ("vfs", "vfs");
      if (type == Type.INVALID)
      {
        return null;
      }
      else
      {
        vfs = (VFS.Implementation)Object.new (type);
      }
    }
    return vfs;
  }

  /**
   * Initializes the VFS, if the backend needs it.
   */
  public void
  init () throws GLib.Error
  {
    unowned VFS.Implementation? vfs = get_default ();
    if (vfs != null)
    {
      vfs.init ();
    }
  }

  /**
   * Shuts down the VFS, if the backend needs it.
   */
  public void
  shutdown () throws GLib.Error
  {
    unowned VFS.Implementation? vfs = get_default ();
    if (vfs != null)
    {
      vfs.shutdown ();
    }
  }

  /**
   * Creates a list of files based on a newline-delimited list of URIs.
   */
  public SList<File>?
  files_from_uri_list (string uri_list) throws GLib.Error
  {
    unowned VFS.Implementation? vfs = get_default ();
    if (vfs == null)
    {
      return null;
    }
    else
    {
      return vfs.files_from_uri_list (uri_list);
    }
  }
}

// vim: set et ts=2 sts=2 sw=2 ai :
