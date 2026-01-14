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
              content_ : SFString('Scripting.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            Script(
              DEF_ : SFString('OpenVault'),
              field_ : [
                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('openVault'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('combinationEntered'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('vaultUnlocked'),
                  accessType_ : SFString("outputOnly")),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('unlocked'),
                  value_ : SFString('false'),
                  accessType_ : SFString("initializeOnly")),
              ],
ecmascript:eval (0

      , function combinationEntered (value) {

        unlocked = value;

      }

      , function openVault(value) {

      if (unlocked) vaultUnlocked = value;

      })),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
              geometry_ : 
                Sphere()),

            Sound(
              maxBack_ : 1000,
              maxFront_ : 1000,
              minBack_ : 1000,
              minFront_ : 1000,
              source_ : 
                AudioClip(
                  DEF_ : SFString('Click'),
                  stopTime_ : 1,
                  description_ : SFString('clicking sound'),
                  url_ : MFString([SFString("../resources/chandubabamusic1.wav")]))),

            TouchSensor(
              DEF_ : SFString('TS')),

            ROUTE(
              fromNode_ : SFString('TS'),
              fromField_ : SFString('isOver'),
              toNode_ : SFString('OpenVault'),
              toField_ : SFString('combinationEntered')),

            ROUTE(
              fromNode_ : SFString('TS'),
              fromField_ : SFString('touchTime'),
              toNode_ : SFString('OpenVault'),
              toField_ : SFString('openVault')),

            ROUTE(
              fromNode_ : SFString('OpenVault'),
              fromField_ : SFString('vaultUnlocked'),
              toNode_ : SFString('Click'),
              toField_ : SFString('startTime'))]));
void main() { exit(0); }
