// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('Geospatial'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('geobubbles.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('geo bubbles'))]),
      Scene_ : 
        Scene(
          /*Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/*/
          /*PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/*/
          children_ : [
            GeoViewpoint(
              DEF_ : SFString('Tour'),
              position_ : SFVec3d([SFDouble(0), SFDouble(0), SFDouble(4)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0)]),
              description_ : SFString('Tour Views')),

            Background(
              backUrl_ : MFString([SFString("../resources/images/BK.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/BT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")]),
              frontUrl_ : MFString([SFString("../resources/images/FR.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")]),
              leftUrl_ : MFString([SFString("../resources/images/LF.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")]),
              rightUrl_ : MFString([SFString("../resources/images/RT.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")]),
              topUrl_ : MFString([SFString("../resources/images/TP.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")])),

            Transform(
              child_ : 
                Shape(
                  geometry_ : 
                    Sphere(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.7), SFDouble(0.7)]),
                          specularColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]))))),

            TimeSensor(
              DEF_ : SFString('TourTime'),
              cycleInterval_ : 5,
              loop_ : true),

            GeoPositionInterpolator(
              DEF_ : SFString('TourPosition'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFVec3d([SFVec3d([0.0015708,0,4]),SFVec3d([0,0.0015708,4])])),

            Script(
              DEF_ : SFString('RandomTourTime'),
              field_ : [
                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('set_cycle'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('val'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0')),

                field(
                  type_ : SFString("MFVec3d"),
                  name_ : SFString('positions'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0.0015708 0 4 0 0.0015708 4')),

                field(
                  type_ : SFString("MFVec3d"),
                  name_ : SFString('position'),
                  accessType_ : SFString("inputOutput"),
                  value_ : SFString('0.0015708 0 4 0 0.0015708 4')),
              ],
ecmascript:eval (0

               , function set_cycle(value) {
                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo
                        var ov = val;
			// Browser.print('old '+ov);
                        do {
                                val = Math.floor(Math.random()*2);
                                var vc = val;
                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);
                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);
			// Browser.println(positions[ov]);
			// Browser.println(positions[vc]);
                        position = new MFVec3d();
                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);
                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);
               })),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('cycleTime'),
              toNode_ : SFString('RandomTourTime'),
              toField_ : SFString('set_cycle')),

            ROUTE(
              fromNode_ : SFString('RandomTourTime'),
              fromField_ : SFString('position'),
              toNode_ : SFString('TourPosition'),
              toField_ : SFString('keyValue')),

            ROUTE(
              fromNode_ : SFString('TourTime'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('TourPosition'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('TourPosition'),
              fromField_ : SFString('geovalue_changed'),
              toNode_ : SFString('Tour'),
              toField_ : SFString('set_position'))]));
void main() { exit(0); }
