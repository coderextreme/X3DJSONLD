// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interactive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('TestCycleTimeStart.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Andreas')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Test design patterns for animation control.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('10 September 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:20:59 GMT')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('TestCycleTimeStart.x3d')),

            Viewpoint(
              description_ : SFString('hello in there')),

            TimeSensor(
              DEF_ : SFString('REDTIME1'),
              loop_ : true,
              stopTime_ : 1757913659.298),

            TimeSensor(
              DEF_ : SFString('GREENTIME2'),
              cycleInterval_ : 5,
              startTime_ : 1757913659.298),

            TimeSensor(
              DEF_ : SFString('BLUETIME3'),
              cycleInterval_ : 10),

            BooleanFilter(
              DEF_ : SFString('GREENFILTER')),

            TimeTrigger(
              DEF_ : SFString('BLUETRIGGER')),

            Transform(
              DEF_ : SFString('REDBALL'),
              translation_ : SFVec3f([SFDouble(1.615999), SFDouble(0), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                  geometry_ : 
                    Sphere())),

            Transform(
              DEF_ : SFString('GREENBALL'),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))),
                  geometry_ : 
                    Sphere())),

            Transform(
              DEF_ : SFString('BLUEBALL'),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                  geometry_ : 
                    Sphere())),

            PositionInterpolator(
              DEF_ : SFString('REDINTERP1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([2,0,0]),SFVec3f([0,0,0]),SFVec3f([-2,0,0]),SFVec3f([0,0,0])])),

            PositionInterpolator(
              DEF_ : SFString('GREENINTERP2'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,2,0]),SFVec3f([0,0,0]),SFVec3f([0,-2,0]),SFVec3f([0,0,0])])),

            PositionInterpolator(
              DEF_ : SFString('BLUEINTERP3'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-2,0]),SFVec3f([0,0,0]),SFVec3f([0,2,0]),SFVec3f([0,0,0])])),

            ROUTE(
              fromNode_ : SFString('REDTIME1'),
              fromField_ : SFString('cycleTime'),
              toNode_ : SFString('REDTIME1'),
              toField_ : SFString('set_stopTime')),

            ROUTE(
              fromNode_ : SFString('REDTIME1'),
              fromField_ : SFString('stopTime_changed'),
              toNode_ : SFString('GREENTIME2'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('GREENTIME2'),
              fromField_ : SFString('isActive'),
              toNode_ : SFString('GREENFILTER'),
              toField_ : SFString('set_boolean')),

            ROUTE(
              fromNode_ : SFString('GREENFILTER'),
              fromField_ : SFString('inputFalse'),
              toNode_ : SFString('BLUETRIGGER'),
              toField_ : SFString('set_boolean')),

            ROUTE(
              fromNode_ : SFString('BLUETRIGGER'),
              fromField_ : SFString('triggerTime'),
              toNode_ : SFString('BLUETIME3'),
              toField_ : SFString('set_startTime')),

            ROUTE(
              fromNode_ : SFString('REDTIME1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('REDINTERP1'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('REDINTERP1'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('REDBALL'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('GREENTIME2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('GREENINTERP2'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('GREENINTERP2'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('GREENBALL'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('BLUETIME3'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('BLUEINTERP3'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('BLUEINTERP3'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BLUEBALL'),
              toField_ : SFString('set_translation'))]));
void main() { exit(0); }
