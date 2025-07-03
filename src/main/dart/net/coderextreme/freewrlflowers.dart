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
              content_ : SFString('freewrlflowers.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('5 or more prismatic flowers')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(),

            Background(
              backUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]),
              frontUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")])),

            Group(
              children_ : [
                ExternProtoDeclare(
                  name_ : SFString('FlowerProto'),
                  url_ : MFString([SFString("../data/flowerproto.x3d#FlowerProto")]),
                  field_ : [
                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('vertex'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('fragment'),
                      accessType_ : SFString("inputOutput"))]),

                ProtoDeclare(
                  name_ : SFString('flower'),
                  ProtoBody_ : 
                    ProtoBody(
                      children_ : [
                        Group(
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('FlowerProto'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('vertex'),
                                  value_ : SFString('\"../shaders/freewrl_flowers_chromatic.vs\"')),

                                fieldValue(
                                  name_ : SFString('fragment'),
                                  value_ : SFString('\"../shaders/freewrl.fs\"'))])])])),

                ProtoInstance(
                  name_ : SFString('flower')),

                ProtoInstance(
                  name_ : SFString('flower')),

                ProtoInstance(
                  name_ : SFString('flower')),

                ProtoInstance(
                  name_ : SFString('flower')),

                ProtoInstance(
                  name_ : SFString('flower')),

                ProtoInstance(
                  name_ : SFString('flower'))])]));
void main() { exit(0); }
