/**************************************************************************
* Copyright (C) 2016 by Savoir-faire Linux                                *
* Author: J�ger Nicolas <nicolas.jager@savoirfairelinux.com>              *
* Author: Traczyk Andreas <andreas.traczyk@savoirfairelinux.com>          *
*                                                                         *
* This program is free software; you can redistribute it and/or modify    *
* it under the terms of the GNU General Public License as published by    *
* the Free Software Foundation; either version 3 of the License, or       *
* (at your option) any later version.                                     *
*                                                                         *
* This program is distributed in the hope that it will be useful,         *
* but WITHOUT ANY WARRANTY; without even the implied warranty of          *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
* GNU General Public License for more details.                            *
*                                                                         *
* You should have received a copy of the GNU General Public License       *
* along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
**************************************************************************/
#pragma once

#include "WelcomePage.g.h"

namespace RingClientUWP
{

delegate void SummonAboutPage();

namespace Views
{
public ref class WelcomePage sealed
{
public:
    WelcomePage();
    void    generateShareData();

private:
    void    _welcomeAboutButton__Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

internal:
    event SummonAboutPage^ summonAboutPage;
};
}
}