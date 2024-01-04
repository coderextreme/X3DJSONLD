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
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("DiamondManLOA0.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Matthew T. Beitler")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Joel S. Pawloski")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("12 November 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 30 Dec 2023 07:36:14 GMT")}),

            new meta({
              name : new SFString("motto"),
              content : new SFString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://ece.uwaterloo.ca/~HAnim")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~beitler")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("humanoid_landmark_locations.gif")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d")}),
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HANIM 2.0 Default Joint Centers, LOA0"),
              info : new MFString(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              description : new SFString("Diamond Man, LOA 0"),
              position : new SFVec3f([0,1,3]),
              centerOfRotation : new SFVec3f([0,1,0])}),

            new HAnimHumanoid({
              DEF : new SFString("hanim_humanoid"),
              name : new SFString("humanoid"),
              loa : new SFInt32(0),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorEmail"),
                      value : new MFString(["beitler@graphics.cis.upenn.edu beitler@acm.org"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["Matthew T. Beitler"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("copyright"),
                      value : new MFString(["Copyright 1999 Matthew T. Beitler"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("creationDate"),
                      value : new MFString(["05/12/99"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("humanoidVersion"),
                      value : new MFString(["JointCenters 1.1 LOA0"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("usageRestrictions"),
                      value : new MFString(["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])}))}),
              joints : new MFNode([
                new HAnimJoint({
                  DEF : new SFString("hanim_humanoid_root"),
                  name : new SFString("humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  children : new MFNode([
                    new HAnimJoint({
                      DEF : new SFString("hanim_sacroiliac"),
                      name : new SFString("sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("hanim_pelvis"),
                          name : new SFString("pelvis"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              child : new SFNode(
                                new Shape({
                                  DEF : new SFString("DiamondShape"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,0])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}))})])})])})])}),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_site_view"),
                  name : new SFString("site_view"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("InclinedView"),
                      description : new SFString("Inclined View"),
                      position : new SFVec3f([1.62,1.05,2.06]),
                      orientation : new SFRotation([-0.113,0.993,0.0347,0.671])}),

                    new Viewpoint({
                      DEF : new SFString("FrontView"),
                      description : new SFString("Front View"),
                      position : new SFVec3f([0,0.854,2.57665])}),

                    new Viewpoint({
                      DEF : new SFString("SideView"),
                      description : new SFString("Side View"),
                      position : new SFVec3f([2.5929,0.854,0]),
                      orientation : new SFRotation([0,1,0,1.57079])}),

                    new Viewpoint({
                      DEF : new SFString("TopView"),
                      description : new SFString("Top View"),
                      position : new SFVec3f([0,3.4495,0]),
                      orientation : new SFRotation([1,0,0,-1.57079])})])})]),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")}),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")})])})])}))});
console.log(X3D0.toXMLNode());
