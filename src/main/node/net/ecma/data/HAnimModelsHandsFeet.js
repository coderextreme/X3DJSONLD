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
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var WorldInfo = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var Transform = require('./x3d.js');
var Inline = require('./x3d.js');
var MFString = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimModelsHandsFeet.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("YOO Kwan Hee and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("8 February 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("8 March 2021")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("not yet to scale")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimModelsHandsFeet.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimModelsHandsFeetWithFour1mGrids.png")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/working-groups/humanoid-animation-HAnim")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D HAnim humanoid animation")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HAnimModelsHandsFeet.x3d")}),

            new Viewpoint({
              description : new SFString("Hands and feet 10m")}),

            new Viewpoint({
              description : new SFString("Hands and feet 1.7m"),
              position : new SFVec3f([0,0,1.7])}),

            new Transform({
              translation : new SFVec3f([-1,1,0]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"])}),
              /*Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model*/

                new Transform({
                  DEF : new SFString("GridXY_20x20Fixed_AdjustScale"),
                  scale : new SFVec3f([0.1,0.1,0.1]),
                  children : new MFNode([
                    new Inline({
                      DEF : new SFString("GridXY_20x20Fixed"),
                      url : new MFString(["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])})])})])}),

            new Transform({
              translation : new SFVec3f([1,1,0]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"])}),

                new Transform({
                  USE : new SFString("GridXY_20x20Fixed_AdjustScale")})])}),

            new Transform({
              translation : new SFVec3f([-1,-1,0]),
              /*rotation='0 0 1 3.141593'*/
              children : new MFNode([
                new Inline({
                  url : new MFString(["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"])}),

                new Transform({
                  USE : new SFString("GridXY_20x20Fixed_AdjustScale")})])}),

            new Transform({
              translation : new SFVec3f([1,-1,0]),
              /*rotation='0 0 1 3.141593'*/
              children : new MFNode([
                new Inline({
                  url : new MFString(["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"])}),

                new Transform({
                  USE : new SFString("GridXY_20x20Fixed_AdjustScale")})])})])}))});
console.log(X3D0.toXMLNode());
