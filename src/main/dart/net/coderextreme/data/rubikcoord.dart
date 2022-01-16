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
              content_ : SFString('rubikcoord.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/rubik.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a kind of 2x2x2 rubik cube'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE")])),

            Viewpoint(
              description_ : SFString('Rubiks Cube'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Background(
              skyColor_ : MFColor([SFColor(1), SFColor(1), SFColor(1)])),

            ProtoDeclare(
              name_ : SFString('boxproto'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('xtranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('diffuseColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 1 1'))]),
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
                      children_ : [
                        Shape(
                          geometry_ : 
                            Box(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('diffuseColor'),
                                          protoField_ : SFString('diffuseColor'))]))))])])),

            ProtoDeclare(
              name_ : SFString('two'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ytranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('diffuseColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 0 0'))]),
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
                          name_ : SFString('boxproto'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('0 0 0')),

                            fieldValue(
                              name_ : SFString('diffuseColor'),
                              value_ : SFString('1 0 0'),
                              children_ : [
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('diffuseColor'),
                                      protoField_ : SFString('diffuseColor'))])])]),

                        ProtoInstance(
                          name_ : SFString('boxproto'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('xtranslation'),
                              value_ : SFString('2 0 0')),

                            fieldValue(
                              name_ : SFString('diffuseColor'),
                              value_ : SFString('1 0 0'),
                              children_ : [
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('diffuseColor'),
                                      protoField_ : SFString('diffuseColor'))])])])])])),

            ProtoDeclare(
              name_ : SFString('four'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('ztranslation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('x1diffuseColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 0 0')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('x2diffuseColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 1 0'))]),
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
                          name_ : SFString('two'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 0 0')),

                            fieldValue(
                              name_ : SFString('diffuseColor'),
                              value_ : SFString('1 0 0'),
                              children_ : [
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('diffuseColor'),
                                      protoField_ : SFString('x1diffuseColor'))])])]),

                        ProtoInstance(
                          name_ : SFString('two'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ytranslation'),
                              value_ : SFString('0 2 0')),

                            fieldValue(
                              name_ : SFString('diffuseColor'),
                              value_ : SFString('0 1 0'),
                              children_ : [
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('diffuseColor'),
                                      protoField_ : SFString('x2diffuseColor'))])])])])])),

            ProtoDeclare(
              name_ : SFString('eight'),
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
                          name_ : SFString('four'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 0')),

                            fieldValue(
                              name_ : SFString('x1diffuseColor'),
                              value_ : SFString('1 0 0')),

                            fieldValue(
                              name_ : SFString('x2diffuseColor'),
                              value_ : SFString('0 1 0'))]),

                        ProtoInstance(
                          name_ : SFString('four'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('ztranslation'),
                              value_ : SFString('0 0 2')),

                            fieldValue(
                              name_ : SFString('x1diffuseColor'),
                              value_ : SFString('0 0 1')),

                            fieldValue(
                              name_ : SFString('x2diffuseColor'),
                              value_ : SFString('1 1 0'))])])])),

            ProtoInstance(
              name_ : SFString('eight'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('ttranslation'),
                  value_ : SFString('0 0 0'))]),
          /*Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>*/]));
void main() { exit(0); }
