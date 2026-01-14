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
              name_ : SFString('creator'),
              content_ : SFString('John W Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('December 13 2015')),

            meta(
              name_ : SFString('title'),
              content_ : SFString('text3shapes.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('3 text shapes')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              child_ : 
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Node\"\"\"")]),
                      fontStyle_ : 
                        FontStyle()),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material())),
              child_ : 
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Node2"), SFString("\\\\"), SFString("\\\\\\\\"), SFString("Node2")]),
                      fontStyle_ : 
                        FontStyle()),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material())),
              child_ : 
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Node3 \\\\\\\\ \\\\ "), SFString("Node3\"\"\"")]),
                      fontStyle_ : 
                        FontStyle()),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material())),
              children_ : [
                Script(
                  field_ : [
                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('frontUrls'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('\"rnl_front.png\" \"uffizi_front.png\"')),
                  ],
ecmascript:eval (0
			    var me = '"1" ""2" "\n3"';))])]));
void main() { exit(0); }
