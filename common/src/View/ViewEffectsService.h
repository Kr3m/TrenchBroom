/*
 Copyright (C) 2010-2014 Kristian Duske
 
 This file is part of TrenchBroom.
 
 TrenchBroom is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 TrenchBroom is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with TrenchBroom. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TrenchBroom__ViewEffectsService__
#define __TrenchBroom__ViewEffectsService__

#include <stdio.h>

namespace TrenchBroom {
    namespace View {
        class ViewEffectsService {
        public:
            virtual ~ViewEffectsService();
            void flashSelection();
        private:
            virtual void doFlashSelection() = 0;
        };
    }
}

#endif /* defined(__TrenchBroom__ViewEffectsService__) */
