// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('rubikFurnace.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/rubikFurnace.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a green rubik cube'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")])),

            Viewpoint(
              description_ : SFString('Rubiks Cube on Fire'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            ProtoDeclare(
              name_ : SFString('anyShape'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('xtranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('myShape'),
                      accessType_ : SFString("inputOutput"),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('xtranslation')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('myShape'))]))])),

            ProtoDeclare(
              name_ : SFString('three'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ytranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('myShape'),
                      accessType_ : SFString("inputOutput"),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))])]),
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
                          name_ : SFString('anyShape'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('0 0 0'))],

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
                                  protoField_ : SFString('myShape'))]))])])),

            ProtoDeclare(
              name_ : SFString('nine'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ztranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('myShape'),
                      accessType_ : SFString("inputOutput"),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))])]),
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
                              value_ : SFString('0 0 0'))],

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
                                  protoField_ : SFString('myShape'))]))])])),

            ProtoDeclare(
              name_ : SFString('twentyseven'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ttranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('myShape'),
                      accessType_ : SFString("inputOutput"),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))])]),
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
                              value_ : SFString('0 0 0'))],

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
                                  protoField_ : SFString('myShape'))]))])])),

            ProtoInstance(
              name_ : SFString('twentyseven'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('ttranslation'),
                  value_ : SFString('0 0 0')),

                fieldValue(
                  name_ : SFString('myShape'),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(1)])),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)]))))])])]));
void main() { exit(0); }
