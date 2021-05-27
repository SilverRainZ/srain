/* Copyright (C) 2016-2021 Shengyu Zhang <i@silverrainz.me>
 *
 * This file is part of Srain.
 *
 * Srain is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib/gi18n.h>
#include <gtk/gtk.h>

#include "srn-messenger.h"

/**
 * SrnMessenger:
 *
 * Interface of IM protocol implementation
 */

G_DEFINE_INTERFACE(SrnMessenger, srn_messenger, G_TYPE_OBJECT)

static void
srn_messenger_default_init(SrnMessengerInterface *iface) {
    /**
     * SrnMessenger:schemas
     *
     * Semicolen secparated URL schemas handled by of [iface@Messenger].
     */
    g_object_interface_install_property(iface,
                                        g_param_spec_string("schemas",
                                                N_("Schemas"),
                                                N_("Semicolen secparated URL schemas handled by messenger."),
                                                NULL,
                                                G_PARAM_READABLE));
}