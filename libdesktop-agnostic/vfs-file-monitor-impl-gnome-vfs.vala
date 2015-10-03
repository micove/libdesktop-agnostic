/*
 * Desktop Agnostic Library: File monitor implementation (with GNOME VFS).
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

namespace DesktopAgnostic.VFS
{
  public class FileMonitorGnomeVFS : Object, FileMonitor
  {
    private bool _cancelled;
    public bool cancelled
    {
      get
      {
        return this._cancelled;
      }
    }
    private unowned GnomeVFS.MonitorHandle handle;
    private File _file;
    public FileMonitorGnomeVFS (FileGnomeVFS file)
    {
      this._file = file;
      GnomeVFS.MonitorType mt;
      if (file.file_type == FileType.DIRECTORY)
      {
        mt = GnomeVFS.MonitorType.DIRECTORY;
      }
      else
      {
        mt = GnomeVFS.MonitorType.FILE;
      }
      GnomeVFS.monitor_add (out this.handle, file.uri, mt,
                            this.monitor_callback);
      this._cancelled = false;
    }
    private void monitor_callback (GnomeVFS.MonitorHandle handle,
                                   string monitor_uri, string info_uri,
                                   GnomeVFS.MonitorEventType event)
    {
      File info_file = null;
      if (info_uri != null)
      {
        info_file = file_new_for_uri (info_uri);
      }
      FileMonitorEvent da_event;
      switch (event)
      {
        case GnomeVFS.MonitorEventType.CHANGED:
          da_event = FileMonitorEvent.CHANGED;
          break;
        case GnomeVFS.MonitorEventType.CREATED:
          da_event = FileMonitorEvent.CREATED;
          break;
        case GnomeVFS.MonitorEventType.DELETED:
          da_event = FileMonitorEvent.DELETED;
          break;
        case GnomeVFS.MonitorEventType.METADATA_CHANGED:
          da_event = FileMonitorEvent.ATTRIBUTE_CHANGED;
          break;
        default:
          return;
      }
      this.changed (this._file, info_file, da_event);
    }
    public void emit (File? other, FileMonitorEvent event)
    {
      // emit () is not implemented (sanely) by the GNOME VFS library.
      /*
      GnomeVFS.URI other_uri = null;
      if (other != null)
      {
        other_uri = (GnomeVFS.URI)other.implementation;
      }
      GnomeVFS.MonitorEventType gnome_event;
      switch (event)
      {
        case FileMonitorEvent.CHANGED:
          gnome_event = GnomeVFS.MonitorEventType.CHANGED;
          break;
        case FileMonitorEvent.CREATED:
          gnome_event = GnomeVFS.MonitorEventType.CREATED;
          break;
        case FileMonitorEvent.DELETED:
          gnome_event = GnomeVFS.MonitorEventType.DELETED;
          break;
        case FileMonitorEvent.ATTRIBUTE_CHANGED:
          gnome_event = GnomeVFS.MonitorEventType.METADATA_CHANGED;
          break;
        default:
          // don't do UNKNOWN
          return;
      }
      GnomeVFS.monitor_callback (?, other_uri, gnome_event);
      */
      this.changed (this._file, other, event);
    }
    public bool cancel ()
    {
      GnomeVFS.Result res = GnomeVFS.monitor_cancel (this.handle);
      this._cancelled = (res == GnomeVFS.Result.OK);
      return this._cancelled;
    }
  }
}

// vim: set et ts=2 sts=2 sw=2 ai :
