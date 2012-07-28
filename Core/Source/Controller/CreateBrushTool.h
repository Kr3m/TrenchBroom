/*
 Copyright (C) 2010-2012 Kristian Duske
 
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
 along with TrenchBroom.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TrenchBroom_CreateBrushTool_h
#define TrenchBroom_CreateBrushTool_h

#include "Controller/DragTool.h"
#include "Utilities/VecMath.h"

namespace TrenchBroom {
    namespace Model {
        class Brush;
    }
    
    namespace Renderer {
        class BrushFigure;
        class SizeGuideFigure;
    }
    
    namespace Controller {
        class Editor;
        
        class CreateBrushTool : public DragTool {
        protected:
            Model::Brush* m_brush;
            Renderer::BrushFigure* m_brushFigure;
            Renderer::SizeGuideFigure* m_sizeGuideFigure;
            BBox m_initialBounds;
            BBox m_bounds;
            
            void createFigures();
            bool handleBeginPlaneDrag(InputEvent& event, Vec3f& initialPoint);
            bool handlePlaneDrag(InputEvent& event, const Vec3f& lastMousePoint, const Vec3f& curMousePoint, Vec3f& referencePoint);
            void handleEndPlaneDrag(InputEvent& event);
        public:
            CreateBrushTool(Editor& editor);
            virtual ~CreateBrushTool();
            
            Model::Brush* brush();
            const BBox& bounds();
        };
    }
}

#endif
