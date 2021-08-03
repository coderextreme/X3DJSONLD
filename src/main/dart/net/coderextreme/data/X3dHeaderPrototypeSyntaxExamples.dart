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
          component_ : 
            component(
              name_ : SFString('NURBS'),
              level_ : 2),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 2),
          component_ : 
            component(
              name_ : SFString('Navigation'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Text'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('X3dHeaderPrototypeSyntaxExamples.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('14 October 2002')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 May 2017')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('specificationSection'),
              content_ : SFString('X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax')),

            meta(
              name_ : SFString('specificationUrl'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            ExternProtoDeclare(
              name_ : SFString('ViewPositionOrientation'),
              url_ : MFString([SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")]),
              field_ : [
                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('set_traceEnabled'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('position_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('orientation_changed'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('outputViewpointString'),
                  accessType_ : SFString("outputOnly"))]),

            ProtoDeclare(
              name_ : SFString('NewWorldInfoNode'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    WorldInfo(
                      DEF_ : SFString('ExamplePrototypeBody'))])),

            ProtoInstance(
              name_ : SFString('NewWorldInfoNode')),

            ProtoDeclare(
              name_ : SFString('EmissiveMaterial'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('onlyColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  /*Override default diffuseColor value 0.8 0.8 0.8*/
                  children_ : [
                    Material(
                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      /*Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.*/
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('emissiveColor'),
                              protoField_ : SFString('onlyColor'))]))])),

            ProtoDeclare(
              name_ : SFString('ShiftGroupUp2m'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput"),
                      children_ : [
                        Group(
                          DEF_ : SFString('DefaultNodeValue'),
                          bboxSize_ : SFVec3f([SFDouble(2), SFDouble(2), SFDouble(2)]),
                          /*Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"*/)])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Group(
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('children'),
                                  protoField_ : SFString('children'))]))])])),

            ProtoInstance(
              name_ : SFString('ShiftGroupUp2m')),
          /*====================*/

            Viewpoint(
              DEF_ : SFString('ExampleSingleElement'),
              description_ : SFString('Hello syntax')),

            Group(
              DEF_ : SFString('ExampleChildElement'),
              children_ : [
                Shape(
                  geometry_ : 
                    Box(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.6), SFDouble(0.4), SFDouble(0.2)]))))]),

            Transform(
              DEF_ : SFString('TransformExampleUSE'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(0.78)]),
              translation_ : SFVec3f([SFDouble(0), SFDouble(2.5), SFDouble(0)]),
              children_ : [
                Group(
                  USE_ : SFString('ExampleChildElement'))]),

            Collision(
              proxy_ : 
                Shape(
                  /*note that Collision proxy Shape is not rendered*/
                  geometry_ : 
                    Sphere(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material())),
              proxy_ : 
                Group(
                  USE_ : SFString('ExampleChildElement'))),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(-2.5), SFDouble(0)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      shaders_ : 
                        ProtoInstance(
                          name_ : SFString('EmissiveMaterial'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('onlyColor'),
                              value_ : SFString('0.2 0.6 0.6'))])),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("X3D Header Prototype syntax examples"), SFString("(view console for EXTERNPROTO output)")]),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.6)))]),

            ProtoInstance(
              name_ : SFString('ViewPositionOrientation'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true'))]),

            TimeSensor(
              DEF_ : SFString('Clock'),
              cycleInterval_ : 4,
              loop_ : true),

            OrientationInterpolator(
              DEF_ : SFString('Spinner'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(3.14159), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(6.28318)])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Spinner')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Spinner'),
              toField_ : SFString('rotation'),
              toNode_ : SFString('TransformExampleUSE')),

            Inline(
              DEF_ : SFString('someInline'),
              url_ : MFString([SFString("someUrl.x3d"), SFString("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d")])),

            IMPORT(
              aS_ : SFString('someInlineRoot'),
              importedDEF_ : SFString('someName'),
              inlineDEF_ : SFString('someInline')),

            PositionInterpolator(
              DEF_ : SFString('StayInPlace'),
              key_ : MFFloat([SFFloat(0), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('StayInPlace')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('StayInPlace'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('someInlineRoot'))]));
void main() { exit(0); }
