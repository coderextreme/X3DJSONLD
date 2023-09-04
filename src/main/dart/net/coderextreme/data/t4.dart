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
              content_ : SFString('t4.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('view3dscene, https://castle-engine.io/view3dscene.php')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Andreas Plesch and John Carlson')),

            meta(
              name_ : SFString('source'),
              content_ : SFString('t1.wrl')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Test Case for Proto Expander')),
          component_ : 
            component(
              name_ : SFString('Networking'),
              level_ : 2)],
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 2)),
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
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('emissiveColor'),
                                          protoField_ : SFString('col'))]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)),
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

            ProtoDeclare(
              name_ : SFString('n'),
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
                          value_ : SFString('1 0 0.2'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('posi'),
                              protoField_ : SFString('pos'))]))])),

            ProtoDeclare(
              name_ : SFString('i'),
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
                          value_ : SFString('0.6 0 0.6'))],

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

            Transform(
              translation_ : SFVec3f([SFDouble(-468), SFDouble(0), SFDouble(315)]),
              children_ : [
                Anchor(
                  description_ : SFString('High Peak Community Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('400 0.1 -385'))])]),

                Anchor(
                  description_ : SFString('People Express'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('i'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('429.9 0.1 -319.6'))])]),

                Anchor(
                  description_ : SFString('QArts/Studios'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('i'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('430 0.1 -335'))])]),

                Anchor(
                  description_ : SFString('First Movement'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('n'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('429.9 0.1 -360.3'))])]),

                Anchor(
                  description_ : SFString('City Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('i'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('455.9 0.1 -341.3'))])]),

                Anchor(
                  description_ : SFString('Indigo Dance Group (Salamanda Tandem)'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('456.1 0.1 -341.5'))])]),

                Anchor(
                  description_ : SFString('Watering Seeds'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('454 0.1 -361.3'))])]),

                Anchor(
                  description_ : SFString('Fased In The Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('440 0.1 -350'))])]),

                Anchor(
                  description_ : SFString('27a Access Artspace'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('n'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('458.9 0.1 -304.3'))])]),

                Anchor(
                  description_ : SFString('Bamboozle Theatre Company'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('457.1 0.1 -300.8'))])]),

                Anchor(
                  description_ : SFString('Mantle Community Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('442.4 0.1 -314.5'))])]),

                Anchor(
                  description_ : SFString('Artlink East'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('491.6 0.1 -335.7'))])]),

                Anchor(
                  description_ : SFString('Creations'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('467 0.1 -243.9'))])]),

                Anchor(
                  description_ : SFString('New Perspectives'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('n'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('457.4 0.1 -262.7'))])]),

                Anchor(
                  description_ : SFString('UKan2'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('458.7 0.1 -262.7'))])])])]));
void main() { exit(0); }
