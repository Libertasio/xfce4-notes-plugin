/*
 *  Notes - panel plugin for Xfce Desktop Environment
 *  Copyright (C) 2009  Mike Massonnet <mmassonnet@xfce.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef COLOR_H
#define COLOR_H

#include <glib.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>

void                    color_set_background            (const gchar *background);
void                    __gdk_color_contrast            (GdkColor *color,
                                                         gdouble contrast);
#if !GTK_CHECK_VERSION (2,12,0)
gchar *                 gdk_color_to_string             (const GdkColor *color);
#endif

#endif

