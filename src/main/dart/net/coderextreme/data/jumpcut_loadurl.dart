// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('jumpcut_loadurl.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.nist.gov/vrml.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.itl.nist.gov/div897/ctg/vrml/vrml.html')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('http://www.itl.nist.gov/div897/ctg/vrml/members.html')),

            meta(
              name_ : SFString('disclaimer'),
              content_ : SFString('This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Michael Kass NIST, Don Brutzman NPS')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('21 January 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('jumpcut_loadurl.x3d')),

            Background(
              skyColor_ : MFColor([SFColor(0), SFColor(0), SFColor(1)]),
              groundAngle_ : MFFloat([SFFloat(1.57)]),
              groundColor_ : MFColor([SFColor(0), SFColor(0.5), SFColor(0), SFColor(0), SFColor(0.5), SFColor(0)])),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("WALK"), SFString("FLY"), SFString("ANY")])),

            Viewpoint(
              DEF_ : SFString('Front_View'),
              description_ : SFString('Front View')),

            Viewpoint(
              DEF_ : SFString('Top_View'),
              description_ : SFString('Top View'),
              position_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)])),

            TouchSensor(
              DEF_ : SFString('STARTER'),
              description_ : SFString('touch to activate')),

            Transform(
              DEF_ : SFString('ROOT'),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material()),
                  geometry_ : 
                    Box())),

            Script(
              DEF_ : SFString('MYSCRIPT'),
              url_ : MFString([SFString("jumpcut_loadurl.js"), SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js")]),
              field_ : [
                field(
                  type_ : SFString("MFString"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('myParameter'),
                  value_ : SFString('\"Top_View\"')),

                field(
                  type_ : SFString("MFString"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('myUrl'),
                  value_ : SFString('\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("inputOnly"),
                  name_ : SFString('trigger_event'))]),

            ROUTE(
              fromNode_ : SFString('STARTER'),
              fromField_ : SFString('isActive'),
              toNode_ : SFString('MYSCRIPT'),
              toField_ : SFString('trigger_event'))]));
void main() { exit(0); }
