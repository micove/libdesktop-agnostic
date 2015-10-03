/*
 * Desktop Agnostic Library: Icon chooser button.
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

using Gtk;

namespace DesktopAgnostic.UI
{
  public class IconButton : Button
  {
    private string _icon;
    public string icon
    {
      get
      {
        return this._icon;
      }
      set
      {
        this._icon = value;
        if (Path.is_absolute (value))
        {
          this._icon_type = IconType.FILE;
          this.image = new Image.from_file (value);
        }
        else
        {
          this._icon_type = IconType.THEMED;
          this.image = new Image.from_icon_name (value, IconSize.DIALOG);
        }
      }
    }

    private IconType _icon_type = IconType.NONE;
    public IconType icon_type
    {
      get
      {
        return this._icon_type;
      }
    }

    private IconChooserDialog _dialog = null;

    public IconButton (string icon)
    {
      this.icon = icon;
    }

    construct
    {
      this.clicked.connect (this.on_clicked);
    }

    /* ported from GTK+'s gtkcolorbutton.c, blob
     * 081e687cbaed1411eed71f1682968d6b3f09fd3f
     * see gtk_color_button_clicked().
     */
    private void
    on_clicked ()
    {
      if (this._dialog == null)
      {
        unowned Widget parent;

        parent = this.get_toplevel ();

        this._dialog = new IconChooserDialog ();
        this._dialog.icon_selected.connect (this.on_icon_selected);

        if (parent.is_toplevel () && parent is Window)
        {
          unowned Window parent_window;

          parent_window = parent as Window;
          if (parent_window != this._dialog.transient_for)
          {
            this._dialog.transient_for = parent_window;
          }
          this._dialog.modal = parent_window.modal;
        }
      }
      this._dialog.present ();
    }

    private void
    on_icon_selected (IconChooserDialog dialog)
    {
      (this.image as Image).set_from_pixbuf (dialog.selected_pixbuf);
      this._icon = dialog.selected_icon;
      this._icon_type = dialog.selected_icon_type;

      this.icon_selected ();
    }

    public signal void icon_selected ();
  }
}

// vim:et:ai:cindent:ts=2 sts=2 sw=2
