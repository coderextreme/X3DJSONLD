// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('Networking'),
              level_ : 2),
          meta_ : [
            meta(
              name_ : SFString('generator'),
              content_ : SFString('view3dscene, https://castle-engine.io/view3dscene.php')),

            meta(
              name_ : SFString('source'),
              content_ : SFString('t1.wrl'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("WALK")]),
              speed_ : 3,
              avatarSize_ : MFFloat([SFFloat(200), SFFloat(200), SFFloat(120)])),

            WorldInfo(
              title_ : SFString('Arts Mapper')),

            Viewpoint(
              description_ : SFString('looking North'),
              position_ : SFVec3f([SFDouble(0), SFDouble(60), SFDouble(110)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.699999988079071)]),
              fieldOfView_ : 0.785398125648499),

            Viewpoint(
              description_ : SFString('looking East'),
              position_ : SFVec3f([SFDouble(-140), SFDouble(30), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(0.400000005960464), SFDouble(0), SFDouble(-1.39999997615814)]),
              fieldOfView_ : 0.785398125648499),

            Viewpoint(
              description_ : SFString('Overhead'),
              position_ : SFVec3f([SFDouble(0), SFDouble(150), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57000005245209)]),
              fieldOfView_ : 0.785398125648499),

            ProtoDeclare(
              name_ : SFString('org'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('posi'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('col'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  transparency_ : 0.400000005960464,
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('emissiveColor'),
                                          protoField_ : SFString('col'))]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 1.10000002384186))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('posi'))]))])),

            ProtoDeclare(
              name_ : SFString('r'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('pos'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('org'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('col'),
                          value_ : SFString('0 0.300000011920929 1')),

                        fieldValue(
                          name_ : SFString('posi'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('posi'),
                              protoField_ : SFString('pos'))]))])),

            Anchor(
              url_ : MFString([SFString("javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
              description_ : SFString('High Peak Community Arts'),
              children_ : [
                ProtoInstance(
                  name_ : SFString('r'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('pos'),
                      value_ : SFString('400 0.100000001490116 -385'))])])]));
void main() { exit(0); }
