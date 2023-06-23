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
              content_ : SFString('DesignPatternsApparelMedicalSkinLayers.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Design patterns for skin and apparel using HAnim2 standard in X3D4')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Joe D. Williams')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Dick Puk')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('23 December 2022')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('26 December 2022')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('DesignPatternsApparelVariations.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Under development. This template example does not produce renderable HAnim models.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HAnimHumanoid skin design patterns for apparel, medical')),

            Background(
              skyColor_ : MFColor([SFColor(0), SFColor(0.6), SFColor(0.6)])),

            Group(
              DEF_ : SFString('MultipleHumanoids'),
              metadata_ : [
                MetadataString(
                  name_ : SFString('HAnimArchitecture'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile'),
                  value_ : MFString([SFString("E.4 Multiple humanoids per file")])),
              /*==============================*/
              children_ : [
                HAnimHumanoid(
                  name_ : SFString('SimpleSkeleton'),
                  DEF_ : SFString('a_SimpleSkeleton'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'),
                          children_ : [
                            Shape(
                              DEF_ : SFString('JointVisualization')),

                            Shape(
                              DEF_ : SFString('SegmentVisualization')),

                            HAnimSite(
                              name_ : SFString('feature01_tip'),
                              DEF_ : SFString('a_feature01_tip'),
                              children_ : [
                                Shape(
                                  DEF_ : SFString('SiteVisualization'))])])])]),
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('SimpleSkeletonMesh'),
                  DEF_ : SFString('b_SimpleSkeletonMesh'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'),
                          children_ : [
                            Shape(
                              geometry_ : 
                                IndexedFaceSet(
                                  DEF_ : SFString('SegmentBoneMesh')))])])]),
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('SkinIndexedGeometry'),
                  DEF_ : SFString('c_SkinIndexedGeometry'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'))]),
                  skin_ : 
                    IndexedFaceSet(
                      DEF_ : SFString('SkinMeshIFS'))]),
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('SkinShapeIndexedGeometry'),
                  DEF_ : SFString('d_SkinShapeIndexedGeometry'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'))]),
                  skin_ : 
                    Shape(
                      geometry_ : 
                        IndexedFaceSet(
                          USE_ : SFString('SkinMeshIFS')))]),
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('SkinSwitchShapeIndexedGeometry'),
                  DEF_ : SFString('e_SkinSwitchShapeIndexedGeometry'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'))]),
                  /*TODO proposed for X3D4 <Switch DEF='AlternativeSkins' containerField='skin'>*/
                  skin_ : 
                    Shape(
                      geometry_ : 
                        IndexedFaceSet(
                          DEF_ : SFString('IndexedSkinMeshIFS'),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('SkinMeshCoordinate'))))],
                  /*TODO proposed for X3D4 </Switch>*/),
              /*similarly for LOD*/
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('SynthesizedSkinShapeIndexedTwoPartGeometry'),
                  DEF_ : SFString('f_SynthesizedSkinShapeIndexedTwoPartGeometry'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'))]),
                  skin_ : 
                    Shape(
                      geometry_ : 
                        IndexedFaceSet(
                          DEF_ : SFString('TwoPartIndexedSkinMesh'),
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('TwoPartSkinMesh'))))]),
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('ApparelSkinIndexedGeometryMultipleShapes'),
                  DEF_ : SFString('g_ApparelSkinIndexedGeometryMultipleShapes'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'))]),
                  skin_ : 
                    Shape()],
                  /*allow multiple Shape nodes with containerField='apparel', one for each layer of clothing*/
                  /*TODO proposed for X3D4.1 <Shape containerField='apparel'/>*/),
              /*==============================*/

                HAnimHumanoid(
                  name_ : SFString('AnatomySkinIndexedGeometryMultipleShapes'),
                  DEF_ : SFString('h_AnatomySkinIndexedGeometryMultipleShapes'),
                  version_ : SFString('2.0'),
                  joints_ : [
                    HAnimJoint(
                      name_ : SFString('humanoid_root'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('sacrum'))]),
                  /*allow multiple Shape nodes with containerField='skin', one for each layer of skin*/
                  /*TODO proposed for X3D4.1 <Shape containerField='skin'/>*/
                  /*TODO proposed for X3D4.1 <Shape containerField='skin'/>*/
                  skin_ : 
                    Shape()]),
              /*==============================*/]),

            Viewpoint(
              DEF_ : SFString('ViewHelpText'),
              description_ : SFString('Select text to see website'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),
          /*Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip*/

            Anchor(
              description_ : SFString('DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches'),
              parameter_ : MFString([SFString("target=blank")]),
              url_ : MFString([SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")]),
              children_ : [
                Shape(
                  /*TODO adjust Text string and Box size, then set Material transparency='1'*/
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("DesignPatternsApparelMedicalSkinLayers.x3d"), SFString(""), SFString("explores potential apparel approaches")]),
                      fontStyle_ : 
                        FontStyle(
                          family_ : MFString([SFString("SANS")]),
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.6,
                          style_ : SFString('BOLD'))),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)])))),

                Shape(
                  /*Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.*/
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(11), SFDouble(2), SFDouble(0.001)])),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          transparency_ : 1)))])]));
void main() { exit(0); }
