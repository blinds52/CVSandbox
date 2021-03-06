/*
    DirectShow video source library of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
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

#pragma once
#ifndef CVS_XDEVICE_NAME_HPP
#define CVS_XDEVICE_NAME_HPP

#include <string>

namespace CVSandbox { namespace Video { namespace DirectShow
{

// Name of a DirectShow device including its moniker string
class XDeviceName
{
public:
    XDeviceName( std::string moniker, std::string name );

    const std::string Name( ) const { return mName; }
    const std::string Moniker( ) const { return mMoniker; }

    // Check if two device names are equal (moniker is checked only)
    bool operator==( const XDeviceName& rhs ) const;
    bool operator==( const std::string& rhsMoniker ) const;

    // Check if two device names are NOT equal
    bool operator!=( const XDeviceName& rhs  ) const
    {
        return ( !( (*this) == rhs ) ) ;
    }
    bool operator!=( const std::string& rhsMoniker  ) const
    {
        return ( !( (*this) == rhsMoniker ) ) ;
    }

private:
    std::string mMoniker;
    std::string mName;
};

} } } // namespace CVSandbox::Video::DirectShow

#endif // CVS_XDEVICE_NAME_HPP
