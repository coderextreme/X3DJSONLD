// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('generator'),
              content_ : SFString('view3dscene, https://castle-engine.io/view3dscene.php')),
          component_ : 
            component(
              name_ : SFString('Networking'),
              level_ : 2)]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('org'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('posi')),

                    field(
                      type_ : SFString("SFColor"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('col'))]),
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
                                  transparency_ : 0.4,
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('emissiveColor'),
                                          protoField_ : SFString('col'))]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 1.1)),
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
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('pos'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('org'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('col'),
                          value_ : SFString('0 0.3 1'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('posi'),
                              protoField_ : SFString('pos'))]))])),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("WALK")]),
              avatarSize_ : MFFloat([SFFloat(200), SFFloat(200), SFFloat(120)]),
              speed_ : 3),

            WorldInfo(
              title_ : SFString('Arts Mapper')),

            Viewpoint(
              description_ : SFString('looking North'),
              position_ : SFVec3f([SFDouble(0), SFDouble(60), SFDouble(110)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.699999988079071)]),
              fieldOfView_ : 0.7853981),

            Viewpoint(
              description_ : SFString('looking East'),
              position_ : SFVec3f([SFDouble(-140), SFDouble(30), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(0.400000005960464), SFDouble(0), SFDouble(-1.39999997615814)]),
              fieldOfView_ : 0.7853981),

            Viewpoint(
              description_ : SFString('Overhead'),
              position_ : SFVec3f([SFDouble(0), SFDouble(150), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57000005245209)]),
              fieldOfView_ : 0.7853981),

            Anchor(
              description_ : SFString('High Peak Community Arts'),
              url_ : MFString([SFString("javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
              children_ : [
                ProtoInstance(
                  name_ : SFString('r'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('pos'),
                      value_ : SFString('400 0.1 -385'))])])]));
void main() { exit(0); }
