/*
    Image folder plug-ins of Computer Vision Sandbox

    Copyright (C) 2011-2019, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <imodule.h>
#include <image_folder_images_16x16.h>

// Descriptor of the module
ModuleDescriptor moduleInfo =
{
    { 0xAF000001, 0x00000000, 0x00000000, 0x00000013 },
    { 1, 0, 1 },
    "Image Folder Video Sources",
    "vs_image_folder",
    "The module contains plug-ins to read/write images from/to specified folder.",
    "Computer Vision Sandbox",
    "Copyright Computer Vision Sandbox, 2011-2019",
    "http://www.cvsandbox.com/",
    (ximage*) &image_folder_images_16x16, // small icon
    nullptr, // icon
    0
};

// Module's exported API
extern "C"
{

// Initialize module and provide its descriptor
MODULE_PUBLIC ModuleDescriptor* ModuleInitialize( )
{
    moduleInfo.PluginsCount = GetPluginsCount( );

    return CopyModuleDescriptor( &moduleInfo );
}

// Perform module clean-up routines
MODULE_PUBLIC void ModuleCleanup( )
{
    UnregisterAllPlugins( );
}

// Get descriptor of the requested plug-in
MODULE_PUBLIC PluginDescriptor* GetDescriptor( uint32_t plugin )
{
    return GetPluginDescriptor( plugin );
}

}
