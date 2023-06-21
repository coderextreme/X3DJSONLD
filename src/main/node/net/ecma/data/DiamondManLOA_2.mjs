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
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Billboard } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { MetadataSet } from './x3d.mjs';
import { MetadataString } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
import { HAnimSegment } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { HAnimSite } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("H-Anim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("DiamondManLOA_2.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("hanim skeletal structure at level of articulation two, one diamond at the base node for the structure")}),

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
              content : new SFString("13 March 2021")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("DiamondManLOA_2.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA2.png")}),

            new meta({
              name : new SFString("motto"),
              content : new SFString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("human animation, x3d, vrml, animation")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_2.x3d")}),

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
              info : new MFString(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]),
              title : new SFString("HANIM 1.1 Default Joint Centers, LOA1")}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("Diamond Man, LOA 2"),
              position : new SFVec3f([0,1,3])}),

            new Transform({
              translation : new SFVec3f([1,1.5,0]),
              children : new MFNode([
                new Billboard({
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Diamond Man Key"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              family : new MFString(["SANS"]),
                              size : new SFFloat(0.1)}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("TextMaterial"),
                              diffuseColor : new SFColor([0.9,0.9,0.9])}))}))}),

                    new Transform({
                      translation : new SFVec3f([0,-0.3,0]),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.08)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("MIN_COLOR"),
                                  diffuseColor : new SFColor([1,0,0])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0.2,0,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Minimal Humanoid Joints"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(0.1)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("TextMaterial")}))}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([0,-0.5,0]),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.08)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("JOINT_COLOR"),
                                  diffuseColor : new SFColor([1,1,0])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0.2,0,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Humanoid Joints"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(0.1)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("TextMaterial")}))}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([0,-0.7,0]),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.08)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("REC_SPINAL_COLOR"),
                                  diffuseColor : new SFColor([1,0,1])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0.2,0,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Recommended Spinal Joints"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(0.1)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("TextMaterial")}))}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([0,-0.9,0]),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.08)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("SPINAL_COLOR"),
                                  diffuseColor : new SFColor([0,1,0])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0.2,0,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Spinal Joints"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(0.1)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("TextMaterial")}))}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([0,-1.3,0]),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.08)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("SITE_COLOR"),
                                  diffuseColor : new SFColor([0,0,1])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0.2,0,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Humanoid Sites"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(0.1)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("TextMaterial")}))}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([0,-1.1,0]),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.08)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("HAND_FEET_COLOR"),
                                  diffuseColor : new SFColor([0,1,1])}))}))}),

                        new Transform({
                          translation : new SFVec3f([0.2,0,0]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Hand & Feet Joints"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(0.1)}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("TextMaterial")}))}))})])})])})])})])}),

            new HAnimHumanoid({
              name : new SFString("humanoid"),
              DEF : new SFString("hanim_humanoid"),
              version : new SFString("1.0"),
              /*HAnimHumanoid original info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'*/
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("humanoidVersion"),
                      value : new MFString(["Nancy V1.2b"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorEmail"),
                      value : new MFString(["cindy@ballreich.net"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["Cindy Ballreich"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("copyright"),
                      value : new MFString(["1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved."])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("creationDate"),
                      value : new MFString(["Tue Dec 30 08:30:08 PST 1997"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("usageRestrictions"),
                      value : new MFString(["Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given."])}))}),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("HumanoidRoot"),
                  DEF : new SFString("hanim_HumanoidRoot"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  ulimit : new SFVec3f([0,0,0]),
                  llimit : new SFVec3f([0,0,0]),
                  stiffness : new SFVec3f([0,0,0]),
                  children : new MFNode([
                    new HAnimSegment({
                      name : new SFString("sacrum"),
                      DEF : new SFString("hanim_sacrum"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.824,0.0277]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("DiamondShape"),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                  creaseAngle : new SFFloat(0.5),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("points"),
                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("ROOT_COLOR"),
                                      diffuseColor : new SFColor([1,1,1])}))}))}),

                            new Transform({
                              translation : new SFVec3f([0,0.01,0]),
                              children : new MFNode([
                                new Billboard({
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["Humanoid Root"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString(["SANS"]),
                                              size : new SFFloat(0.01),
                                              style : new SFString("ITALIC")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.039216,1,0.568627])}))}))})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      ulimit : new SFVec3f([0,0,0]),
                      llimit : new SFVec3f([0,0,0]),
                      stiffness : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("pelvis"),
                          DEF : new SFString("hanim_pelvis"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("sacroiliacPos"),
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("MIN_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("r_iliocristale_pt"),
                              DEF : new SFString("hanim_r_iliocristale_pt"),
                              translation : new SFVec3f([-0.1525,1.0628,0.0035]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("r_trochanterion_pt"),
                              DEF : new SFString("hanim_r_trochanterion_pt"),
                              translation : new SFVec3f([-0.1689,0.8419,0.0352]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("l_iliocristale_pt"),
                              DEF : new SFString("hanim_l_iliocristale_pt"),
                              translation : new SFVec3f([0.1612,1.0537,0.0008]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("l_trochanterion_pt"),
                              DEF : new SFString("hanim_l_trochanterion_pt"),
                              translation : new SFVec3f([0.1677,0.8336,0.0303]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("r_asis_pt"),
                              DEF : new SFString("hanim_r_asis_pt"),
                              translation : new SFVec3f([-0.0887,1.0021,0.1112]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("l_asis_pt"),
                              DEF : new SFString("hanim_l_asis_pt"),
                              translation : new SFVec3f([0.0925,0.9983,0.1052]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("r_psis_pt"),
                              DEF : new SFString("hanim_r_psis_pt"),
                              translation : new SFVec3f([-0.0716,1.019,-0.1138]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("l_psis_pt"),
                              DEF : new SFString("hanim_l_psis_pt"),
                              translation : new SFVec3f([0.0774,1.019,-0.1151]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                            new HAnimSite({
                              name : new SFString("crotch_pt"),
                              DEF : new SFString("hanim_crotch_pt"),
                              translation : new SFVec3f([0.0034,0.8266,0.0257]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("SITE_COLOR")}))}))})])})])}),

                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_thigh"),
                              DEF : new SFString("hanim_l_thigh"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("MIN_COLOR")}))}))})])}),

                                new HAnimSite({
                                  name : new SFString("l_knee_crease_pt"),
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SITE_COLOR")}))}))})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_l_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SITE_COLOR")}))}))})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_medial_epicn_pt"),
                                  DEF : new SFString("hanim_l_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([0.0398,0.4946,0.0303]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SITE_COLOR")}))}))})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_calf"),
                                  DEF : new SFString("hanim_l_calf"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.104,0.4867,0.0308]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  USE : new SFString("points")}))})),
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("MIN_COLOR")}))}))})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_ankle"),
                                  DEF : new SFString("hanim_l_ankle"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_hindfoot"),
                                      DEF : new SFString("hanim_l_hindfoot"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("MIN_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("l_lateral_malleolus_pt"),
                                          DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                          translation : new SFVec3f([0.1308,0.0597,-0.1032]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("l_medial_malleolus_pt"),
                                          DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                          translation : new SFVec3f([0.089,0.0716,-0.0881]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("l_sphyrion_pt"),
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          translation : new SFVec3f([0.089,0.0575,-0.0943]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("l_calcaneous_post_pt"),
                                          DEF : new SFString("hanim_l_calcaneous_post_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_subtalar"),
                                      DEF : new SFString("hanim_l_subtalar"),
                                      center : new SFVec3f([0.1086,0.0001,-0.0368]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("midproximal"),
                                          DEF : new SFString("hanim_midproximal"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.1086,0.0001,-0.0368]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("MIN_COLOR")}))}))})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_midtarsal"),
                                          DEF : new SFString("hanim_l_midtarsal"),
                                          center : new SFVec3f([0.1086,0.0001,0.0368]),
                                          ulimit : new SFVec3f([0,0,0]),
                                          llimit : new SFVec3f([0,0,0]),
                                          stiffness : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_middistal"),
                                              DEF : new SFString("hanim_l_middistal"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1086,0.0001,0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                          creaseAngle : new SFFloat(0.5),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              USE : new SFString("points")}))})),
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("JOINT_COLOR")}))}))})])}),

                                                new HAnimSite({
                                                  name : new SFString("l_middistal_tip"),
                                                  DEF : new SFString("hanim_l_middistal_tip"),
                                                  translation : new SFVec3f([0.1354,0.0016,0.1476]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                          creaseAngle : new SFFloat(0.5),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              USE : new SFString("points")}))})),
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                                new HAnimSite({
                                                  name : new SFString("l_metatarsal_pha1_pt"),
                                                  DEF : new SFString("hanim_l_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([0.0816,0.0232,0.0106]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                          creaseAngle : new SFFloat(0.5),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              USE : new SFString("points")}))})),
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("HAND_FEET_COLOR")}))}))})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_metatarsal"),
                                              DEF : new SFString("hanim_l_metatarsal"),
                                              center : new SFVec3f([0.1086,0,0.0762]),
                                              ulimit : new SFVec3f([0,0,0]),
                                              llimit : new SFVec3f([0,0,0]),
                                              stiffness : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_forefoot"),
                                                  DEF : new SFString("hanim_l_forefoot"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1086,0,0.0762]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                              creaseAngle : new SFFloat(0.5),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  USE : new SFString("points")}))})),
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("JOINT_COLOR")}))}))})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_forefoot_tip"),
                                                      DEF : new SFString("hanim_l_forefoot_tip"),
                                                      translation : new SFVec3f([0.1354,0.0016,0.1476]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                              creaseAngle : new SFFloat(0.5),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  USE : new SFString("points")}))})),
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_pha5_pt"),
                                                      DEF : new SFString("hanim_l_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([0.1825,0.007,0.0928]),
                                                      /*# CAESAR Feature Point #66*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                              creaseAngle : new SFFloat(0.5),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  USE : new SFString("points")}))})),
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_digit2_pt"),
                                                      DEF : new SFString("hanim_l_digit2_pt"),
                                                      translation : new SFVec3f([0.1195,0.0079,0.1433]),
                                                      /*# CAESAR Feature Point #72*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                              creaseAngle : new SFFloat(0.5),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  USE : new SFString("points")}))})),
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("HAND_FEET_COLOR")}))}))})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.095,0.9171,0.0029]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_thigh"),
                              DEF : new SFString("hanim_r_thigh"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.095,0.9171,0.0029]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("MIN_COLOR")}))}))})])}),

                                new HAnimSite({
                                  name : new SFString("r_knee_crease_pt"),
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SITE_COLOR")}))}))})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_r_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SITE_COLOR")}))}))})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_medial_epicn_pt"),
                                  DEF : new SFString("hanim_r_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SITE_COLOR")}))}))})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.0867,0.4913,0.0318]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_calf"),
                                  DEF : new SFString("hanim_r_calf"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.0867,0.4913,0.0318]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  USE : new SFString("points")}))})),
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("SITE_COLOR")}))}))})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_ankle"),
                                  DEF : new SFString("hanim_r_ankle"),
                                  center : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_hindfoot"),
                                      DEF : new SFString("hanim_r_hindfoot"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("MIN_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("r_lateral_malleolus_pt"),
                                          DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                          translation : new SFVec3f([-0.1006,0.0658,-0.1075]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("r_medial_malleolus_pt"),
                                          DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                          translation : new SFVec3f([-0.0591,0.076,-0.0928]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("r_sphyrion_pt"),
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.0603,0.061,-0.1002]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                        new HAnimSite({
                                          name : new SFString("r_calcaneous_post_pt"),
                                          DEF : new SFString("hanim_r_calcaneous_post_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_midtarsal"),
                                      DEF : new SFString("hanim_r_midtarsal"),
                                      center : new SFVec3f([-0.0801,0,0.0368]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_middistal"),
                                          DEF : new SFString("hanim_r_middistal"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.0801,0,0.0368]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("JOINT_COLOR")}))}))})])}),

                                            new HAnimSite({
                                              name : new SFString("r_middistal_tip"),
                                              DEF : new SFString("hanim_r_middistal_tip"),
                                              translation : new SFVec3f([-0.1043,-0.0227,0.145]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                            new HAnimSite({
                                              name : new SFString("r_metatarsal_pha5_pt"),
                                              DEF : new SFString("hanim_r_metatarsal_pha5_pt"),
                                              translation : new SFVec3f([-0.1523,0.0166,0.0895]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                            new HAnimSite({
                                              name : new SFString("r_metatarsal_pha1_pt"),
                                              DEF : new SFString("hanim_r_metatarsal_pha1_pt"),
                                              translation : new SFVec3f([-0.0521,0.026,0.0127]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("HAND_FEET_COLOR")}))}))})])}),

                                            new HAnimSite({
                                              name : new SFString("r_digit2_pt"),
                                              DEF : new SFString("hanim_r_digit2_pt"),
                                              translation : new SFVec3f([-0.0883,0.0134,0.1383]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("HAND_FEET_COLOR")}))}))})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      ulimit : new SFVec3f([0,0,0]),
                      llimit : new SFVec3f([0,0,0]),
                      stiffness : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l5"),
                          DEF : new SFString("hanim_l5"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0.0028,1.0568,-0.0776]),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          USE : new SFString("points")}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                        new HAnimJoint({
                          name : new SFString("vl4"),
                          DEF : new SFString("hanim_vl4"),
                          center : new SFVec3f([0.0035,1.0925,-0.0787]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l4"),
                              DEF : new SFString("hanim_l4"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.0035,1.0925,-0.0787]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          coord : new SFNode(
                                            new Coordinate({
                                              USE : new SFString("points")}))})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                            new HAnimJoint({
                              name : new SFString("vl3"),
                              DEF : new SFString("hanim_vl3"),
                              center : new SFVec3f([0.0041,1.1276,-0.0796]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l3"),
                                  DEF : new SFString("hanim_l3"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.0041,1.1276,-0.0796]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  USE : new SFString("points")}))})),
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l2"),
                                      DEF : new SFString("hanim_l2"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.0045,1.1546,-0.08]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      USE : new SFString("points")}))})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("vl1"),
                                      DEF : new SFString("hanim_vl1"),
                                      center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l1"),
                                          DEF : new SFString("hanim_l1"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.0048,1.1912,-0.0805]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                      creaseAngle : new SFFloat(0.5),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          USE : new SFString("points")}))})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("vt12"),
                                          DEF : new SFString("hanim_vt12"),
                                          center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                          ulimit : new SFVec3f([0,0,0]),
                                          llimit : new SFVec3f([0,0,0]),
                                          stiffness : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("t12"),
                                              DEF : new SFString("hanim_t12"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.0051,1.2278,-0.0808]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new IndexedFaceSet({
                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                          creaseAngle : new SFFloat(0.5),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              USE : new SFString("points")}))})),
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("vt11"),
                                              DEF : new SFString("hanim_vt11"),
                                              center : new SFVec3f([0.0053,1.2679,-0.081]),
                                              ulimit : new SFVec3f([0,0,0]),
                                              llimit : new SFVec3f([0,0,0]),
                                              stiffness : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("t11"),
                                                  DEF : new SFString("hanim_t11"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.0053,1.2679,-0.081]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new IndexedFaceSet({
                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                              creaseAngle : new SFFloat(0.5),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  USE : new SFString("points")}))})),
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              material : new SFNode(
                                                                new Material({
                                                                  USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                  ulimit : new SFVec3f([0,0,0]),
                                                  llimit : new SFVec3f([0,0,0]),
                                                  stiffness : new SFVec3f([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("t10"),
                                                      DEF : new SFString("hanim_t10"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      USE : new SFString("points")}))})),
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                      ulimit : new SFVec3f([0,0,0]),
                                                      llimit : new SFVec3f([0,0,0]),
                                                      stiffness : new SFVec3f([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("t9"),
                                                          DEF : new SFString("hanim_t9"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          USE : new SFString("points")}))})),
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("vt8"),
                                                          DEF : new SFString("hanim_vt8"),
                                                          center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                          ulimit : new SFVec3f([0,0,0]),
                                                          llimit : new SFVec3f([0,0,0]),
                                                          stiffness : new SFVec3f([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("t8"),
                                                              DEF : new SFString("hanim_t8"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              USE : new SFString("points")}))})),
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("vt7"),
                                                              DEF : new SFString("hanim_vt7"),
                                                              center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                              ulimit : new SFVec3f([0,0,0]),
                                                              llimit : new SFVec3f([0,0,0]),
                                                              stiffness : new SFVec3f([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("t7"),
                                                                  DEF : new SFString("hanim_t7"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new IndexedFaceSet({
                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                              creaseAngle : new SFFloat(0.5),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  USE : new SFString("points")}))})),
                                                                          appearance : new SFNode(
                                                                            new Appearance({
                                                                              material : new SFNode(
                                                                                new Material({
                                                                                  USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("vt6"),
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                  llimit : new SFVec3f([0,0,0]),
                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("t6"),
                                                                      DEF : new SFString("hanim_t6"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                          children : new MFNode([
                                                                            new Shape({
                                                                              geometry : new SFNode(
                                                                                new IndexedFaceSet({
                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      USE : new SFString("points")}))})),
                                                                              appearance : new SFNode(
                                                                                new Appearance({
                                                                                  material : new SFNode(
                                                                                    new Material({
                                                                                      USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("vt5"),
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                      llimit : new SFVec3f([0,0,0]),
                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("t5"),
                                                                          DEF : new SFString("hanim_t5"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                              children : new MFNode([
                                                                                new Shape({
                                                                                  geometry : new SFNode(
                                                                                    new IndexedFaceSet({
                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          USE : new SFString("points")}))})),
                                                                                  appearance : new SFNode(
                                                                                    new Appearance({
                                                                                      material : new SFNode(
                                                                                        new Material({
                                                                                          USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                          llimit : new SFVec3f([0,0,0]),
                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("t4"),
                                                                              DEF : new SFString("hanim_t4"),
                                                                              children : new MFNode([
                                                                                new Transform({
                                                                                  translation : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                                  children : new MFNode([
                                                                                    new Shape({
                                                                                      geometry : new SFNode(
                                                                                        new IndexedFaceSet({
                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              USE : new SFString("points")}))})),
                                                                                      appearance : new SFNode(
                                                                                        new Appearance({
                                                                                          material : new SFNode(
                                                                                            new Material({
                                                                                              USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("vt3"),
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                              llimit : new SFVec3f([0,0,0]),
                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("t3"),
                                                                                  DEF : new SFString("hanim_t3"),
                                                                                  children : new MFNode([
                                                                                    new Transform({
                                                                                      translation : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                                      children : new MFNode([
                                                                                        new Shape({
                                                                                          geometry : new SFNode(
                                                                                            new IndexedFaceSet({
                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  USE : new SFString("points")}))})),
                                                                                          appearance : new SFNode(
                                                                                            new Appearance({
                                                                                              material : new SFNode(
                                                                                                new Material({
                                                                                                  USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt2"),
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("t2"),
                                                                                      DEF : new SFString("hanim_t2"),
                                                                                      children : new MFNode([
                                                                                        new Transform({
                                                                                          translation : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                          children : new MFNode([
                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new IndexedFaceSet({
                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      USE : new SFString("points")}))})),
                                                                                              appearance : new SFNode(
                                                                                                new Appearance({
                                                                                                  material : new SFNode(
                                                                                                    new Material({
                                                                                                      USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("t1"),
                                                                                          DEF : new SFString("hanim_t1"),
                                                                                          children : new MFNode([
                                                                                            new Transform({
                                                                                              translation : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                              children : new MFNode([
                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new IndexedFaceSet({
                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          USE : new SFString("points")}))})),
                                                                                                  appearance : new SFNode(
                                                                                                    new Appearance({
                                                                                                      material : new SFNode(
                                                                                                        new Material({
                                                                                                          USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_shoulder"),
                                                                                          DEF : new SFString("hanim_l_shoulder"),
                                                                                          center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("l_upperarm"),
                                                                                              DEF : new SFString("hanim_l_upperarm"),
                                                                                              children : new MFNode([
                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              USE : new SFString("points")}))})),
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                new Transform({
                                                                                                  DEF : new SFString("l_upperarm_adjust"),
                                                                                                  center : new SFVec3f([0.182,1.22,-0.047]),
                                                                                                  rotation : new SFRotation([1,0,0,0.119]),
                                                                                                  translation : new SFVec3f([0.2029,1.4376,-0.0387])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_humeral_lateral_epicn_pt"),
                                                                                                  DEF : new SFString("hanim_l_humeral_lateral_epicn_pt"),
                                                                                                  translation : new SFVec3f([0.228,1.1482,-0.11]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              USE : new SFString("points")}))})),
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              USE : new SFString("SITE_COLOR")}))}))})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_elbow"),
                                                                                              DEF : new SFString("hanim_l_elbow"),
                                                                                              center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("l_forearm"),
                                                                                                  DEF : new SFString("hanim_l_forearm"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                    new Transform({
                                                                                                      DEF : new SFString("l_forearm_adjust"),
                                                                                                      center : new SFVec3f([0.198,0.961,-0.0405]),
                                                                                                      rotation : new SFRotation([-1,0,0,0.1]),
                                                                                                      translation : new SFVec3f([0.2014,1.1357,-0.0682])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_radial_styloid_pt"),
                                                                                                      DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                      translation : new SFVec3f([0.1901,0.8645,-0.0415]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_olecranon_pt"),
                                                                                                      DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                      translation : new SFVec3f([-0.1962,1.1375,-0.1123]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_humeral_medial_epicn_pt"),
                                                                                                      DEF : new SFString("hanim_l_humeral_medial_epicn_pt"),
                                                                                                      translation : new SFVec3f([0.1735,1.1272,-0.1113]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_radiale_pt"),
                                                                                                      DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                      translation : new SFVec3f([0.2182,1.1212,-0.1167]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_wrist"),
                                                                                                  DEF : new SFString("hanim_l_wrist"),
                                                                                                  center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("l_hand"),
                                                                                                      DEF : new SFString("hanim_l_hand"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                        new Transform({
                                                                                                          DEF : new SFString("l_hand_adjust"),
                                                                                                          center : new SFVec3f([0.213,0.811,-0.0338]),
                                                                                                          rotation : new SFRotation([-0.06361,-0.9967,0.04988,1.333]),
                                                                                                          translation : new SFVec3f([0.1984,0.8663,-0.0583])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_hand_tip"),
                                                                                                          DEF : new SFString("hanim_l_hand_tip"),
                                                                                                          translation : new SFVec3f([0.208,0.6731,-0.0491]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_metacarpal_pha2_pt"),
                                                                                                          DEF : new SFString("hanim_l_metacarpal_pha2_pt"),
                                                                                                          translation : new SFVec3f([0.2009,0.8139,-0.0237]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_dactylion_pt"),
                                                                                                          DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                          translation : new SFVec3f([0.2056,0.6743,-0.0482]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_ulnar_styloid_pt"),
                                                                                                          DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                          translation : new SFVec3f([-0.2142,0.8529,-0.0648]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_metacarpal_pha5_pt"),
                                                                                                          DEF : new SFString("hanim_l_metacarpal_pha5_pt"),
                                                                                                          translation : new SFVec3f([0.1929,0.786,-0.1122]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_thumb1"),
                                                                                                      DEF : new SFString("hanim_l_thumb1"),
                                                                                                      center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_thumb_metacarpal"),
                                                                                                          DEF : new SFString("hanim_l_thumb_metacarpal"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          USE : new SFString("JOINT_COLOR")}))}))})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_thumb2"),
                                                                                                          DEF : new SFString("hanim_l_thumb2"),
                                                                                                          center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_thumb_proximal"),
                                                                                                              DEF : new SFString("hanim_l_thumb_proximal"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedFaceSet({
                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              USE : new SFString("points")}))})),
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          material : new SFNode(
                                                                                                                            new Material({
                                                                                                                              USE : new SFString("JOINT_COLOR")}))}))})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_thumb3"),
                                                                                                              DEF : new SFString("hanim_l_thumb3"),
                                                                                                              center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_thumb_distal"),
                                                                                                                  DEF : new SFString("hanim_l_thumb_distal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  USE : new SFString("points")}))})),
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  USE : new SFString("JOINT_COLOR")}))}))})])}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_thumb_distal_tip"),
                                                                                                                      DEF : new SFString("hanim_l_thumb_distal_tip"),
                                                                                                                      translation : new SFVec3f([0.1982,0.8061,0.0759]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  USE : new SFString("points")}))})),
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  USE : new SFString("HAND_FEET_COLOR")}))}))})])})])})])})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_index0"),
                                                                                                      DEF : new SFString("hanim_l_index0"),
                                                                                                      center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_index_metacarpal"),
                                                                                                          DEF : new SFString("hanim_l_index_metacarpal"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          USE : new SFString("JOINT_COLOR")}))}))})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_index1"),
                                                                                                          DEF : new SFString("hanim_l_index1"),
                                                                                                          center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_index_proximal"),
                                                                                                              DEF : new SFString("hanim_l_index_proximal"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedFaceSet({
                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              USE : new SFString("points")}))})),
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          material : new SFNode(
                                                                                                                            new Material({
                                                                                                                              USE : new SFString("JOINT_COLOR")}))}))})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_index2"),
                                                                                                              DEF : new SFString("hanim_l_index2"),
                                                                                                              center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_index_middle"),
                                                                                                                  DEF : new SFString("hanim_l_index_middle"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  USE : new SFString("points")}))})),
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  USE : new SFString("JOINT_COLOR")}))}))})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_index3"),
                                                                                                                  DEF : new SFString("hanim_l_index3"),
                                                                                                                  center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_index_distal"),
                                                                                                                      DEF : new SFString("hanim_l_index_distal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      USE : new SFString("points")}))})),
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      USE : new SFString("JOINT_COLOR")}))}))})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("l_index_distal_tip"),
                                                                                                                          DEF : new SFString("hanim_l_index_distal_tip"),
                                                                                                                          translation : new SFVec3f([0.2089,0.6858,-0.0245]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      USE : new SFString("points")}))})),
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      USE : new SFString("HAND_FEET_COLOR")}))}))})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_shoulder"),
                                                                                          DEF : new SFString("hanim_r_shoulder"),
                                                                                          center : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("r_upperarm"),
                                                                                              DEF : new SFString("hanim_r_upperarm"),
                                                                                              children : new MFNode([
                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              USE : new SFString("points")}))})),
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                new Transform({
                                                                                                  DEF : new SFString("r_upperarm_adjust"),
                                                                                                  center : new SFVec3f([-0.182,1.22,-0.047]),
                                                                                                  rotation : new SFRotation([1,0,0,0.0836]),
                                                                                                  translation : new SFVec3f([-0.1907,1.4407,-0.0325])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_humeral_lateral_epicn_pt"),
                                                                                                  DEF : new SFString("hanim_r_humeral_lateral_epicn_pt"),
                                                                                                  translation : new SFVec3f([-0.2224,1.1517,-0.1033]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              USE : new SFString("points")}))})),
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              USE : new SFString("SITE_COLOR")}))}))})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_elbow"),
                                                                                              DEF : new SFString("hanim_r_elbow"),
                                                                                              center : new SFVec3f([-0.1949,1.1388,-0.062]),
                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("r_forearm"),
                                                                                                  DEF : new SFString("hanim_r_forearm"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.1949,1.1388,-0.062]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                    new Transform({
                                                                                                      DEF : new SFString("r_forearm_adjust"),
                                                                                                      center : new SFVec3f([-0.198,0.961,-0.0397]),
                                                                                                      rotation : new SFRotation([-1,0,0,0.1254]),
                                                                                                      translation : new SFVec3f([-0.1949,1.1388,-0.062])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_radial_styloid_pt"),
                                                                                                      DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                      translation : new SFVec3f([-0.1884,0.8676,-0.036]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_olecranon_pt"),
                                                                                                      DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                      translation : new SFVec3f([-0.1907,1.1405,-0.1065]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_humeral_medial_epicn_pt"),
                                                                                                      DEF : new SFString("hanim_r_humeral_medial_epicn_pt"),
                                                                                                      translation : new SFVec3f([-0.168,1.1298,-0.1062]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_radiale_pt"),
                                                                                                      DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                      translation : new SFVec3f([-0.213,1.1305,-0.1091]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SITE_COLOR")}))}))})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_wrist"),
                                                                                                  DEF : new SFString("hanim_r_wrist"),
                                                                                                  center : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("r_hand"),
                                                                                                      DEF : new SFString("hanim_r_hand"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                        new Transform({
                                                                                                          DEF : new SFString("r_hand_adjust"),
                                                                                                          center : new SFVec3f([-0.217,0.811,-0.0338]),
                                                                                                          rotation : new SFRotation([-0.09024,0.994,-0.0624,1.216])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_hand_tip"),
                                                                                                          DEF : new SFString("hanim_r_hand_tip"),
                                                                                                          translation : new SFVec3f([-0.1969,0.6758,-0.0427]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_metacarpal_pha2_pt"),
                                                                                                          DEF : new SFString("hanim_r_metacarpal_pha2_pt"),
                                                                                                          translation : new SFVec3f([-0.1977,0.8169,-0.0177]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_dactylion_pt"),
                                                                                                          DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                          translation : new SFVec3f([-0.1941,0.6772,-0.0423]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_ulnar_styloid_pt"),
                                                                                                          DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                          translation : new SFVec3f([-0.2117,0.8562,-0.0584]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_metacarpal_pha5_pt"),
                                                                                                          DEF : new SFString("hanim_r_metacarpal_pha5_pt"),
                                                                                                          translation : new SFVec3f([-0.1929,0.789,-0.1064]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SITE_COLOR")}))}))})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("c7"),
                                                                                              DEF : new SFString("hanim_c7"),
                                                                                              children : new MFNode([
                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              USE : new SFString("points")}))})),
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc6"),
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("c6"),
                                                                                                  DEF : new SFString("hanim_c6"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  USE : new SFString("points")}))})),
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc5"),
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("c5"),
                                                                                                      DEF : new SFString("hanim_c5"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      USE : new SFString("points")}))})),
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc4"),
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("c4"),
                                                                                                          DEF : new SFString("hanim_c4"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc3"),
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("c3"),
                                                                                                              DEF : new SFString("hanim_c3"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedFaceSet({
                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              USE : new SFString("points")}))})),
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          material : new SFNode(
                                                                                                                            new Material({
                                                                                                                              USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc2"),
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("c2"),
                                                                                                                  DEF : new SFString("hanim_c2"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  USE : new SFString("points")}))})),
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  USE : new SFString("REC_SPINAL_COLOR")}))}))})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("c1"),
                                                                                                                      DEF : new SFString("hanim_c1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      USE : new SFString("points")}))})),
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      USE : new SFString("SPINAL_COLOR")}))}))})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("skull"),
                                                                                                                          DEF : new SFString("hanim_skull"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("MIN_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("skull_tip"),
                                                                                                                              DEF : new SFString("hanim_skull_tip"),
                                                                                                                              translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("sellion_pt"),
                                                                                                                              DEF : new SFString("hanim_sellion_pt"),
                                                                                                                              translation : new SFVec3f([0.0058,1.6316,0.0852]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_infraorbitale_pt"),
                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([-0.0237,1.6171,0.0752]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_infraorbitale_pt"),
                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([0.0341,1.6171,0.0752]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("supramenton_pt"),
                                                                                                                              DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                              translation : new SFVec3f([0.0061,1.541,0.0805]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_tragion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                              translation : new SFVec3f([-0.0646,1.6347,0.0302]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                              translation : new SFVec3f([-0.052,1.5529,0.0347]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_tragion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                              translation : new SFVec3f([0.0739,1.6348,0.0282]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                              translation : new SFVec3f([0.0631,1.553,0.033]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("nuchale_pt"),
                                                                                                                              DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.5972,-0.0796]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          USE : new SFString("points")}))})),
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          USE : new SFString("SITE_COLOR")}))}))})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("DiamondManLOA_2_view"),
                  DEF : new SFString("hanim_DiamondManLOA_2_view"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("FrontView"),
                      description : new SFString("Front View"),
                      position : new SFVec3f([0.35,0.854,2.57665])}),

                    new Viewpoint({
                      DEF : new SFString("SideView"),
                      description : new SFString("Side View"),
                      orientation : new SFRotation([0,1,0,1.57079]),
                      position : new SFVec3f([2,0.854,0])}),

                    new Viewpoint({
                      DEF : new SFString("TopView"),
                      description : new SFString("Top View"),
                      orientation : new SFRotation([1,0,0,-1.57079]),
                      position : new SFVec3f([0,3.4495,0])}),

                    new Viewpoint({
                      DEF : new SFString("RootView"),
                      description : new SFString("Humanoid Root View"),
                      position : new SFVec3f([0,0.824,0.277])}),

                    new Viewpoint({
                      DEF : new SFString("InclinedView"),
                      description : new SFString("Inclined View"),
                      orientation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                      position : new SFVec3f([1.62,1.05,2.06])})])})]),

                new HAnimJoint({
                  USE : new SFString("hanim_HumanoidRoot")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt12")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt11")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt10")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt9")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt8")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt7")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt6")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc7")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc6")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ankle")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ankle")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_subtalar")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_wrist")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_wrist")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_skull")}),

                new HAnimSegment({
                  USE : new SFString("hanim_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("hanim_midproximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t12")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t11")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t10")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t9")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t8")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forefoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hand")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hand")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middistal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middistal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thumb_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thumb_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thumb_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_upperarm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_upperarm")}),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_crotch_pt")})]),
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
                  USE : new SFString("hanim_r_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneous_post_pt")})),
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
                  USE : new SFString("hanim_r_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_hand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_hand_tip")})),
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
                  USE : new SFString("hanim_l_middistal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_middistal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_olecranon_pt")})),
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
                  USE : new SFString("hanim_l_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thumb_distal_tip")})),
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
