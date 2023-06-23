'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var Script = require('./x3d.js');
var field = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var Sphere = require('./x3d.js');
var Sound = require('./x3d.js');
var SFFloat = require('./x3d.js');
var AudioClip = require('./x3d.js');
var SFTime = require('./x3d.js');
var MFString = require('./x3d.js');
var TouchSensor = require('./x3d.js');
var ROUTE = require('./x3d.js');
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
