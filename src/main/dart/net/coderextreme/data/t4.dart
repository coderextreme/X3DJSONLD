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
              name_ : SFString('Networking'),
              level_ : 2),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 2),
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

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html'))]),
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
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('posi'))]),
                      children_ : [
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
                              radius_ : 5.10000002384186))])])),

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
                          value_ : SFString('0 0.300000011920929 1'))],

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
                          value_ : SFString('1 0 0.200000002980232'))],

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
                          value_ : SFString('0.600000023841858 0 0.600000023841858'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('posi'),
                              protoField_ : SFString('pos'))]))])),

            Transform(
              translation_ : SFVec3f([SFDouble(-468), SFDouble(0), SFDouble(315)]),
              children_ : [
                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('High Peak Community Arts'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('400 0.100000001490116 -385'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('People Express'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('i'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('429.899993896484 0.100000001490116 -319.600006103516'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('QArts/Studios'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('i'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('430 0.100000001490116 -335'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('First Movement'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('n'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('429.899993896484 0.100000001490116 -360.299987792969'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('City Arts'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('i'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('455.899993896484 0.100000001490116 -341.299987792969'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Indigo Dance Group (Salamanda Tandem)'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('456.100006103516 0.100000001490116 -341.5'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Watering Seeds'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('454 0.100000001490116 -361.299987792969'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Fased In The Arts'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('440 0.100000001490116 -350'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('27a Access Artspace'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('n'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('458.899993896484 0.100000001490116 -304.299987792969'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Bamboozle Theatre Company'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('457.100006103516 0.100000001490116 -300.799987792969'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Mantle Community Arts'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('442.399993896484 0.100000001490116 -314.5'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Artlink East'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('491.600006103516 0.100000001490116 -335.700012207031'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Creations'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('467 0.100000001490116 -243.899993896484'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('New Perspectives'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('n'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('457.399993896484 0.100000001490116 -262.700012207031'))])]),

                Anchor(
                  url_ : MFString([SFString(", "), SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('UKan2'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('r'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('pos'),
                          value_ : SFString('458.700012207031 0.100000001490116 -262.700012207031'))])])])]));
void main() { exit(0); }
