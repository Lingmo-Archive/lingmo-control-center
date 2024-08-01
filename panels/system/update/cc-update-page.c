/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2024 Lingmo OS Team <team@lingmo.org>
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
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "cc-update-page.h"
#include "cc-list-row.h"

#include <config.h>
#include <glib/gi18n.h>

static _CcUpdatePage
{
    AdwNavigationPage parent_instance;

    CcListRow       *system_version;
};

G_DEFINE_TYPE (CcUpdatePage, cc_update_page, ADW_TYPE_NAVIGATION_PAGE)