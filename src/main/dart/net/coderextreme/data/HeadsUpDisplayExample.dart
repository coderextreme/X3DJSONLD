// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HeadsUpDisplayExample.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Leonard Daly and Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('15 July 2006')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('24 October 2016')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HeadsUpDisplayPrototype.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://X3dGraphics.com')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dResources.html')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('Copyright 2006, Daly Realism and Don Brutzman')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          /*Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n*/
          children_ : [
            ExternProtoDeclare(
              name_ : SFString('HeadsUpDisplay'),
              appinfo_ : SFString('Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location'),
              url_ : MFString([SFString("HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), SFString("HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay")]),
              field_ : [
                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('screenOffset'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('offset position for HUD relative to current view location, default 0 0 -5')),

                field(
                  type_ : SFString("MFNode"),
                  name_ : SFString('children'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('X3D content positioned at HUD offset')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('position_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('HUD position update (in world coordinates) relative to original location')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('orientation_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('HUD orientation update relative to original location'))]),

            Background(
              DEF_ : SFString('SandyShallowBottom'),
              groundAngle_ : MFFloat([SFFloat(0.05), SFFloat(1.52), SFFloat(1.56), SFFloat(1.5707)]),
              groundColor_ : MFColor([SFColor(0.2), SFColor(0.2), SFColor(0), SFColor(0.3), SFColor(0.3), SFColor(0), SFColor(0.5), SFColor(0.5), SFColor(0.3), SFColor(0.1), SFColor(0.3), SFColor(0.4), SFColor(0), SFColor(0.2), SFColor(0.4)]),
              skyAngle_ : MFFloat([SFFloat(0.04), SFFloat(0.05), SFFloat(0.1), SFFloat(1.309), SFFloat(1.57)]),
              skyColor_ : MFColor([SFColor(0.8), SFColor(0.8), SFColor(0.2), SFColor(0.8), SFColor(0.8), SFColor(0.2), SFColor(0.1), SFColor(0.1), SFColor(0.6), SFColor(0.1), SFColor(0.1), SFColor(0.6), SFColor(0.1), SFColor(0.25), SFColor(0.8), SFColor(0.6), SFColor(0.6), SFColor(0.9)])),

            Viewpoint(
              description_ : SFString('Heads-up display (HUD)')),
          /*ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence*/

            ProtoInstance(
              name_ : SFString('HeadsUpDisplay'),
              DEF_ : SFString('HeadsUpDisplayInstance'),
              /*example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view*/
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('screenOffset'),
                  value_ : SFString('-0.75 1 -5')),

                fieldValue(
                  name_ : SFString('children'),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("HUD text stays fixed"), SFString("while user navigates")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                              size_ : 0.3)),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.894118), SFDouble(0.819608), SFDouble(1)]))))])]),

            Inline(
              url_ : MFString([SFString("../HelloWorld.x3d"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d"), SFString("../HelloWorld.wrl"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl")]))]));
void main() { exit(0); }
