/***************************************************************************
                           qgscomposereffect.h
                             -------------------
    begin                : March 2013
    copyright            : (C) 2013 by Nyall Dawson
    email                : nyall.dawson@gmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSCOMPOSEREFFECT_H
#define QGSCOMPOSEREFFECT_H

#include <QGraphicsEffect>
#include <QPainter>

#include "qgis_core.h"

#define SIP_NO_FILE

/**
 * \ingroup core
 * \class QgsComposerEffect
 * \note Not available in Python bindings
 * \deprecated Will be removed in QGIS 3.2
 */
class CORE_EXPORT QgsComposerEffect : public QGraphicsEffect
{
    Q_OBJECT

  public:

    /**
     * Constructor for QgsComposerEffect.
     */
    QgsComposerEffect() = default;

    void setCompositionMode( QPainter::CompositionMode compositionMode );

  protected:
    //! Called whenever source needs to be drawn
    void draw( QPainter *painter ) override;

  private:

    QPainter::CompositionMode mCompositionMode = QPainter::CompositionMode_SourceOver;
};

#endif // QGSCOMPOSEREFFECT_H

