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
              content_ : SFString('WinterAndSpringHumanoidTimings.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Example animation timings, manually translated from tool outputs and export.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Katy Schildmeyer')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Carol McDonald')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joe Williams')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('2 July 2023')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('9 July 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:21:02 GMT')),

            meta(
              name_ : SFString('hint'),
              content_ : SFString('MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Cinema 4D https://www.maxon.net/en/cinema-4d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('WinterAndSpringHumanoidTimings.x3d')),

            Viewpoint(
              DEF_ : SFString('EntryView1'),
              description_ : SFString('Hello characters 1'),
              position_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(40)])),

            Viewpoint(
              DEF_ : SFString('EntryView2'),
              description_ : SFString('Hello characters 2'),
              position_ : SFVec3f([SFDouble(-15), SFDouble(10), SFDouble(30)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-0.643501)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(10)])),

            Transform(
              DEF_ : SFString('TextRoot'),
              translation_ : SFVec3f([SFDouble(9.8557), SFDouble(0.95), SFDouble(3.5)]),
              child_ : 
                Shape(
                  DEF_ : SFString('ModelDescriptionText'),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.960784), SFDouble(0.894118), SFDouble(0)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("This scene tests"), SFString(""), SFString("experimental approaches"), SFString(""), SFString("for human animation")]),
                      fontStyle_ : 
                        FontStyle(
                          family_ : MFString([SFString("SANS")]),
                          style_ : SFString('BOLD'),
                          size_ : 0.8,
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))),

            Transform(
              DEF_ : SFString('Root4'),
              translation_ : SFVec3f([SFDouble(11.3657), SFDouble(0.475), SFDouble(3.377131)])),

            Transform(
              DEF_ : SFString('Root5'),
              translation_ : SFVec3f([SFDouble(10.55646), SFDouble(0.475), SFDouble(3.391616)])),

            Transform(
              DEF_ : SFString('Root6'),
              translation_ : SFVec3f([SFDouble(9.167682), SFDouble(0.475), SFDouble(3.332752)])),

            PositionInterpolator(
              DEF_ : SFString('Gramps_HumanoidRoot_TranslationInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.22), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([6.8557,0.95,0.5]),SFVec3f([6.8557,0.95,0.5]),SFVec3f([6.8557,0.95,0.5]),SFVec3f([9.8557,0.95,3.5]),SFVec3f([9.8557,0.95,3.5]),SFVec3f([9.8557,0.95,3.5]),SFVec3f([14.3558,0.95,8]),SFVec3f([16.8558,0.95,15]),SFVec3f([21.3557,0.95,24.5]),SFVec3f([21.3557,0.95,24.5]),SFVec3f([21.3557,0.95,24.5])]),
              metadata_ : [
                MetadataString(
                  name_ : SFString('poses'),
                  value_ : MFString([SFString("Gramps_Stand01"), SFString("Gramps_Stand01"), SFString("Gramps_Walk01"), SFString("Gramps_Stand02"), SFString("Gramps_Turn01"), SFString("Gramps_Walk01"), SFString("Gramps_Walk02"), SFString("Gramps_Skip01"), SFString("Gramps_Stand03"), SFString("Gramps_Stand03"), SFString("Gramps_Stand03")]))]),

            PositionInterpolator(
              DEF_ : SFString('Leif_HumanoidRoot_TranslationInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.223), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-7.9962,0.4,3]),SFVec3f([-7.9962,0.4,3]),SFVec3f([-7.9962,0.4,3]),SFVec3f([-7.9962,0.4,3]),SFVec3f([9.004,0.475,3.4999]),SFVec3f([11.5048,0.475,3.3699]),SFVec3f([16.0038,0.475,7.8699]),SFVec3f([18.5038,0.475,14.8699]),SFVec3f([23.0038,0.475,24.3699]),SFVec3f([23.0038,0.475,24.3699]),SFVec3f([23.0038,0.475,24.3699])]),
              metadata_ : [
                MetadataString(
                  name_ : SFString('poses'),
                  value_ : MFString([SFString("Leif_Stand01"), SFString("Leif_Stand01"), SFString("Leif_Stand01"), SFString("Leif_Run01"), SFString("Leif_Turn01"), SFString("Leif_Walk01"), SFString("Leif_Walk01"), SFString("Leif_Skip01"), SFString("Leif_Stand01"), SFString("Leif_Stand01"), SFString("Leif_Stand01")]))]),

            PositionInterpolator(
              DEF_ : SFString('Lily_HumanoidRoot_TranslationInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.225), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-8.0962,0.4,5.6]),SFVec3f([-8.0962,0.4,5.6]),SFVec3f([-8.0962,0.4,5.6]),SFVec3f([-8.0962,0.4,5.6]),SFVec3f([8.9038,0.475,4.0999]),SFVec3f([10.6538,0.475,3.3499]),SFVec3f([15.1538,0.475,7.8499]),SFVec3f([17.6538,0.475,14.8499]),SFVec3f([22.1538,0.475,24.3499]),SFVec3f([22.1538,0.475,24.3499]),SFVec3f([22.1538,0.475,24.3499])]),
              metadata_ : [
                MetadataString(
                  name_ : SFString('poses'),
                  value_ : MFString([SFString("Lily_Stand01"), SFString("Lily_Stand01"), SFString("Lily_Stand01"), SFString("Leif_Run01"), SFString("Lily_Turn01"), SFString("Lily_Walk01"), SFString("Lily_Walk01"), SFString("Lily_Skip01"), SFString("Lily_Stand01"), SFString("Lily_Stand01"), SFString("Lily_Stand01")]))]),

            PositionInterpolator(
              DEF_ : SFString('Tufani_HumanoidRoot_TranslationInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.227), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-8.0962,0.4,6.4]),SFVec3f([-8.0962,0.4,6.4]),SFVec3f([-8.0962,0.4,6.4]),SFVec3f([-8.0962,0.4,6.4]),SFVec3f([9.40338,0.475,4.3999]),SFVec3f([9.1538,0.475,3.2699]),SFVec3f([13.6538,0.475,7.7699]),SFVec3f([16.1538,0.475,14.7699]),SFVec3f([20.6538,0.475,24.2699]),SFVec3f([20.6538,0.475,24.2699]),SFVec3f([20.6538,0.475,24.2699])]),
              metadata_ : [
                MetadataString(
                  name_ : SFString('poses'),
                  value_ : MFString([SFString("Tufani_Stand01"), SFString("Tufani_Stand01"), SFString("Tufani_Stand01"), SFString("Tufani_Run01"), SFString("Tufani_Turn01"), SFString("Tufani_Walk01"), SFString("Tufani_Walk01"), SFString("Tufani_Skip01"), SFString("Tufani_Stand01"), SFString("Tufani_Stand01"), SFString("Tufani_Stand01")]))]),

            Background(
              DEF_ : SFString('Background3Black')),

            Background(
              DEF_ : SFString('Background4SkyBlueGreenGrass'),
              skyColor_ : MFColor([SFColor(0), SFColor(0.71), SFColor(0.886)]),
              groundAngle_ : MFFloat([SFFloat(1.57)]),
              groundColor_ : MFColor([SFColor(0.356863), SFColor(0.639216), SFColor(0), SFColor(0.721569), SFColor(1), SFColor(0.501961)])),

            Background(
              DEF_ : SFString('Background5LightGrey'),
              skyColor_ : MFColor([SFColor(0.827), SFColor(0.827), SFColor(0.827)])),

            Background(
              DEF_ : SFString('Background6DarkGrey'),
              skyColor_ : MFColor([SFColor(0.6), SFColor(0.2), SFColor(0.2)])),

            TimeSensor(
              DEF_ : SFString('Clock10Seconds'),
              cycleInterval_ : 5,
              loop_ : true),

            TimeSensor(
              DEF_ : SFString('Clock100Seconds'),
              enabled_ : false,
              cycleInterval_ : 100),

            BooleanSequencer(
              DEF_ : SFString('Background3Sequencer'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.22), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFBool([SFBool(true), SFBool(true), SFBool(true), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false)])),

            BooleanSequencer(
              DEF_ : SFString('Background4Sequencer'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.22), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFBool([SFBool(false), SFBool(false), SFBool(false), SFBool(true), SFBool(true), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false)])),

            BooleanSequencer(
              DEF_ : SFString('Background5Sequencer'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.22), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFBool([SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(true), SFBool(true), SFBool(true), SFBool(false), SFBool(false), SFBool(false)])),

            BooleanSequencer(
              DEF_ : SFString('Background6Sequencer'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.09), SFFloat(0.11), SFFloat(0.22), SFFloat(0.043), SFFloat(0.55), SFFloat(0.63), SFFloat(0.73), SFFloat(0.85), SFFloat(0.86), SFFloat(1)]),
              keyValue_ : MFBool([SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(false), SFBool(true), SFBool(true), SFBool(true)])),

            ROUTE(
              fromNode_ : SFString('Background3Sequencer'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Background3Black'),
              toField_ : SFString('set_bind')),

            ROUTE(
              fromNode_ : SFString('Background4Sequencer'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Background4SkyBlueGreenGrass'),
              toField_ : SFString('set_bind')),

            ROUTE(
              fromNode_ : SFString('Background5Sequencer'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Background5LightGrey'),
              toField_ : SFString('set_bind')),

            ROUTE(
              fromNode_ : SFString('Background6Sequencer'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Background6DarkGrey'),
              toField_ : SFString('set_bind')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background3Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background4Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background5Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background6Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background3Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background4Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background5Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Background6Sequencer'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Gramps_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Leif_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Lily_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock10Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Tufani_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Gramps_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Leif_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Lily_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Clock100Seconds'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Tufani_HumanoidRoot_TranslationInterpolator'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Gramps_HumanoidRoot_TranslationInterpolator'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('TextRoot'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Leif_HumanoidRoot_TranslationInterpolator'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Root4'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Lily_HumanoidRoot_TranslationInterpolator'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Root5'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('Tufani_HumanoidRoot_TranslationInterpolator'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Root6'),
              toField_ : SFString('set_translation'))]));
void main() { exit(0); }
