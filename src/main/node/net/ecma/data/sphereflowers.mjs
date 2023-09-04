'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              name : new SFString("created"),
              content : new SFString("Jan 17 2022")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sep 03 2023")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("5 or more prismatic flowers")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")}),
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})]),
          component : new SFNode(
            new component({
              name : new SFString("EnvironmentalEffects"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Shaders"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("CubeMapTexturing"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Texturing"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Rendering"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Grouping"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Core"),
              level : new SFInt32(1)}))})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("FlowerProto"),
              url : new MFString(["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFSTRING,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("vertex")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  name : new SFString("fragment")})])}),

            new ProtoDeclare({
              name : new SFString("flower"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
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

            new NavigationInfo({}),

            new Background({
              frontUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
              backUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])}),

            new Group({
              children : new MFNode([
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
                  minBack : new SFFloat(20),
                  minFront : new SFFloat(20),
                  maxBack : new SFFloat(100),
                  maxFront : new SFFloat(100),
                  source : new SFNode(
                    new AudioClip({
                      DEF : new SFString("AudioClip"),
                      description : new SFString("Chandubabamusic #1"),
                      url : new MFString(["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"])}))})])}),

            new ROUTE({
              fromNode : new SFString("SongTime"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("AudioClip"),
              toField : new SFString("startTime")})])}))});
console.log(X3D0.toXMLNode());
