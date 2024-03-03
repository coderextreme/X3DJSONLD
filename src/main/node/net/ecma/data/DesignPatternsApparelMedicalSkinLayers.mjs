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
var WorldInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("DesignPatternsApparelMedicalSkinLayers.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Design patterns for skin and apparel using HAnim2 standard in X3D4")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe D. Williams")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Dick Puk")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("23 December 2022")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("2 July 2023")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("DesignPatternsApparelVariations.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Under development. This template example does not produce renderable HAnim models.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HAnimHumanoid skin design patterns for apparel, medical")}),

            new Background({
              skyColor : new MFColor([0,0.6,0.6])}),

            new Group({
              DEF : new SFString("MultipleHumanoids"),
              metadata : new MFNode([
                new MetadataString({
                  name : new SFString("HAnimArchitecture"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"),
                  value : new MFString(["E.4 Multiple humanoids per file"])}),
              /*==============================*/
              children : new MFNode([
                new HAnimHumanoid({
                  name : new SFString("SimpleSkeleton"),
                  DEF : new SFString("a_SimpleSkeleton"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum"),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("JointVisualization")}),

                            new Shape({
                              DEF : new SFString("SegmentVisualization")}),

                            new HAnimSite({
                              name : new SFString("feature01_tip"),
                              DEF : new SFString("a_feature01_tip"),
                              children : new MFNode([
                                new Shape({
                                  DEF : new SFString("SiteVisualization")})])})])})])})])}),
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("SimpleSkeletonMesh"),
                  DEF : new SFString("b_SimpleSkeletonMesh"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum"),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("SegmentBoneMesh")}))})])})])})])}),
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("SkinIndexedGeometry"),
                  DEF : new SFString("c_SkinIndexedGeometry"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum")})])}),
                  skin : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("SkinMeshIFS")})])}),
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("SkinShapeIndexedGeometry"),
                  DEF : new SFString("d_SkinShapeIndexedGeometry"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum")})])}),
                  skin : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          USE : new SFString("SkinMeshIFS")}))})])}),
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("SkinSwitchShapeIndexedGeometry"),
                  DEF : new SFString("e_SkinSwitchShapeIndexedGeometry"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum")})])}),
                  /*TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>*/
                  skin : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("IndexedSkinMeshIFS"),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("SkinMeshCoordinate")}))}))})])}),
              /*similarly for LOD*/
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("SynthesizedSkinShapeIndexedTwoPartGeometry"),
                  DEF : new SFString("f_SynthesizedSkinShapeIndexedTwoPartGeometry"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum")})])}),
                  skin : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("TwoPartIndexedSkinMesh"),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("TwoPartSkinMesh")}))}))})])}),
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("ApparelSkinIndexedGeometryMultipleShapes"),
                  DEF : new SFString("g_ApparelSkinIndexedGeometryMultipleShapes"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum")})])}),
                  skin : new SFNode(
                    new Shape({})]),
                  /*allow multiple Shape nodes with containerField='apparel', one for each layer of clothing*/
                  /*TODO proposed for X3D4.1 <Shape containerField='apparel'/>*/}),
              /*==============================*/

                new HAnimHumanoid({
                  name : new SFString("AnatomySkinIndexedGeometryMultipleShapes"),
                  DEF : new SFString("h_AnatomySkinIndexedGeometryMultipleShapes"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum")})])}),
                  /*allow multiple Shape nodes with containerField='skin', one for each layer of skin*/
                  skin : new SFNode(
                    new Shape({})])}),
              /*==============================*/])}),

            new Viewpoint({
              DEF : new SFString("ViewHelpText"),
              description : new SFString("Select text to see website"),
              position : new SFVec3f([0,0,12])}),
          /*Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip*/

            new Anchor({
              description : new SFString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"),
              parameter : new MFString(["target=blank"]),
              url : new MFString(["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"]),
              children : new MFNode([
                new Shape({
                  /*TODO adjust Text string and Box size, then set Material transparency='1'*/
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          family : new MFString(["SANS"]),
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(0.6),
                          style : new SFString("BOLD")}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.9,0.9,0.9])}))}))}),

                new Shape({
                  /*Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.*/
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([11,2,0.001])})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(1)}))}))})])})])}))});
console.log(X3D0.toXMLNode());
