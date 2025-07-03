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
              content_ : SFString('localrotation.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('chained boxes'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('localrotation.x3d')),

            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              description_ : SFString('Tour Views'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(20)])),

            Transform(
              translation_ : SFVec3f([SFDouble(-4), SFDouble(0), SFDouble(0)]),
              child_ : 
                Shape(
                  geometry_ : 
                    Box()),
              children_ : [
                Transform(
                  DEF_ : SFString('TransformTargetParent'),
                  translation_ : SFVec3f([SFDouble(4), SFDouble(0), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Box()),
                  children_ : [
                    Transform(
                      DEF_ : SFString('TransformTargetChild'),
                      translation_ : SFVec3f([SFDouble(4), SFDouble(0), SFDouble(0)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Box()))])]),

            ProximitySensor(
              DEF_ : SFString('ActivateSensor'),
              size_ : SFVec3f([SFDouble(1000000), SFDouble(1000000), SFDouble(1000000)])),

            TimeSensor(
              DEF_ : SFString('Clock')),

            ROUTE(
              fromNode_ : SFString('ActivateSensor'),
              fromField_ : SFString('enterTime'),
              toNode_ : SFString('Clock'),
              toField_ : SFString('set_startTime')),

            OrientationInterpolator(
              DEF_ : SFString('Rotater'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(1.57)])),

            ROUTE(
              fromNode_ : SFString('Clock'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Rotater'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Rotater'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('TransformTargetParent'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('Rotater'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('TransformTargetChild'),
              toField_ : SFString('set_rotation'))]));
void main() { exit(0); }
