// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('X_ITE'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('Bobble Spheres Full Animation (Final Working)')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Generated from Python script'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('Bobble Spheres (PBR Full Animation)')),

            NavigationInfo(),

            Background(
              skyAngle_ : MFFloat([SFFloat(1.57)]),
              skyColor_ : MFColor([SFColor(0.15), SFColor(0.25), SFColor(0.8), SFColor(0.9), SFColor(0.9), SFColor(0.9)])),

            Viewpoint(
              description_ : SFString('Initial Camera'),
              position_ : SFVec3f([SFDouble(-70), SFDouble(15), SFDouble(-25)]),
              orientation_ : SFRotation([SFDouble(0.147), SFDouble(0.989), SFDouble(0.005), SFDouble(-1.82)]),
              fieldOfView_ : 0.349),

            DirectionalLight(
              direction_ : SFVec3f([SFDouble(-0.5), SFDouble(-1), SFDouble(-0.5)]),
              intensity_ : 2),
          /*Static objects*/

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(-1000), SFDouble(-1)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          baseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 1000))),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          baseColor_ : SFColor([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)]),
                          transmissionFactor_ : "0.9",
                          roughness_ : 0,
                          indexOfRefraction_ : "1.5")),
                  geometry_ : 
                    Sphere())),

            Transform(
              translation_ : SFVec3f([SFDouble(-4), SFDouble(1), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          baseColor_ : SFColor([SFDouble(1), SFDouble(0.95), SFDouble(0.9)]),
                          transmissionFactor_ : "0.8",
                          roughness_ : 0.05,
                          indexOfRefraction_ : "1.1")),
                  geometry_ : 
                    Sphere())),

            Transform(
              translation_ : SFVec3f([SFDouble(4), SFDouble(1), SFDouble(0)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          baseColor_ : SFColor([SFDouble(0.7), SFDouble(0.6), SFDouble(0.5)]),
                          roughness_ : 0.1)),
                  geometry_ : 
                    Sphere())),
          /*=== DYNAMICALLY GENERATED SPHERES ===*/
          /*Example: Matte Sphere with animated color and roughness (Using initialize())*/

            Transform(
              DEF_ : SFString('T_0'),
              translation_ : SFVec3f([SFDouble(-10.871), SFDouble(0.2), SFDouble(-10.453)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          DEF_ : SFString('M_0'),
                          baseColor_ : SFColor([SFDouble(0.627), SFDouble(0.003), SFDouble(0.165)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.2))),

            TimeSensor(
              DEF_ : SFString('C_0'),
              cycleInterval_ : 5.21,
              loop_ : true),

            PositionInterpolator(
              DEF_ : SFString('PI_0'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-10.871,0.2,-10.453]),SFVec3f([-10.871,0.6,-10.453]),SFVec3f([-10.871,0.2,-10.453])])),

            ColorInterpolator(
              DEF_ : SFString('CI_0'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFColor([SFColor(0.627), SFColor(0.003), SFColor(0.165), SFColor(0.011), SFColor(0.583), SFColor(0.443), SFColor(0.627), SFColor(0.003), SFColor(0.165)])),

            ScalarInterpolator(
              DEF_ : SFString('SI_0'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFFloat([SFFloat(1), SFFloat(0.4), SFFloat(1)])),

            Script(
              DEF_ : SFString('Animator_0'),
              field_ : [
                field(
                  type_ : SFString("SFColor"),
                  name_ : SFString('set_color'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('set_roughness'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('targetMaterial'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    PhysicalMaterial(
                      USE_ : SFString('M_0'))]),
              ],
ecmascript:eval (0
        var matNode = null; // Variable to hold the material node reference

        , function initialize() {
          // This , function runs AFTER the targetMaterial field is connected.
          // We safely store the reference to the actual material node.
          matNode = targetMaterial.value;
        }

        , function set_color(value, timestamp) {
          if (matNode) { // Check if the node reference was stored
            matNode.baseColor = value;
          }
        }
        , function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        })),

            ROUTE(
              fromNode_ : SFString('C_0'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('PI_0'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PI_0'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('T_0'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('C_0'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('CI_0'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('CI_0'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Animator_0'),
              toField_ : SFString('set_color')),

            ROUTE(
              fromNode_ : SFString('C_0'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('SI_0'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('SI_0'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Animator_0'),
              toField_ : SFString('set_roughness')),
          /*Example: Metal Sphere with animated roughness (Using initialize())*/

            Transform(
              DEF_ : SFString('T_1'),
              translation_ : SFVec3f([SFDouble(-10.411), SFDouble(0.2), SFDouble(-9.16)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          DEF_ : SFString('M_1'),
                          baseColor_ : SFColor([SFDouble(0.707), SFDouble(0.888), SFDouble(0.536)]),
                          roughness_ : 0.2)),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.2))),

            TimeSensor(
              DEF_ : SFString('C_1'),
              cycleInterval_ : 4.15,
              loop_ : true),

            PositionInterpolator(
              DEF_ : SFString('PI_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-10.411,0.2,-9.16]),SFVec3f([-10.411,0.6,-9.16]),SFVec3f([-10.411,0.2,-9.16])])),

            ScalarInterpolator(
              DEF_ : SFString('SI_1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFFloat([SFFloat(0.5), SFFloat(0), SFFloat(0.5)])),

            Script(
              DEF_ : SFString('Animator_1'),
              field_ : [
                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('set_roughness'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('targetMaterial'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    PhysicalMaterial(
                      USE_ : SFString('M_1'))]),
              ],
ecmascript:eval (0
        var matNode = null;

        , function initialize() {
          matNode = targetMaterial.value;
        }

        , function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        })),

            ROUTE(
              fromNode_ : SFString('C_1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('PI_1'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PI_1'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('T_1'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('C_1'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('SI_1'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('SI_1'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Animator_1'),
              toField_ : SFString('set_roughness')),
          /*The extension-based spheres were already correct and need no changes*/

            Transform(
              DEF_ : SFString('T_2'),
              translation_ : SFVec3f([SFDouble(-10.155), SFDouble(0.2), SFDouble(-8.324)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          transmissionFactor_ : "0.95",
                          roughness_ : 0.05,
                          iORMaterialExtension_ : 
                            IORMaterialExtension(
                              DEF_ : SFString('IOR_2'),
                              indexOfRefraction_ : SFString('1.5')))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.2))),

            TimeSensor(
              DEF_ : SFString('C_2'),
              cycleInterval_ : 3.88,
              loop_ : true),

            PositionInterpolator(
              DEF_ : SFString('PI_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-10.155,0.2,-8.324]),SFVec3f([-10.155,0.6,-8.324]),SFVec3f([-10.155,0.2,-8.324])])),

            ScalarInterpolator(
              DEF_ : SFString('SI_2'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFFloat([SFFloat(1.4), SFFloat(1.7), SFFloat(1.4)])),

            ROUTE(
              fromNode_ : SFString('C_2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('PI_2'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PI_2'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('T_2'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('C_2'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('SI_2'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('SI_2'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('IOR_2'),
              toField_ : SFString('set_indexOfRefraction')),

            Transform(
              DEF_ : SFString('T_3'),
              translation_ : SFVec3f([SFDouble(-10.518), SFDouble(0.2), SFDouble(-7.283)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        PhysicalMaterial(
                          transmissionFactor_ : "0.95",
                          roughness_ : 0.05,
                          indexOfRefraction_ : "1.33",
                          iridescenceMaterialExtension_ : 
                            IridescenceMaterialExtension(
                              DEF_ : SFString('IRI_3'),
                              iridescence_ : SFString('1'),
                              iridescenceIndexOfRefraction_ : SFString('1.3'),
                              iridescenceThicknessMinimum_ : SFString('100')))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.2))),

            TimeSensor(
              DEF_ : SFString('C_3'),
              cycleInterval_ : 6,
              loop_ : true),

            PositionInterpolator(
              DEF_ : SFString('PI_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-10.518,0.2,-7.283]),SFVec3f([-10.518,0.6,-7.283]),SFVec3f([-10.518,0.2,-7.283])])),

            ScalarInterpolator(
              DEF_ : SFString('SI_3'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFFloat([SFFloat(100), SFFloat(700), SFFloat(100)])),

            ROUTE(
              fromNode_ : SFString('C_3'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('PI_3'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('PI_3'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('T_3'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('C_3'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('SI_3'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('SI_3'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('IRI_3'),
              toField_ : SFString('set_iridescenceThicknessMaximum'))]));
void main() { exit(0); }
