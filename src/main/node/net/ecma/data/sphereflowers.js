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
var NavigationInfo = require('./x3d.js');
var Background = require('./x3d.js');
var MFString = require('./x3d.js');
var Group = require('./x3d.js');
var ExternProtoDeclare = require('./x3d.js');
var field = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var TimeSensor = require('./x3d.js');
var SFBool = require('./x3d.js');
var Sound = require('./x3d.js');
var SFFloat = require('./x3d.js');
var AudioClip = require('./x3d.js');
var ROUTE = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("sphereflowers.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("5 or more prismatic flowers")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/sphereflowers.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Background({
              backUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_back.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_bottom.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_front.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"])}),

            new Group({
              children : new MFNode([
                new ExternProtoDeclare({
                  name : new SFString("FlowerProto"),
                  url : new MFString(["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto","https://localhost:3000/src/main/personal/flowerproto.json#FlowerProto"]),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("vertex"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("fragment"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

                new ProtoDeclare({
                  name : new SFString("flower"),
                  ProtoBody : new SFNode(
                    new ProtoBody({
                      children : new MFNode([
                        new Group({
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("FlowerProto"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("vertex"),
                                  value : new SFString("\"../shaders/x_ite_flowers_chromatic.vs\"")}),

                                new fieldValue({
                                  name : new SFString("fragment"),
                                  value : new SFString("\"../shaders/x_ite.fs\"")})])})])})])}))}),

                new ProtoInstance({
                  name : new SFString("flower")}),

                new ProtoInstance({
                  name : new SFString("flower")}),

                new ProtoInstance({
                  name : new SFString("flower")}),

                new ProtoInstance({
                  name : new SFString("flower")}),

                new ProtoInstance({
                  name : new SFString("flower")}),

                new ProtoInstance({
                  name : new SFString("flower")}),

                new TimeSensor({
                  DEF : new SFString("SongTime"),
                  loop : new SFBool(true)}),

                new Sound({
                  maxBack : new SFFloat(100),
                  maxFront : new SFFloat(100),
                  minBack : new SFFloat(20),
                  minFront : new SFFloat(20),
                  source : new SFNode(
                    new AudioClip({
                      DEF : new SFString("AudioClip"),
                      description : new SFString("Chandubabamusic #1"),
                      url : new MFString(["../resources/chandubabamusic1.wav"])}))}),

                new ROUTE({
                  fromField : new SFString("cycleTime"),
                  fromNode : new SFString("SongTime"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("AudioClip")})])})])}))});
console.log(X3D0.toXMLNode());
