// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('Figure31_9SpinGroupPrototype.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('24 October 2000')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('Figure31_9SpinGroupPrototype.x3d')),

            ProtoDeclare(
              name_ : SFString('SpinGroup'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput"),
                      /*NULL node initialization*/),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('cycleInterval'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('loop'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('startTime'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('stopTime'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('SpinGroupTransform'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children'))])),
                  /*following nodes will not be rendered, only the first node of a ProtoBody is drawn*/

                    TimeSensor(
                      DEF_ : SFString('SpinGroupClock'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('cycleInterval'),
                              protoField_ : SFString('cycleInterval')),

                            connect(
                              nodeField_ : SFString('loop'),
                              protoField_ : SFString('loop')),

                            connect(
                              nodeField_ : SFString('startTime'),
                              protoField_ : SFString('startTime')),

                            connect(
                              nodeField_ : SFString('stopTime'),
                              protoField_ : SFString('stopTime'))])),

                    OrientationInterpolator(
                      DEF_ : SFString('Spinner'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(3.14), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(6.28)])),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('SpinGroupClock'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('Spinner')),

                    ROUTE(
                      fromField_ : SFString('value_changed'),
                      fromNode_ : SFString('Spinner'),
                      toField_ : SFString('set_rotation'),
                      toNode_ : SFString('SpinGroupTransform'))])),
          /*Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).*/

            Viewpoint(
              description_ : SFString('Click on blue crossbar to activate second SpinGroup'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.52)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(18), SFDouble(30)])),
          /*Create an instance, meaning actual nodes that render*/

            ProtoInstance(
              name_ : SFString('SpinGroup'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('cycleInterval'),
                  value_ : SFString('8')),

                fieldValue(
                  name_ : SFString('loop'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('children'),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(25), SFDouble(2), SFDouble(2)])),
                      appearance_ : 
                        Appearance(
                          DEF_ : SFString('Green'),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0.3)])))),

                    Shape(
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(2), SFDouble(25), SFDouble(2)])),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('Green'))),

                    ProtoInstance(
                      name_ : SFString('SpinGroup'),
                      DEF_ : SFString('SecondSpinGroup'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('cycleInterval'),
                          value_ : SFString('4')),

                        fieldValue(
                          name_ : SFString('loop'),
                          value_ : SFString('true')),

                        fieldValue(
                          name_ : SFString('stopTime'),
                          value_ : SFString('1')),

                        fieldValue(
                          name_ : SFString('children'),
                          children_ : [
                            TouchSensor(
                              DEF_ : SFString('ActivateSecondSpinGroup'),
                              description_ : SFString('Activate second SpinGroup by clicking blue bar')),

                            Shape(
                              geometry_ : 
                                Box(
                                  size_ : SFVec3f([SFDouble(2), SFDouble(2.05), SFDouble(25)])),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))))]),
                      /*stopTime > startTime ensures that initial state is stopped*/])])]),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('ActivateSecondSpinGroup'),
              toField_ : SFString('startTime'),
              toNode_ : SFString('SecondSpinGroup'))]));
void main() { exit(0); }
