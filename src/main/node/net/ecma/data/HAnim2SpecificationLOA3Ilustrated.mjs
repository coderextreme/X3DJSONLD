'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
import { HAnimSegment } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { LineSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { ColorRGBA } from './x3d.mjs';
import { MFColorRGBA } from './x3d.mjs';
import { HAnimSite } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { LOD } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
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
              content : new SFString("HAnim2SpecificationLOA3Illustrated.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("18 February 2021")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("18 February 2021")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim2SpecificationLOA3Invisible.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim2SpecificationLOA3Animation.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationExampleChangeLog.txt")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA1.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA2.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA3.png")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("insert MetadataInteger nodes indicating LOA for each Joint and Segment")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman and Joe Williams")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Background({
              skyColor : new MFColor([0.3,0.3,0.3])}),

            new NavigationInfo({}),

            new Group({
              DEF : new SFString("Original_WorldInfo"),
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]),
                  title : new SFString("HANIM 200x Default Joint Centers, LOA3")})])}),
          { "#comment" : new CommentsBlock("TODO move viewpoints to be internal to HAnimHumanoid") },
          { "#comment" : new CommentsBlock("Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.") },

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front"),
              position : new SFVec3f([0,0.4,4])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Close"),
              position : new SFVec3f([0,0.8,2])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Closer"),
              position : new SFVec3f([0,1.2,1])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1.5,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Face"),
              position : new SFVec3f([0,1.63,1])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Right Side"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([2.6,0.8,0])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Right Side Close"),
              orientation : new SFRotation([0,1,0,1.2]),
              position : new SFVec3f([1,0.8,0.5])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Left Side Close"),
              orientation : new SFRotation([0,1,0,-1.2]),
              position : new SFVec3f([-1,0.8,0.5])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Left Side"),
              orientation : new SFRotation([0,1,0,-1.5708]),
              position : new SFVec3f([-2.6,0.8,0])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Top"),
              orientation : new SFRotation([1,0,0,-1.5708]),
              position : new SFVec3f([0,3.5,0])}),

            new HAnimHumanoid({
              name : new SFString("humanoid"),
              DEF : new SFString("hanim_humanoid"),
              version : new SFString("2.0"),
              joints : new SFNode(
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  children : new MFNode([
                    new HAnimSegment({
                      name : new SFString("sacrum"),
                      DEF : new SFString("hanim_sacrum"),
                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/>") },
                      children : new MFNode([
                        new TouchSensor({
                          description : new SFString("HAnimJoint humanoid_root, HAnimSegment sacrum")}),

                        new Transform({
                          translation : new SFVec3f([0,0.824,0.0277]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("HAnimJointShape"),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.006)})),
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("HAnimJointAppearance"),
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,0.5,0]),
                                      transparency : new SFFloat(0.5)}))}))})])}),
                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/>") },

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0,0.9149,0.0016])})),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSegmentLineColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])}))}))}),
                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/>") },

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776])})),
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("pelvis"),
                          DEF : new SFString("hanim_pelvis"),
                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/>") },
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimJoint sacroiliac, HAnimSegment pelvis")}),

                            new Transform({
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})])}),
                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      DEF : new SFString("HAnimSiteLineColorRGBA"),
                                      color : new MFColorRGBA([1,0,0,1,1,0,0,0.1])}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.1689,0.8419,0.0352])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.1612,1.0537,0.0008])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.1677,0.8336,0.0303])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0887,1.0021,0.1112])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0925,0.9983,0.1052])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0716,1.019,-0.1138])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0774,1.019,-0.1151])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0034,0.8266,0.0257])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                            new HAnimSite({
                              name : new SFString("r_iliocristale_pt_pt"),
                              DEF : new SFString("hanim_r_iliocristale_pt"),
                              translation : new SFVec3f([-0.1525,1.0628,0.0035]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_iliocristale_pt")}),

                                new Shape({
                                  DEF : new SFString("HAnimSiteShape"),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("DiamondIFS"),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),

                            new HAnimSite({
                              name : new SFString("r_trochanterion_pt_pt"),
                              DEF : new SFString("hanim_r_trochanterion_pt"),
                              translation : new SFVec3f([-0.1689,0.8419,0.0352]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_trochanterion_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_iliocristale_pt_pt"),
                              DEF : new SFString("hanim_l_iliocristale_pt"),
                              translation : new SFVec3f([0.1612,1.0537,0.0008]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_iliocristale_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_trochanterion_pt_pt"),
                              DEF : new SFString("hanim_l_trochanterion_pt"),
                              translation : new SFVec3f([0.1677,0.8336,0.0303]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_trochanterion_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_asis_pt_pt"),
                              DEF : new SFString("hanim_r_asis_pt"),
                              translation : new SFVec3f([-0.0887,1.0021,0.1112]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_asis_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_asis_pt_pt"),
                              DEF : new SFString("hanim_l_asis_pt"),
                              translation : new SFVec3f([0.0925,0.9983,0.1052]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_asis_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_psis_pt_pt"),
                              DEF : new SFString("hanim_r_psis_pt"),
                              translation : new SFVec3f([-0.0716,1.019,-0.1138]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_psis_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_psis_pt_pt"),
                              DEF : new SFString("hanim_l_psis_pt"),
                              translation : new SFVec3f([0.0774,1.019,-0.1151]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_psis_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("crotch_pt_pt"),
                              DEF : new SFString("hanim_crotch_pt"),
                              translation : new SFVec3f([0.0034,0.8266,0.0257]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite crotch_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_thigh"),
                              DEF : new SFString("hanim_l_thigh"),
                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/>") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint l_hip, HAnimSegment l_thigh")}),

                                new Transform({
                                  translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),
                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                new HAnimSite({
                                  name : new SFString("l_knee_crease_pt_pt"),
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309]),
                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_knee_crease_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_lateral_epicn_pt_pt"),
                                  DEF : new SFString("hanim_l_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297]),
                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_femoral_lateral_epicn_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_medial_epicn_pt_pt"),
                                  DEF : new SFString("hanim_l_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([0.0398,0.4946,0.0303]),
                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_femoral_medial_epicn_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_calf"),
                                  DEF : new SFString("hanim_l_calf"),
                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/>") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint l_knee, HAnimSegment l_calf")}),

                                    new Transform({
                                      translation : new SFVec3f([0.104,0.4867,0.0308]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),
                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/>") },

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])})),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_talocrural"),
                                  DEF : new SFString("hanim_l_talocrural"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_talus"),
                                      DEF : new SFString("hanim_l_talus"),
                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/>") },
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint l_talocrural, HAnimSegment l_talus")}),

                                        new Transform({
                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),
                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                        new HAnimSite({
                                          name : new SFString("l_lateral_malleolus_pt_pt"),
                                          DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                          translation : new SFVec3f([0.1308,0.0597,-0.1032]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_lateral_malleolus_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_medial_malleolus_pt_pt"),
                                          DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                          translation : new SFVec3f([0.089,0.0716,-0.0881]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_medial_malleolus_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_sphyrion_pt_pt"),
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          translation : new SFVec3f([0.089,0.0575,-0.0943]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_sphyrion_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_calcaneous_post_pt_pt"),
                                          DEF : new SFString("hanim_l_calcaneous_post_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_calcaneous_post_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_tarsometatarsal_2"),
                                      DEF : new SFString("hanim_l_tarsometatarsal_2"),
                                      center : new SFVec3f([0.1086,0.0001,-0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_metatarsal_2"),
                                          DEF : new SFString("hanim_l_metatarsal_2"),
                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/>") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2")}),

                                            new Transform({
                                              translation : new SFVec3f([0.1086,0.0001,-0.0368]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),
                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/>") },

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])})),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_metatarsophalangeal_2"),
                                          DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                          center : new SFVec3f([0.1086,0.0001,0.0368]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_proximal_phalanx_2"),
                                              DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/>") },
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.1086,0.0001,0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),
                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/>") },

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/>") },

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                new HAnimSite({
                                                  name : new SFString("l_metatarsal_pha1_pt_pt"),
                                                  DEF : new SFString("hanim_l_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([0.0816,0.0232,0.0106]),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite l_metatarsal_pha1_pt")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                              DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_2"),
                                              center : new SFVec3f([0.1086,0,0.0762]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_tarsal_distal_phalanx_2"),
                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/>") },
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.1086,0,0.0762]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1825,0.007,0.0928])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1195,0.0079,0.1433])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("l_forefoot_tip_pt"),
                                                      DEF : new SFString("hanim_l_forefoot_tip"),
                                                      translation : new SFVec3f([0.1354,0.0016,0.1476]),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_forefoot_tip")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_pha5_pt_pt"),
                                                      DEF : new SFString("hanim_l_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([0.1825,0.007,0.0928]),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_metatarsal_pha5_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_digit2_pt_pt"),
                                                      DEF : new SFString("hanim_l_digit2_pt"),
                                                      translation : new SFVec3f([0.1195,0.0079,0.1433]),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_digit2_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_thigh"),
                              DEF : new SFString("hanim_r_thigh"),
                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/>") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint r_hip, HAnimSegment r_thigh")}),

                                new Transform({
                                  translation : new SFVec3f([-0.0961,0.9124,-0.0001]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),
                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                new HAnimSite({
                                  name : new SFString("r_knee_crease_pt_pt"),
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326]),
                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_knee_crease_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_lateral_epicn_pt_pt"),
                                  DEF : new SFString("hanim_r_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031]),
                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_femoral_lateral_epicn_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_medial_epicn_pt_pt"),
                                  DEF : new SFString("hanim_r_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289]),
                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_femoral_medial_epicn_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_calf"),
                                  DEF : new SFString("hanim_r_calf"),
                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/>") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint r_knee, HAnimSegment r_calf")}),

                                    new Transform({
                                      translation : new SFVec3f([-0.104,0.4867,0.0308]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),
                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/>") },

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])})),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_talocrural"),
                                  DEF : new SFString("hanim_r_talocrural"),
                                  center : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_talus"),
                                      DEF : new SFString("hanim_r_talus"),
                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/>") },
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint r_talocrural, HAnimSegment r_talus")}),

                                        new Transform({
                                          translation : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),
                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                        new HAnimSite({
                                          name : new SFString("r_lateral_malleolus_pt_pt"),
                                          DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                          translation : new SFVec3f([-0.1006,0.0658,-0.1075]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_lateral_malleolus_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_medial_malleolus_pt_pt"),
                                          DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                          translation : new SFVec3f([-0.0591,0.076,-0.0928]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_medial_malleolus_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_sphyrion_pt_pt"),
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.0603,0.061,-0.1002]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_sphyrion_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_calcaneous_post_pt_pt"),
                                          DEF : new SFString("hanim_r_calcaneous_post_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_calcaneous_post_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_tarsometatarsal_2"),
                                      DEF : new SFString("hanim_r_tarsometatarsal_2"),
                                      center : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_metatarsal_2"),
                                          DEF : new SFString("hanim_r_metatarsal_2"),
                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/>") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2")}),

                                            new Transform({
                                              translation : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),
                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/>") },

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])})),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_metatarsophalangeal_2"),
                                          DEF : new SFString("hanim_r_metatarsophalangeal_2"),
                                          center : new SFVec3f([-0.1086,0.0001,0.0368]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_tarsal_proximal_phalanx_2"),
                                              DEF : new SFString("hanim_r_tarsal_proximal_phalanx_2"),
                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/>") },
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2")}),

                                                new Transform({
                                                  translation : new SFVec3f([-0.1086,0.0001,0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),
                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/>") },

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/>") },

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                new HAnimSite({
                                                  name : new SFString("r_metatarsal_pha1_pt_pt"),
                                                  DEF : new SFString("hanim_r_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([-0.0521,0.026,0.0127]),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite r_metatarsal_pha1_pt")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                              DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_2"),
                                              center : new SFVec3f([-0.1086,0,0.0762]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_tarsal_distal_phalanx_2"),
                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/>") },
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2")}),

                                                    new Transform({
                                                      translation : new SFVec3f([-0.1086,0,0.0762]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.1043,0.0227,0.145])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("r_forefoot_tip_pt"),
                                                      DEF : new SFString("hanim_r_forefoot_tip"),
                                                      translation : new SFVec3f([-0.1043,0.0227,0.145]),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_forefoot_tip")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("r_metatarsal_pha5_pt_pt"),
                                                      DEF : new SFString("hanim_r_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([-0.1523,0.0166,0.0895]),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_metatarsal_pha5_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("r_digit2_pt_pt"),
                                                      DEF : new SFString("hanim_r_digit2_pt"),
                                                      translation : new SFVec3f([-0.0883,0.0134,0.1383]),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_digit2_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l5"),
                          DEF : new SFString("hanim_l5"),
                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/>") },
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimJoint vl5, HAnimSegment l5")}),

                            new Transform({
                              translation : new SFVec3f([0.0028,1.0568,-0.0776]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})])}),
                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/>") },

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                            new HAnimSite({
                              name : new SFString("waist_preferred_post_pt_pt"),
                              DEF : new SFString("hanim_waist_preferred_post_pt"),
                              translation : new SFVec3f([0,1.0915,-0.1091]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite waist_preferred_post_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("navel_pt_pt"),
                              DEF : new SFString("hanim_navel_pt"),
                              translation : new SFVec3f([0.0069,1.0966,0.1017]),
                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite navel_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          name : new SFString("vl4"),
                          DEF : new SFString("hanim_vl4"),
                          center : new SFVec3f([0.0035,1.0925,-0.0787]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l4"),
                              DEF : new SFString("hanim_l4"),
                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/>") },
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint vl4, HAnimSegment l4")}),

                                new Transform({
                                  translation : new SFVec3f([0.0035,1.0925,-0.0787]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),
                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/>") },

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                            new HAnimJoint({
                              name : new SFString("vl3"),
                              DEF : new SFString("hanim_vl3"),
                              center : new SFVec3f([0.0041,1.1276,-0.0796]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l3"),
                                  DEF : new SFString("hanim_l3"),
                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/>") },
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint vl3, HAnimSegment l3")}),

                                    new Transform({
                                      translation : new SFVec3f([0.0041,1.1276,-0.0796]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),
                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/>") },

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])})),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l2"),
                                      DEF : new SFString("hanim_l2"),
                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/>") },
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint vl2, HAnimSegment l2")}),

                                        new Transform({
                                          translation : new SFVec3f([0.0045,1.1546,-0.08]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),
                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/>") },

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                        new HAnimSite({
                                          name : new SFString("r_rib10_pt_pt"),
                                          DEF : new SFString("hanim_r_rib10_pt"),
                                          translation : new SFVec3f([-0.0711,1.1941,0.1016]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_rib10_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_rib10_pt_pt"),
                                          DEF : new SFString("hanim_l_rib10_pt"),
                                          translation : new SFVec3f([0.0871,1.1925,0.0992]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_rib10_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("rib10_midspine_pt_pt"),
                                          DEF : new SFString("hanim_rib10_midspine_pt"),
                                          translation : new SFVec3f([0.0049,1.1908,-0.1113]),
                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite rib10_midspine_pt")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("vl1"),
                                      DEF : new SFString("hanim_vl1"),
                                      center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l1"),
                                          DEF : new SFString("hanim_l1"),
                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/>") },
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint vl1, HAnimSegment l1")}),

                                            new Transform({
                                              translation : new SFVec3f([0.0048,1.1912,-0.0805]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),
                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/>") },

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])})),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("vt12"),
                                          DEF : new SFString("hanim_vt12"),
                                          center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("t12"),
                                              DEF : new SFString("hanim_t12"),
                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/>") },
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint vt12, HAnimSegment t12")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.0051,1.2278,-0.0808]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),
                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/>") },

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("vt11"),
                                              DEF : new SFString("hanim_vt11"),
                                              center : new SFVec3f([0.0053,1.2679,-0.081]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("t11"),
                                                  DEF : new SFString("hanim_t11"),
                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/>") },
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint vt11, HAnimSegment t11")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.0053,1.2679,-0.081]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),
                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/>") },

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("t10"),
                                                      DEF : new SFString("hanim_t10"),
                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/>") },
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimJoint vt10, HAnimSegment t10")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])}),
                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/>") },

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])})),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/>") },

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])})),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("substernale_pt_pt"),
                                                          DEF : new SFString("hanim_substernale_pt"),
                                                          translation : new SFVec3f([0.0085,1.2995,0.1147]),
                                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite substernale_pt")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("t9"),
                                                          DEF : new SFString("hanim_t9"),
                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/>") },
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimJoint vt9, HAnimSegment t9")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/>") },

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])})),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/>") },

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])})),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/>") },

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])})),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("r_thelion_pt_pt"),
                                                              DEF : new SFString("hanim_r_thelion_pt"),
                                                              translation : new SFVec3f([-0.0736,1.3385,0.1217]),
                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_thelion_pt")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                            new HAnimSite({
                                                              name : new SFString("l_thelion_pt_pt"),
                                                              DEF : new SFString("hanim_l_thelion_pt"),
                                                              translation : new SFVec3f([0.0918,1.3382,0.1192]),
                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_thelion_pt")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("vt8"),
                                                          DEF : new SFString("hanim_vt8"),
                                                          center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("t8"),
                                                              DEF : new SFString("hanim_t8"),
                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/>") },
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimJoint vt8, HAnimSegment t8")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/>") },

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])})),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("vt7"),
                                                              DEF : new SFString("hanim_vt7"),
                                                              center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("t7"),
                                                                  DEF : new SFString("hanim_t7"),
                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/>") },
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimJoint vt7, HAnimSegment t7")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/>") },

                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new LineSet({
                                                                          vertexCount : new MFInt32([2]),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])})),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("vt6"),
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("t6"),
                                                                      DEF : new SFString("hanim_t6"),
                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/>") },
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimJoint vt6, HAnimSegment t6")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                          children : new MFNode([
                                                                            new Shape({
                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/>") },

                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new LineSet({
                                                                              vertexCount : new MFInt32([2]),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  point : new MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])})),
                                                                              color : new SFNode(
                                                                                new ColorRGBA({
                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("vt5"),
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("t5"),
                                                                          DEF : new SFString("hanim_t5"),
                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/>") },
                                                                          children : new MFNode([
                                                                            new TouchSensor({
                                                                              description : new SFString("HAnimJoint vt5, HAnimSegment t5")}),

                                                                            new Transform({
                                                                              translation : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                              children : new MFNode([
                                                                                new Shape({
                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/>") },

                                                                            new Shape({
                                                                              geometry : new SFNode(
                                                                                new LineSet({
                                                                                  vertexCount : new MFInt32([2]),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      point : new MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])})),
                                                                                  color : new SFNode(
                                                                                    new ColorRGBA({
                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("t4"),
                                                                              DEF : new SFString("hanim_t4"),
                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/>") },
                                                                              children : new MFNode([
                                                                                new TouchSensor({
                                                                                  description : new SFString("HAnimJoint vt4, HAnimSegment t4")}),

                                                                                new Transform({
                                                                                  translation : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                                  children : new MFNode([
                                                                                    new Shape({
                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/>") },

                                                                                new Shape({
                                                                                  geometry : new SFNode(
                                                                                    new LineSet({
                                                                                      vertexCount : new MFInt32([2]),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          point : new MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])})),
                                                                                      color : new SFNode(
                                                                                        new ColorRGBA({
                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("vt3"),
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("t3"),
                                                                                  DEF : new SFString("hanim_t3"),
                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/>") },
                                                                                  children : new MFNode([
                                                                                    new TouchSensor({
                                                                                      description : new SFString("HAnimJoint vt3, HAnimSegment t3")}),

                                                                                    new Transform({
                                                                                      translation : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                                      children : new MFNode([
                                                                                        new Shape({
                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/>") },

                                                                                    new Shape({
                                                                                      geometry : new SFNode(
                                                                                        new LineSet({
                                                                                          vertexCount : new MFInt32([2]),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              point : new MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])})),
                                                                                          color : new SFNode(
                                                                                            new ColorRGBA({
                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt2"),
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("t2"),
                                                                                      DEF : new SFString("hanim_t2"),
                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/>") },
                                                                                      children : new MFNode([
                                                                                        new TouchSensor({
                                                                                          description : new SFString("HAnimJoint vt2, HAnimSegment t2")}),

                                                                                        new Transform({
                                                                                          translation : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                          children : new MFNode([
                                                                                            new Shape({
                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/>") },

                                                                                        new Shape({
                                                                                          geometry : new SFNode(
                                                                                            new LineSet({
                                                                                              vertexCount : new MFInt32([2]),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  point : new MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])})),
                                                                                              color : new SFNode(
                                                                                                new ColorRGBA({
                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("t1"),
                                                                                          DEF : new SFString("hanim_t1"),
                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/>") },
                                                                                          children : new MFNode([
                                                                                            new TouchSensor({
                                                                                              description : new SFString("HAnimJoint vt1, HAnimSegment t1")}),

                                                                                            new Transform({
                                                                                              translation : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                              children : new MFNode([
                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/>") },

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/>") },

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/>") },

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/>") },

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/>") },

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("suprasternale_pt_pt"),
                                                                                              DEF : new SFString("hanim_suprasternale_pt"),
                                                                                              translation : new SFVec3f([0.0084,1.4714,0.0551]),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite suprasternale_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("cervicale_pt_pt"),
                                                                                              DEF : new SFString("hanim_cervicale_pt"),
                                                                                              translation : new SFVec3f([0.0064,1.52,-0.0815]),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite cervicale_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("c7"),
                                                                                              DEF : new SFString("hanim_c7"),
                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/>") },
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint vc7, HAnimSegment c7")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_neck_base_pt_pt"),
                                                                                                  DEF : new SFString("hanim_r_neck_base_pt"),
                                                                                                  translation : new SFVec3f([-0.0419,1.5149,-0.022]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_neck_base_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_neck_base_pt_pt"),
                                                                                                  DEF : new SFString("hanim_l_neck_base_pt"),
                                                                                                  translation : new SFVec3f([0.0646,1.5141,-0.038]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_neck_base_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc6"),
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("c6"),
                                                                                                  DEF : new SFString("hanim_c6"),
                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/>") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint vc6, HAnimSegment c6")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/>") },

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])})),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc5"),
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("c5"),
                                                                                                      DEF : new SFString("hanim_c5"),
                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/>") },
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint vc5, HAnimSegment c5")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/>") },

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc4"),
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("c4"),
                                                                                                          DEF : new SFString("hanim_c4"),
                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/>") },
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint vc4, HAnimSegment c4")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc3"),
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("c3"),
                                                                                                              DEF : new SFString("hanim_c3"),
                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/>") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint vc3, HAnimSegment c3")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc2"),
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("c2"),
                                                                                                                  DEF : new SFString("hanim_c2"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint vc2, HAnimSegment c2")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("c1"),
                                                                                                                      DEF : new SFString("hanim_c1"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint vc1, HAnimSegment c1")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("skull"),
                                                                                                                          DEF : new SFString("hanim_skull"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint skullbase, HAnimSegment skull")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0,1.63,0.015])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0631,1.553,0.033])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("skull_tip_pt"),
                                                                                                                              DEF : new SFString("hanim_skull_tip"),
                                                                                                                              translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                              { "#comment" : new CommentsBlock("TODO move skull_tip x to zero, check others for symmetry") },
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite skull_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("sellion_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_sellion_pt"),
                                                                                                                              translation : new SFVec3f([0.0058,1.6316,0.0852]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite sellion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_infraorbitale_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([-0.0237,1.6171,0.0752]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_infraorbitale_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_infraorbitale_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([0.0341,1.6171,0.0752]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_infraorbitale_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("supramenton_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                              translation : new SFVec3f([0.0061,1.541,0.0805]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite supramenton_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_tragion_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                              translation : new SFVec3f([-0.0646,1.6347,0.0302]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_tragion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_gonion_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                              translation : new SFVec3f([-0.052,1.5529,0.0347]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_gonion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_tragion_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                              translation : new SFVec3f([0.0739,1.6348,0.0282]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_tragion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_gonion_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                              translation : new SFVec3f([0.0631,1.553,0.033]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_gonion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("nuchale_pt_pt"),
                                                                                                                              DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.5972,-0.0796]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite nuchale_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyeball"),
                                                                                                                              DEF : new SFString("hanim_l_eyeball"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.0336,1.6332,0.0502,0.034,1.64,0.05])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          DEF : new SFString("HAnimSiteViewpointLineColorRGBA"),
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_eyeball_site_view_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([0.034,1.64,0.05]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_eyeball_site_view")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_l_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("l_eyeball_site_viewpoint looking forward"),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593]),
                                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                                                                                                                                    new Anchor({
                                                                                                                                      description : new SFString("HAnimSite hanim_l_eyeball_site_view Viewpoint"),
                                                                                                                                      url : new MFString(["#hanim_l_eyeball_site_viewpoint"]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new LOD({
                                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new WorldInfo({
                                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                                            new Shape({
                                                                                                                                              DEF : new SFString("HAnimSiteViewpointShape"),
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new IndexedFaceSet({
                                                                                                                                                  DEF : new SFString("SiteViewpointDiamondIFS"),
                                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                                  coord : new SFNode(
                                                                                                                                                    new Coordinate({
                                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))})),
                                                                                                                                              appearance : new SFNode(
                                                                                                                                                new Appearance({
                                                                                                                                                  material : new SFNode(
                                                                                                                                                    new Material({
                                                                                                                                                      diffuseColor : new SFColor([1,1,0]),
                                                                                                                                                      transparency : new SFFloat(0.3)}))}))})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyelid"),
                                                                                                                              DEF : new SFString("hanim_l_eyelid"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_l_eyebrow"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyeball"),
                                                                                                                              DEF : new SFString("hanim_r_eyeball"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_eyeball_site_view_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([-0.034,1.64,0.05]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_eyeball_site_view")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_r_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("r_eyeball_site_viewpoint looking forward"),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593]),
                                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                                                                                                                                    new Anchor({
                                                                                                                                      description : new SFString("HAnimSite hanim_r_eyeball_site_view Viewpoint"),
                                                                                                                                      url : new MFString(["#hanim_r_eyeball_site_viewpoint"]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new LOD({
                                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new WorldInfo({
                                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyelid"),
                                                                                                                              DEF : new SFString("hanim_r_eyelid"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_r_eyebrow"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          center : new SFVec3f([0,1.63,0.015]),
                                                                                                                          { "#comment" : new CommentsBlock("Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint") },
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("jaw"),
                                                                                                                              DEF : new SFString("hanim_jaw"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint temporomandibular, HAnimSegment jaw")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0,1.63,0.015]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.63,0.015,0.045,1.63,0])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.63,0.015,-0.045,1.63,0])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("temporomandibular_l_site_pt_pt"),
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_l_site_pt"),
                                                                                                                                  translation : new SFVec3f([0.045,1.63,0]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite temporomandibular_l_site_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("temporomandibular_r_site_pt_pt"),
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_r_site_pt"),
                                                                                                                                  translation : new SFVec3f([-0.045,1.63,0]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite temporomandibular_r_site_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("l_clavicle"),
                                                                                              DEF : new SFString("hanim_l_clavicle"),
                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/>") },
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_clavicale_pt_pt"),
                                                                                                  DEF : new SFString("hanim_l_clavicale_pt"),
                                                                                                  translation : new SFVec3f([0.0271,1.4943,0.0394]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_clavicale_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_acromion_pt_pt"),
                                                                                                  DEF : new SFString("hanim_l_acromion_pt"),
                                                                                                  translation : new SFVec3f([0.2032,1.476,-0.049]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_acromion_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_axilla_ant_pt_pt"),
                                                                                                  DEF : new SFString("hanim_l_axilla_ant_pt"),
                                                                                                  translation : new SFVec3f([0.1777,1.4065,-0.0075]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_axilla_ant_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_axilla_post_pt_pt"),
                                                                                                  DEF : new SFString("hanim_l_axilla_post_pt"),
                                                                                                  translation : new SFVec3f([0.1706,1.4072,-0.0875]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_axilla_post_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("l_scapula"),
                                                                                                  DEF : new SFString("hanim_l_scapula"),
                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/>") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/>") },

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])})),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("l_upperarm"),
                                                                                                      DEF : new SFString("hanim_l_upperarm"),
                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/>") },
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint l_shoulder, HAnimSegment l_upperarm")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/>") },

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/>") },

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_humeral_lateral_epicn_pt_pt"),
                                                                                                          DEF : new SFString("hanim_l_humeral_lateral_epicn_pt"),
                                                                                                          translation : new SFVec3f([0.228,1.1482,-0.11]),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_humeral_lateral_epicn_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_forearm"),
                                                                                                          DEF : new SFString("hanim_l_forearm"),
                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/>") },
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint l_elbow, HAnimSegment l_forearm")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radial_styloid_pt_pt"),
                                                                                                              DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([0.1901,0.8645,-0.0415]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_radial_styloid_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_olecranon_pt_pt"),
                                                                                                              DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                              translation : new SFVec3f([0.1962,1.1375,-0.1123]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_olecranon_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_humeral_medial_epicn_pt_pt"),
                                                                                                              DEF : new SFString("hanim_l_humeral_medial_epicn_pt"),
                                                                                                              translation : new SFVec3f([0.1735,1.1272,-0.1113]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_humeral_medial_epicn_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radiale_pt_pt"),
                                                                                                              DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                              translation : new SFVec3f([0.2182,1.1212,-0.1167]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_radiale_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_l_radiocarpal"),
                                                                                                          center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_carpal"),
                                                                                                              DEF : new SFString("hanim_l_carpal"),
                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/>") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint l_radiocarpal, HAnimSegment l_carpal")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.3,0.75,0.45])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_metacarpal_pha2_pt_pt"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_pha2_pt"),
                                                                                                                  translation : new SFVec3f([0.2009,0.8139,-0.0237]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_metacarpal_pha2_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_ulnar_styloid_pt_pt"),
                                                                                                                  DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([0.2142,0.8529,-0.0648]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_ulnar_styloid_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_metacarpal_pha5_pt_pt"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_pha5_pt"),
                                                                                                                  translation : new SFVec3f([0.1929,0.786,-0.1122]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_metacarpal_pha5_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_hand_front_view_pt"),
                                                                                                                  DEF : new SFString("hanim_l_hand_front_view"),
                                                                                                                  translation : new SFVec3f([0.3,0.75,0.45]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_hand_front_view")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_l_hand_front_viewpoint"),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0]),
                                                                                                                      description : new SFString("left hand front"),
                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                                                                                                                    new Anchor({
                                                                                                                      description : new SFString("HAnimSite hanim_l_hand_front_view Viewpoint"),
                                                                                                                      url : new MFString(["#hanim_l_hand_front_viewpoint"]),
                                                                                                                      children : new MFNode([
                                                                                                                        new LOD({
                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                          children : new MFNode([
                                                                                                                            new WorldInfo({
                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_thumb1"),
                                                                                                              DEF : new SFString("hanim_l_thumb1"),
                                                                                                              center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_1"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_thumb2"),
                                                                                                                  DEF : new SFString("hanim_l_thumb2"),
                                                                                                                  center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_1"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_1"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_thumb3"),
                                                                                                                      DEF : new SFString("hanim_l_thumb3"),
                                                                                                                      center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_distal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_phalanx_1"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_thumb_distal_tip_pt"),
                                                                                                                              DEF : new SFString("hanim_l_thumb_distal_tip"),
                                                                                                                              translation : new SFVec3f([0.1982,0.8061,0.0759]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_thumb_distal_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_index0"),
                                                                                                              DEF : new SFString("hanim_l_index0"),
                                                                                                              center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_2"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_index0, HAnimSegment l_metacarpal_2")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_index1"),
                                                                                                                  DEF : new SFString("hanim_l_index1"),
                                                                                                                  center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_2"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_2"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_index2"),
                                                                                                                      DEF : new SFString("hanim_l_index2"),
                                                                                                                      center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_2"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_index3"),
                                                                                                                          DEF : new SFString("hanim_l_index3"),
                                                                                                                          center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_2"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_index_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_index_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2089,0.6858,-0.0245]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_index_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_dactylion_pt_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([0.2056,0.6743,-0.0482]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_dactylion_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_middle0"),
                                                                                                              DEF : new SFString("hanim_l_middle0"),
                                                                                                              center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_3"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_middle1"),
                                                                                                                  DEF : new SFString("hanim_l_middle1"),
                                                                                                                  center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_3"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_3"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_middle2"),
                                                                                                                      DEF : new SFString("hanim_l_middle2"),
                                                                                                                      center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_3"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_middle3"),
                                                                                                                          DEF : new SFString("hanim_l_middle3"),
                                                                                                                          center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_3"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_middle_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_middle_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.208,0.6731,-0.0491]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_middle_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_ring0"),
                                                                                                              DEF : new SFString("hanim_l_ring0"),
                                                                                                              center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_4"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_ring1"),
                                                                                                                  DEF : new SFString("hanim_l_ring1"),
                                                                                                                  center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_4"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_4"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_ring2"),
                                                                                                                      DEF : new SFString("hanim_l_ring2"),
                                                                                                                      center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_4"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_ring3"),
                                                                                                                          DEF : new SFString("hanim_l_ring3"),
                                                                                                                          center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_4"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_ring_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_ring_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2035,0.675,-0.0756]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_ring_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_pinky0"),
                                                                                                              DEF : new SFString("hanim_l_pinky0"),
                                                                                                              center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_5"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_pinky1"),
                                                                                                                  DEF : new SFString("hanim_l_pinky1"),
                                                                                                                  center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_5"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_pinky2"),
                                                                                                                      DEF : new SFString("hanim_l_pinky2"),
                                                                                                                      center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_5"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_pinky3"),
                                                                                                                          DEF : new SFString("hanim_l_pinky3"),
                                                                                                                          center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_5"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_pinky_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_pinky_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2014,0.7009,-0.1012]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_pinky_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          center : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("r_clavicle"),
                                                                                              DEF : new SFString("hanim_r_clavicle"),
                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/>") },
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/>") },

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_clavicale_pt_pt"),
                                                                                                  DEF : new SFString("hanim_r_clavicale_pt"),
                                                                                                  translation : new SFVec3f([-0.0115,1.4943,0.04]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_clavicale_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_acromion_pt_pt"),
                                                                                                  DEF : new SFString("hanim_r_acromion_pt"),
                                                                                                  translation : new SFVec3f([-0.1905,1.4791,-0.0431]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_acromion_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_axilla_ant_pt_pt"),
                                                                                                  DEF : new SFString("hanim_r_axilla_ant_pt"),
                                                                                                  translation : new SFVec3f([-0.1626,1.4072,-0.0031]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_axilla_ant_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_axilla_post_pt_pt"),
                                                                                                  DEF : new SFString("hanim_r_axilla_post_pt"),
                                                                                                  translation : new SFVec3f([-0.1603,1.4098,-0.0826]),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_axilla_post_pt")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("r_scapula"),
                                                                                                  DEF : new SFString("hanim_r_scapula"),
                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/>") },
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/>") },

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])})),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  center : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("r_upperarm"),
                                                                                                      DEF : new SFString("hanim_r_upperarm"),
                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/>") },
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint r_shoulder, HAnimSegment r_upperarm")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/>") },

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                      { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/>") },

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_humeral_lateral_epicn_pt_pt"),
                                                                                                          DEF : new SFString("hanim_r_humeral_lateral_epicn_pt"),
                                                                                                          translation : new SFVec3f([-0.2224,1.1517,-0.1033]),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_humeral_lateral_epicn_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      center : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("r_forearm"),
                                                                                                          DEF : new SFString("hanim_r_forearm"),
                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/>") },
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint r_elbow, HAnimSegment r_forearm")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/>") },

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radial_styloid_pt_pt"),
                                                                                                              DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.1884,0.8676,-0.036]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_radial_styloid_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_olecranon_pt_pt"),
                                                                                                              DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                              translation : new SFVec3f([-0.1907,1.1405,-0.1065]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_olecranon_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_humeral_medial_epicn_pt_pt"),
                                                                                                              DEF : new SFString("hanim_r_humeral_medial_epicn_pt"),
                                                                                                              translation : new SFVec3f([-0.168,1.1298,-0.1062]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_humeral_medial_epicn_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radiale_pt_pt"),
                                                                                                              DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                              translation : new SFVec3f([-0.213,1.1305,-0.1091]),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_radiale_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_r_radiocarpal"),
                                                                                                          center : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("r_carpal"),
                                                                                                              DEF : new SFString("hanim_r_carpal"),
                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/>") },
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint r_radiocarpal, HAnimSegment r_carpal")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/>") },

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_metacarpal_pha2_pt_pt"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_pha2_pt"),
                                                                                                                  translation : new SFVec3f([-0.1977,0.8169,-0.0177]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_metacarpal_pha2_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_ulnar_styloid_pt_pt"),
                                                                                                                  DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([-0.2117,0.8562,-0.0584]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_ulnar_styloid_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_metacarpal_pha5_pt_pt"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_pha5_pt"),
                                                                                                                  translation : new SFVec3f([-0.1929,0.789,-0.1064]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_metacarpal_pha5_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_hand_front_view_pt"),
                                                                                                                  DEF : new SFString("hanim_r_hand_front_view"),
                                                                                                                  translation : new SFVec3f([-0.3,0.75,0.45]),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_hand_front_view")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_r_hand_front_viewpoint"),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0]),
                                                                                                                      description : new SFString("right hand front"),
                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                                                                                                                    new Anchor({
                                                                                                                      description : new SFString("HAnimSite hanim_r_hand_front_view Viewpoint"),
                                                                                                                      url : new MFString(["#hanim_r_hand_front_viewpoint"]),
                                                                                                                      children : new MFNode([
                                                                                                                        new LOD({
                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                          children : new MFNode([
                                                                                                                            new WorldInfo({
                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_thumb1"),
                                                                                                              DEF : new SFString("hanim_r_thumb1"),
                                                                                                              center : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_1"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_thumb2"),
                                                                                                                  DEF : new SFString("hanim_r_thumb2"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_1"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_1"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_thumb3"),
                                                                                                                      DEF : new SFString("hanim_r_thumb3"),
                                                                                                                      center : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_distal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_phalanx_1"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_thumb_distal_tip_pt"),
                                                                                                                              DEF : new SFString("hanim_r_thumb_distal_tip"),
                                                                                                                              translation : new SFVec3f([-0.1869,0.809,0.082]),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_thumb_distal_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_index0"),
                                                                                                              DEF : new SFString("hanim_r_index0"),
                                                                                                              center : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_2"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_index0, HAnimSegment r_metacarpal_2")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_index1"),
                                                                                                                  DEF : new SFString("hanim_r_index1"),
                                                                                                                  center : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_2"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_2"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_index2"),
                                                                                                                      DEF : new SFString("hanim_r_index2"),
                                                                                                                      center : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_2"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_index3"),
                                                                                                                          DEF : new SFString("hanim_r_index3"),
                                                                                                                          center : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_2"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_index_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_index_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.198,0.6883,-0.018]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_index_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_dactylion_pt_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([-0.1941,0.6772,-0.0423]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_dactylion_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_middle0"),
                                                                                                              DEF : new SFString("hanim_r_middle0"),
                                                                                                              center : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_3"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_middle1"),
                                                                                                                  DEF : new SFString("hanim_r_middle1"),
                                                                                                                  center : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_3"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_3"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_middle2"),
                                                                                                                      DEF : new SFString("hanim_r_middle2"),
                                                                                                                      center : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_3"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_middle3"),
                                                                                                                          DEF : new SFString("hanim_r_middle3"),
                                                                                                                          center : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_3"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_middle_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_middle_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1969,0.6758,-0.0427]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_middle_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_ring0"),
                                                                                                              DEF : new SFString("hanim_r_ring0"),
                                                                                                              center : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_4"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_ring1"),
                                                                                                                  DEF : new SFString("hanim_r_ring1"),
                                                                                                                  center : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_4"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_4"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_ring2"),
                                                                                                                      DEF : new SFString("hanim_r_ring2"),
                                                                                                                      center : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_4"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_ring3"),
                                                                                                                          DEF : new SFString("hanim_r_ring3"),
                                                                                                                          center : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_4"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_ring_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_ring_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1934,0.6778,-0.0693]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_ring_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_pinky0"),
                                                                                                              DEF : new SFString("hanim_r_pinky0"),
                                                                                                              center : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_5"),
                                                                                                                  { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/>") },
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/>") },

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_pinky1"),
                                                                                                                  DEF : new SFString("hanim_r_pinky1"),
                                                                                                                  center : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_5"),
                                                                                                                      { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/>") },
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/>") },

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_pinky2"),
                                                                                                                      DEF : new SFString("hanim_r_pinky2"),
                                                                                                                      center : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_5"),
                                                                                                                          { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/>") },
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          { "#comment" : new CommentsBlock("HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/>") },

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_pinky3"),
                                                                                                                          DEF : new SFString("hanim_r_pinky3"),
                                                                                                                          center : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_5"),
                                                                                                                              { "#comment" : new CommentsBlock("Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/>") },
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              { "#comment" : new CommentsBlock("HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>") },

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_pinky_distal_tip_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_pinky_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1938,0.7035,-0.0949]),
                                                                                                                                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_pinky_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})),
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'") },
              { "#comment" : new CommentsBlock("Only one root HAnimJoint is expected") },
              { "#comment" : new CommentsBlock("USE nodes go here for access by inverse kinematics (IK) engines and other tools") },
              { "#comment" : new CommentsBlock("Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation") },
              { "#comment" : new CommentsBlock("TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default") },
              { "#comment" : new CommentsBlock("right between the eyes, stationary position not animating except with body itself") },
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("l_inclined_view"),
                  DEF : new SFString("hanim_l_inclined_view"),
                  rotation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                  translation : new SFVec3f([1.62,1.05,2.06]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite l_inclined_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_l_inclined_viewpoint"),
                      description : new SFString("left inclined"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_l_inclined_view Viewpoint"),
                      url : new MFString(["#hanim_l_inclined_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("r_inclined_view"),
                  DEF : new SFString("hanim_r_inclined_view"),
                  rotation : new SFRotation([-0.113,-0.993,0.0347,0.671]),
                  translation : new SFVec3f([-1.62,1.05,2.06]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite r_inclined_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_r_inclined_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("right inclined"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_r_inclined_view Viewpoint"),
                      url : new MFString(["#hanim_r_inclined_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("front_view"),
                  DEF : new SFString("hanim_front_view"),
                  translation : new SFVec3f([0,0.85,2.58]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite front_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_front_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("front"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_front_view Viewpoint"),
                      url : new MFString(["#hanim_front_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("back_view"),
                  DEF : new SFString("hanim_back_view"),
                  rotation : new SFRotation([0,1,0,3.14]),
                  translation : new SFVec3f([0,0.85,-2.58]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite back_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_back_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("back"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_back_view Viewpoint"),
                      url : new MFString(["#hanim_back_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("l_side_view"),
                  DEF : new SFString("hanim_l_side_view"),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  translation : new SFVec3f([2.6,0.854,0]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite l_side_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_l_side_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("left side"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_l_side_view Viewpoint"),
                      url : new MFString(["#hanim_l_side_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("Top_view"),
                  DEF : new SFString("hanim_Top_view"),
                  rotation : new SFRotation([1,0,0,-1.57]),
                  translation : new SFVec3f([0,3.5,0]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite Top_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_Top_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("Top"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_Top_view Viewpoint"),
                      url : new MFString(["#hanim_Top_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("front_close_view"),
                  DEF : new SFString("hanim_front_close_view"),
                  translation : new SFVec3f([0,0.854,1.575]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1.575]),
                      description : new SFString("front close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_front_close_view Viewpoint"),
                      url : new MFString(["#hanim_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("side_close_view"),
                  DEF : new SFString("hanim_side_close_view"),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  translation : new SFVec3f([1.56,0.854,0]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite side_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_side_close_viewpoint"),
                      centerOfRotation : new SFVec3f([1.6,0,0]),
                      description : new SFString("side close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_side_close_view Viewpoint"),
                      url : new MFString(["#hanim_side_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("head_front_close_view"),
                  DEF : new SFString("hanim_head_front_close_view"),
                  translation : new SFVec3f([0,1.5,1]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite head_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_head_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("head front close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_head_front_close_view Viewpoint"),
                      url : new MFString(["#hanim_head_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("chest_front_close_view"),
                  DEF : new SFString("hanim_chest_front_close_view"),
                  translation : new SFVec3f([0,1.2,1]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite chest_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_chest_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("chest front close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_chest_front_close_view Viewpoint"),
                      url : new MFString(["#hanim_chest_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("pelvis_front_close_view"),
                  DEF : new SFString("hanim_pelvis_front_close_view"),
                  translation : new SFVec3f([0,0.8,1]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite pelvis_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_pelvis_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("pelvis front close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_pelvis_front_close_view Viewpoint"),
                      url : new MFString(["#hanim_pelvis_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("knees_front_close_view"),
                  DEF : new SFString("hanim_knees_front_close_view"),
                  translation : new SFVec3f([0,0.4,1]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite knees_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_knees_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.4,0]),
                      description : new SFString("knees front close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_knees_front_close_view Viewpoint"),
                      url : new MFString(["#hanim_knees_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("feet_front_close_view"),
                  DEF : new SFString("hanim_feet_front_close_view"),
                  translation : new SFVec3f([0,0,1]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite feet_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_feet_front_close_viewpoint"),
                      description : new SFString("feet front close"),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_feet_front_close_view Viewpoint"),
                      url : new MFString(["#hanim_feet_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("eye_level_view"),
                  DEF : new SFString("hanim_eye_level_view"),
                  translation : new SFVec3f([0,1.6332,0.0502]),
                  { "#comment" : new CommentsBlock("HAnimSite visualization shape") },
                  children : new MFNode([
                    new TouchSensor({
                      description : new SFString("HAnimSite eye_level_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_eye_level_viewpoint"),
                      description : new SFString("eye level looking forward"),
                      orientation : new SFRotation([0,1,0,3.141593]),
                      position : new SFVec3f([0,0,0])}),
                  { "#comment" : new CommentsBlock("HAnimSite/Viewpoint visualization shape") },

                    new Anchor({
                      description : new SFString("HAnimSite hanim_eye_level_view Viewpoint"),
                      url : new MFString(["#hanim_eye_level_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_eyeball_site_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_eyeball_site_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_hand_front_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_hand_front_view")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vl5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vl4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vl3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vl2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vl1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt12")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt11")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt10")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt9")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt8")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt7")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt6")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vt1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc7")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc6")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_vc1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_skullbase")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_temporomandibular")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_acromioclavicular")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_acromioclavicular")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_eyeball_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_eyeball_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_eyebrow_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_eyebrow_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_eyelid_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_eyelid_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_index0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_index0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_index1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_index1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_index2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_index2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_index3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_index3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_middle0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_middle0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_middle1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_middle1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_middle2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_middle2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_middle3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_middle3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_radiocarpal")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_radiocarpal")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_ring0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_ring0")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_ring1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_ring1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_ring2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_ring2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_ring3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_ring3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_sternoclavicular")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_sternoclavicular")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_talocrural")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_talocrural")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_thumb1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_thumb2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_r_thumb3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_skull")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_jaw")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c6")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_c7")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t6")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t7")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t8")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t9")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t10")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t11")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_t12")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_sacrum")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_calf")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_calf")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_clavicle")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_clavicle")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_eyeball")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_eyeball")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_eyebrow")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_eyebrow")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_eyelid")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_eyelid")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_scapula")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_scapula")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_talus")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_talus")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_thigh")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_thigh")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_upperarm")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_r_upperarm")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_crotch_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_skull_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_sellion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_supramenton_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_nuchale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_suprasternale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_cervicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_substernale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_rib10_midspine_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_waist_preferred_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_navel_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_ant_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_ant_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_clavicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_clavicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_digit2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_digit2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_forefoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_forefoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_index_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_index_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_pha2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_pha2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_pha1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_pha1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_middle_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_middle_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_pinky_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_pinky_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ring_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ring_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_temporomandibular_l_site_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_temporomandibular_r_site_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thumb_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_thumb_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ulnar_styloid_pt")}))})])}))});
console.log(X3D0.toXMLNode());