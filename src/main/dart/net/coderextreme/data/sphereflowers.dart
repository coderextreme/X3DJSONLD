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
              content_ : SFString('sphereflowers.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('Jan 17 2022')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Sep 03 2023')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('5 or more prismatic flowers')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit, https://savage.nps.edu/X3D-Edit')),
          component_ : 
            component(
              name_ : SFString('Scripting'),
              level_ : 1)],
          component_ : 
            component(
              name_ : SFString('EnvironmentalEffects'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Shaders'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('CubeMapTexturing'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Texturing'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Rendering'),
              level_ : 1),
          component_ : 
            component(
              name_ : SFString('Grouping'),
              level_ : 3),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 1)),
      Scene_ : 
        Scene(
          children_ : [
            ExternProtoDeclare(
              name_ : SFString('FlowerProto'),
              url_ : MFString([SFString("../personal/flowerproto.json#FlowerProto"), SFString("https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto")]),
              field_ : [
                field(
                  type_ : SFString("MFString"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('vertex')),

                field(
                  type_ : SFString("MFString"),
                  accessType_ : SFString("inputOutput"),
                  name_ : SFString('fragment'))]),

            ProtoDeclare(
              name_ : SFString('flower'),
              ProtoInterface_ : 
                ProtoInterface(),
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
                              value_ : SFString('\"../shaders/x_ite_flowers_chromatic.vs\"')),

                            fieldValue(
                              name_ : SFString('fragment'),
                              value_ : SFString('\"../shaders/x_ite.fs\"'))])])])),

            NavigationInfo(),

            Background(
              frontUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]),
              backUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]),
              leftUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]),
              rightUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]),
              topUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png")]),
              bottomUrl_ : MFString([SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")])),

            Group(
              children_ : [
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
                  name_ : SFString('flower')),

                TimeSensor(
                  DEF_ : SFString('SongTime'),
                  loop_ : true),

                Sound(
                  minBack_ : 20,
                  minFront_ : 20,
                  maxBack_ : 100,
                  maxFront_ : 100,
                  source_ : 
                    AudioClip(
                      DEF_ : SFString('AudioClip'),
                      description_ : SFString('Chandubabamusic #1'),
                      url_ : MFString([SFString("../resources/chandubabamusic1.wav"), SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav")])))]),

            ROUTE(
              fromNode_ : SFString('SongTime'),
              fromField_ : SFString('cycleTime'),
              toNode_ : SFString('AudioClip'),
              toField_ : SFString('startTime'))]));
void main() { exit(0); }
