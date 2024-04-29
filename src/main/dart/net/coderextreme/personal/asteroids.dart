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
              content_ : SFString('asteroids.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/personal/asteroids.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('asteroids'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('anyShape'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('myShape'),
                      accessType_ : SFString("inputOutput"),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere())])]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('myShape'))]))])),

            ProtoInstance(
              name_ : SFString('anyShape'))]));
void main() { exit(0); }
