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
              content_ : SFString('rubikOnFire.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('anyShape'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('xtranslation')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('myShape'),
                      children_ : [
                        Sphere()])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('geometry'),
                                  protoField_ : SFString('myShape'))])),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('xtranslation'))]))])),

            ProtoDeclare(
              name_ : SFString('three'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('ytranslation')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('myShape'),
                      children_ : [
                        Sphere(
                          DEF_ : SFString('_1'))])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('anyShape'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))])),

                        ProtoInstance(
                          name_ : SFString('anyShape'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('2 0 0'))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))])),

                        ProtoInstance(
                          name_ : SFString('anyShape'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('-2 0 0'))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))]))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('ytranslation'))]))])),

            ProtoDeclare(
              name_ : SFString('nine'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('ztranslation')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('myShape'),
                      children_ : [
                        Sphere(
                          DEF_ : SFString('_2'))])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('three'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))])),

                        ProtoInstance(
                          name_ : SFString('three'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 2 0'))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))])),

                        ProtoInstance(
                          name_ : SFString('three'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 -2 0'))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))]))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('ztranslation'))]))])),

            ProtoDeclare(
              name_ : SFString('twentyseven'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('ttranslation')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('myShape'),
                      children_ : [
                        Sphere(
                          DEF_ : SFString('_3'))])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('nine'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))])),

                        ProtoInstance(
                          name_ : SFString('nine'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 2'))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))])),

                        ProtoInstance(
                          name_ : SFString('nine'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 -2'))],

                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('myShape'),
                                  protoField_ : SFString('myShape'))]))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('ttranslation'))]))])),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")])),

            Viewpoint(
              description_ : SFString('Rubiks Cube on Fire'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            ProtoInstance(
              name_ : SFString('twentyseven'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('myShape'),
                  children_ : [
                    Box(
                      DEF_ : SFString('_4'),
                      size_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1)]))])])]));
void main() { exit(0); }
