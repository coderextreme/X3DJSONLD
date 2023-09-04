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
              content_ : SFString('asmallbox.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d'))]),
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
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('myShape'),
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

            ProtoDeclare(
              name_ : SFString('one'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('myShape'),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Cylinder())])]),
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
                                  protoField_ : SFString('myShape'))]))])])),

            ProtoInstance(
              name_ : SFString('one'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('myShape'),
                  children_ : [
                    Shape(
                      DEF_ : SFString('_1'),
                      geometry_ : 
                        Box())])])]));
void main() { exit(0); }
