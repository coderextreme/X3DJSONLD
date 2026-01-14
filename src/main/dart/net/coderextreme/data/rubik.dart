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
              content_ : SFString('rubik.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a kind of rubik cube with spheres'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("ANY"), SFString("EXAMINE"), SFString("WALK"), SFString("FLY"), SFString("LOOKAT")])),

            Viewpoint(
              description_ : SFString('Rubiks Cube'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            ProtoDeclare(
              name_ : SFString('sphereproto'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('xtranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('xtranslation'))]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Sphere(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))))])),

            ProtoDeclare(
              name_ : SFString('three'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ytranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('ytranslation'))]),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('sphereproto'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('0 0 0'))]),

                        ProtoInstance(
                          name_ : SFString('sphereproto'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('2 0 0'))]),

                        ProtoInstance(
                          name_ : SFString('sphereproto'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('-2 0 0'))])])])),

            ProtoDeclare(
              name_ : SFString('nine'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ztranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('ztranslation'))]),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('three'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 0 0'))]),

                        ProtoInstance(
                          name_ : SFString('three'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 2 0'))]),

                        ProtoInstance(
                          name_ : SFString('three'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 -2 0'))])])])),

            ProtoDeclare(
              name_ : SFString('twentyseven'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ttranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('ttranslation'))]),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('nine'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 0'))]),

                        ProtoInstance(
                          name_ : SFString('nine'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 2'))]),

                        ProtoInstance(
                          name_ : SFString('nine'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 -2'))])])])),

            ProtoInstance(
              name_ : SFString('twentyseven'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('ttranslation'),
                  value_ : SFString('0 0 0'))])]));
void main() { exit(0); }
