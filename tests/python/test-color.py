#!/usr/bin/env python
#
# Copyright (c) 2009 Mark Lee <libdesktop-agnostic@lazymalevolence.com>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA.

import desktopagnostic
from gtk import gdk

green = desktopagnostic.Color.from_string('green')
print green.to_string()
print green
assert isinstance(green.props.color, gdk.Color)
print str(green.props.color)
one_char_hex = desktopagnostic.Color.from_string('#f00f')
print one_char_hex.to_string()
print one_char_hex
