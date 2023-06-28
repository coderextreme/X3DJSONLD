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
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var ExternProtoDeclare = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("freewrlflowers.x3d")}),

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
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Background({
              backUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])}),

            new Group({
              children : new MFNode([
                new ExternProtoDeclare({
                  name : new SFString("FlowerProto"),
                  url : new MFString(["../data/flowerproto.x3d#FlowerProto"]),
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
                                  value : new SFString("\"../shaders/freewrl_flowers_chromatic.vs\"")}),

                                new fieldValue({
                                  name : new SFString("fragment"),
                                  value : new SFString("\"../shaders/freewrl.fs\"")})])})])})])}))}),

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
                  name : new SFString("flower")})])})])}))});
console.log(X3D0.toXMLNode());
