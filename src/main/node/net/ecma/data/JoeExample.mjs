'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { field } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Sound } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { AudioClip } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      version : new SFString("3.0"),
      profile : new SFString("Immersive"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("filename"),
              content : new SFString("Scripting.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Script({
              DEF : new SFString("OpenVault"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("openVault"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("combinationEntered"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("vaultUnlocked"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("unlocked"),
                  value : new SFString("false"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
              ]),
ecmascript:eval (0

      , function combinationEntered (value) {

        unlocked = value;

      }

      , function openVault(value) {

      if (unlocked) vaultUnlocked = value;

      })}),

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      diffuseColor : new SFColor([1,0,0])}))})),
              geometry : new SFNode(
                new Sphere({}))}),

            new Sound({
              maxBack : new SFFloat(1000),
              maxFront : new SFFloat(1000),
              minBack : new SFFloat(1000),
              minFront : new SFFloat(1000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("Click"),
                  stopTime : new SFTime(1),
                  description : new SFString("clicking sound"),
                  url : new MFString(["../resources/chandubabamusic1.wav"])}))}),

            new TouchSensor({
              DEF : new SFString("TS")}),

            new ROUTE({
              fromNode : new SFString("TS"),
              fromField : new SFString("isOver"),
              toNode : new SFString("OpenVault"),
              toField : new SFString("combinationEntered")}),

            new ROUTE({
              fromNode : new SFString("TS"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("OpenVault"),
              toField : new SFString("openVault")}),

            new ROUTE({
              fromNode : new SFString("OpenVault"),
              fromField : new SFString("vaultUnlocked"),
              toNode : new SFString("Click"),
              toField : new SFString("startTime")})])}))});
console.log(X3D0.toXMLNode());
