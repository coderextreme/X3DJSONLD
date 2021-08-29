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
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ComposedCubeMapTexture } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { ComposedShader } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ShaderPart } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          /*component name='EnvironmentalEffects' level='1'/*/
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
              name : new SFString("Shape"),
              level : new SFInt32(4)})),
          component : new SFNode(
            new component({
              name : new SFString("Grouping"),
              level : new SFInt32(3)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("bubbles.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/bubbles.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("not sure what this is")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              DEF : new SFString("Tour"),
              description : new SFString("Tour Views")}),

            new Viewpoint({
              position : new SFVec3f([0,0,4]),
              description : new SFString("sphere in road")}),

            new Background({
              backUrl : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"]),
              bottomUrl : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"]),
              frontUrl : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"]),
              leftUrl : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"]),
              rightUrl : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"]),
              topUrl : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])}),

            new Transform({
              DEF : new SFString("Rose01"),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Sphere({})),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("_01_-_Default"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.7,0.7,0.7]),
                          specularColor : new SFColor([0.5,0.5,0.5])})),
                      texture : new SFNode(
                        new ComposedCubeMapTexture({
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"])})),
                          topTexture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x_ite"),
                          language : new SFString("GLSL"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("bias"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("scale"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("power"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("2")}),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "VERTEX",
                              url : new MFString(["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"])}))})),
                      shaders : new SFNode(
                        new ComposedShader({
                          DEF : new SFString("x3dom"),
                          language : new SFString("GLSL"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("cube"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0")}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("chromaticDispertion"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.98 1 1.033")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("bias"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("scale"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("power"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("2")}),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "VERTEX",
                              url : new MFString(["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"])})]),
                          parts : new SFNode(
                            new ShaderPart({
                              type : "FRAGMENT",
                              url : new MFString(["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])}))}))}))})])}),

            new TimeSensor({
              DEF : new SFString("TourTime"),
              cycleInterval : new SFTime(5),
              loop : new SFBool(true)}),

            new PositionInterpolator({
              DEF : new SFString("TourPosition"),
              key : new MFFloat([0,1]),
              keyValue : new MFVec3f([0,0,10,0,0,-10])}),

            new OrientationInterpolator({
              DEF : new SFString("TourOrientation"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,1,0,0,0,1,0,3.1416])}),

            new Script({
              DEF : new SFString("RandomTourTime"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_cycle"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("lastKey"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0")}),

                new field({
                  type : field.TYPE_MFROTATION,
                  name : new SFString("orientations"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0")}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("positions"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("position_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFROTATION,
                  name : new SFString("set_orientation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_MFROTATION,
                  name : new SFString("orientation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),
ecmascript:eval (0
               , function set_cycle(value) {
	       	   try {
                        var ov = lastKey;
                        do {
                            lastKey = Math.round(Math.random()*(positions.length-1));
                        } while (lastKey === ov);
                        var vc = lastKey;

                        position_changed[0] = positions[ov];
                        position_changed[1] = positions[vc];

                        orientation_changed[0] = orientations[ov];
                        orientation_changed[1] = orientations[vc];

                        fraction_changed = 0;
		   } catch (e) {
		   	if (typeof console.log === ', function') {
				console.log(e);
			}
		   }
               })}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("RandomTourTime"),
              toField : new SFString("set_cycle")}),

            new ROUTE({
              fromNode : new SFString("RandomTourTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TourOrientation"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RandomTourTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RandomTourTime"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("TourOrientation"),
              toField : new SFString("set_keyValue")}),

            new ROUTE({
              fromNode : new SFString("RandomTourTime"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("set_keyValue")}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TourOrientation"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TourOrientation"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tour"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TourPosition"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tour"),
              toField : new SFString("set_position")})])}))});
console.log(X3D0.toXMLNode());
