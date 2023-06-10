'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { IndexedLineSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Color } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { LineSet } from './x3d.mjs';
import { ColorRGBA } from './x3d.mjs';
import { MFColorRGBA } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
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
              content : new SFString("JohnBoy.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("An attempt at a standard LOA-4 skeleton")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("h2.pl")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 Jan 2023")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("9 November 2020")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              /*DEF for markerfor XYZ axes*/
              children : new MFNode([
                new Shape({
                  DEF : new SFString("AxisLinesShape"),
                  /*RGB lines showing XYZ axes*/
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorIndex : new MFInt32([0,1,2]),
                      colorPerVertex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])})),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))})])}),

            new Group({
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children : new MFNode([
                new Transform({
                  /*<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2.1,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimJointShape"),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.02)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("HAnimJointMaterial"),
                                  diffuseColor : new SFColor([0,0,0.8]),
                                  transparency : new SFFloat(0.3)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.05,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimSegmentLine"),
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSegmentLineColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.05,0,0,0.05,0,0])}))}))})])}),
                  /*<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/])})])}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              description : new SFString("default")}),

            new HAnimHumanoid({
              name : new SFString("HAnim"),
              DEF : new SFString("hanim_HAnim"),
              info : new MFString(["humanoidVersion=2.0"]),
              version : new SFString("2.0"),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  ulimit : new MFFloat([0,0,0]),
                  llimit : new MFFloat([0,0,0]),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("l_talocrural"),
                                  DEF : new SFString("hanim_l_talocrural"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("l_talocalcaneonavicular"),
                                      DEF : new SFString("hanim_l_talocalcaneonavicular"),
                                      center : new SFVec3f([0,1,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_1"),
                                          DEF : new SFString("hanim_l_cuneonavicular_1"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_1"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_1"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_1"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_1"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_interphalangeal_1"),
                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_1"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_2"),
                                          DEF : new SFString("hanim_l_cuneonavicular_2"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_2"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_2"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_2"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_2"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_2"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_2"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_3"),
                                          DEF : new SFString("hanim_l_cuneonavicular_3"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_3"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_3"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_3"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_3"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_3"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_3"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_3"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_3"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_calcaneocuboid"),
                                      DEF : new SFString("hanim_l_calcaneocuboid"),
                                      center : new SFVec3f([0,1,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("l_transversetarsal"),
                                          DEF : new SFString("hanim_l_transversetarsal"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_4"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_4"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_4"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_4"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_4"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_4"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_4"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_4"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_5"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_5"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_5"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_5"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_5"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_5"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_5"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_5"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.095,0.9171,0.0029]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.0867,0.4913,0.0318]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("r_talocrural"),
                                  DEF : new SFString("hanim_r_talocrural"),
                                  center : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("r_talocalcaneonavicular"),
                                      DEF : new SFString("hanim_r_talocalcaneonavicular"),
                                      center : new SFVec3f([0,1,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_1"),
                                          DEF : new SFString("hanim_r_cuneonavicular_1"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_1"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_1"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_1"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_1"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_interphalangeal_1"),
                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_1"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_2"),
                                          DEF : new SFString("hanim_r_cuneonavicular_2"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_2"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_2"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_2"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_2"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_2"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_2"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_2"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_3"),
                                          DEF : new SFString("hanim_r_cuneonavicular_3"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_3"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_3"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_3"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_3"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_3"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_3"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_3"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_3"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_calcaneocuboid"),
                                      DEF : new SFString("hanim_r_calcaneocuboid"),
                                      center : new SFVec3f([0,1,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("r_transversetarsal"),
                                          DEF : new SFString("hanim_r_transversetarsal"),
                                          center : new SFVec3f([0,1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_4"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_4"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_4"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_4"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_4"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_4"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_4"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_4"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_5"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_5"),
                                              center : new SFVec3f([0,1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_5"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_5"),
                                                  center : new SFVec3f([0,1,0]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_5"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_5"),
                                                      center : new SFVec3f([0,1,0]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_5"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_5"),
                                                          center : new SFVec3f([0,1,0]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimJoint({
                          name : new SFString("vl4"),
                          DEF : new SFString("hanim_vl4"),
                          center : new SFVec3f([0.0035,1.0925,-0.0787]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimJoint({
                              name : new SFString("vl3"),
                              DEF : new SFString("hanim_vl3"),
                              center : new SFVec3f([0.0041,1.1276,-0.0796]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("vl1"),
                                      DEF : new SFString("hanim_vl1"),
                                      center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("vt12"),
                                          DEF : new SFString("hanim_vt12"),
                                          center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("vt11"),
                                              DEF : new SFString("hanim_vt11"),
                                              center : new SFVec3f([0.0053,1.2679,-0.081]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("vt8"),
                                                          DEF : new SFString("hanim_vt8"),
                                                          center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimJoint({
                                                              name : new SFString("vt7"),
                                                              DEF : new SFString("hanim_vt7"),
                                                              center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimJoint({
                                                                  name : new SFString("vt6"),
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimJoint({
                                                                      name : new SFString("vt5"),
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                      ulimit : new MFFloat([0,0,0]),
                                                                      llimit : new MFFloat([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                          ulimit : new MFFloat([0,0,0]),
                                                                          llimit : new MFFloat([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimJoint({
                                                                              name : new SFString("vt3"),
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                              ulimit : new MFFloat([0,0,0]),
                                                                              llimit : new MFFloat([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt2"),
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc6"),
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc5"),
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc4"),
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc3"),
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc2"),
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          center : new SFVec3f([0,1,0]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_l_radiocarpal"),
                                                                                                          center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_1"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_1"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_1"),
                                                                                                                  center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_1"),
                                                                                                                      center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_interphalangeal_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_interphalangeal_1"),
                                                                                                                          center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_2"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_2"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_2"),
                                                                                                                  center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_2"),
                                                                                                                      center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_2"),
                                                                                                                              center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_3"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_3"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_3"),
                                                                                                                  center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_3"),
                                                                                                                      center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_3"),
                                                                                                                              center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_4_5"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_4_5"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_4"),
                                                                                                                  center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_4"),
                                                                                                                      center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_4"),
                                                                                                                              center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_5"),
                                                                                                                  center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_5"),
                                                                                                                      center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_5"),
                                                                                                                              center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          center : new SFVec3f([-0.0694,1.46,-0.033]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.0836,1.4281,-0.0401]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  center : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      center : new SFVec3f([-0.1949,1.1388,-0.062]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_r_radiocarpal"),
                                                                                                          center : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_1"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_1"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_1"),
                                                                                                                  center : new SFVec3f([-0.1899,0.8502,-0.0473]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_1"),
                                                                                                                      center : new SFVec3f([-0.1874,0.8256,0.0306]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_interphalangeal_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_interphalangeal_1"),
                                                                                                                          center : new SFVec3f([-0.1864,0.819,0.0506]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_2"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_2"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_2"),
                                                                                                                  center : new SFVec3f([-0.1961,0.8055,-0.0218]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_2"),
                                                                                                                      center : new SFVec3f([-0.1961,0.7846,-0.0218]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([-0.1954,0.7393,-0.0185]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_2"),
                                                                                                                              center : new SFVec3f([-0.1945,0.7169,-0.0173]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_3"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_3"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_3"),
                                                                                                                  center : new SFVec3f([-0.1972,0.806,-0.0468]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_3"),
                                                                                                                      center : new SFVec3f([-0.1972,0.7849,-0.0468]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([-0.195,0.7304,-0.0441]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_3"),
                                                                                                                              center : new SFVec3f([-0.1939,0.7042,-0.0432]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_4_5"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_4_5"),
                                                                                                              center : new SFVec3f([0,1,0]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_4"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8049,-0.0732]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_4"),
                                                                                                                      center : new SFVec3f([-0.1951,0.7845,-0.0732]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([-0.192,0.7318,-0.0716]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_4"),
                                                                                                                              center : new SFVec3f([-0.1908,0.7077,-0.0706]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_5"),
                                                                                                                  center : new SFVec3f([-0.1926,0.8096,-0.0975]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_5"),
                                                                                                                      center : new SFVec3f([-0.1926,0.7896,-0.0975]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([-0.1902,0.7483,-0.0963]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_5"),
                                                                                                                              center : new SFVec3f([-0.1908,0.754,-0.096]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocalcaneonavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_calcaneocuboid")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_transversetarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_talocalcaneonavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_cuneonavicular_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_cuneonavicular_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_cuneonavicular_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_calcaneocuboid")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_transversetarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl1")}),

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
                  USE : new SFString("hanim_vc4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_temporomandibular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_radiocarpal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_4_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_radiocarpal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_4_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_5")})])})])}))});
console.log(X3D0.toXMLNode());
