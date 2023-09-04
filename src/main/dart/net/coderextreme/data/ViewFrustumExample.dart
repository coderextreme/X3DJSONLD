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
              content_ : SFString('ViewFrustumExample.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('16 August 2008')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ViewFrustumPrototype.x3d')),

            meta(
              name_ : SFString('drawing'),
              content_ : SFString('ViewFrustumComputation.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('ViewFrustumOverheadView.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('ViewFrustumObliqueView.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('ViewpointCalculator.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('ViewpointCalculatorComposed.png')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('view culling frustum')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            ExternProtoDeclare(
              name_ : SFString('ViewFrustum'),
              url_ : MFString([SFString("ViewFrustumPrototype.x3d#ViewFrustum")]),
              field_ : [
                field(
                  type_ : SFString("SFNode"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('ViewpointNode')),

                field(
                  type_ : SFString("SFNode"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('NavigationInfoNode')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('visible')),

                field(
                  type_ : SFString("SFColor"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('lineColor')),

                field(
                  type_ : SFString("SFColor"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('frustumColor')),

                field(
                  type_ : SFString("SFFloat"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('transparency')),

                field(
                  type_ : SFString("SFFloat"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('aspectRatio')),

                field(
                  type_ : SFString("SFBool"),
                  accessType_ : SFString("initializeOnly"),
                  name_ : SFString('trace'))]),

            WorldInfo(
              title_ : SFString('ViewFrustumExample.x3d')),

            Viewpoint(
              description_ : SFString('ViewFrustum from above, looking down'),
              position_ : SFVec3f([SFDouble(0), SFDouble(40), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)])),

            Viewpoint(
              description_ : SFString('ViewFrustum from point of view')),

            Viewpoint(
              description_ : SFString('ViewFrustum behind point of view'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(15)])),

            Viewpoint(
              description_ : SFString('ViewFrustum oblique side view'),
              position_ : SFVec3f([SFDouble(-5), SFDouble(5), SFDouble(20)]),
              orientation_ : SFRotation([SFDouble(0.8005), SFDouble(0.5926), SFDouble(0.0898), SFDouble(-0.3743)])),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("ANY")])),

            ProtoInstance(
              name_ : SFString('ViewFrustum'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('ViewpointNode'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('_1'),
                      description_ : SFString('ViewFrustum ViewpointNode'))]),

                fieldValue(
                  name_ : SFString('NavigationInfoNode'),
                  children_ : [
                    NavigationInfo(
                      DEF_ : SFString('_2'),
                      visibilityLimit_ : 15)]),

                fieldValue(
                  name_ : SFString('visible'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('lineColor'),
                  value_ : SFString('0.9 0.9 0.9')),

                fieldValue(
                  name_ : SFString('frustumColor'),
                  value_ : SFString('0.8 0.8 0.8')),

                fieldValue(
                  name_ : SFString('transparency'),
                  value_ : SFString('0.75')),

                fieldValue(
                  name_ : SFString('aspectRatio'),
                  value_ : SFString('0.75')),

                fieldValue(
                  name_ : SFString('trace'),
                  value_ : SFString('true'))]),

            Inline(
              DEF_ : SFString('GridXZ'),
              global_ : true,
              url_ : MFString([SFString("GridXZ_20x20Fixed.x3d")])),

            Transform(
              scale_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(5)]),
              children_ : [
                Inline(
                  DEF_ : SFString('CoordinateAxes'),
                  global_ : true,
                  url_ : MFString([SFString("CoordinateAxes.x3d")]))])]));
void main() { exit(0); }
