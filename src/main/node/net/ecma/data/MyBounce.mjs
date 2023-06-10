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
import { NavigationInfo } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { field } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("MyBounce.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("3 prismatic spheres")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Transform({
              DEF : new SFString("transform"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.7,0.7,0.7]),
                          specularColor : new SFColor([0.5,0.5,0.5])}))})),
                  geometry : new SFNode(
                    new Sphere({}))})])}),

            new Script({
              DEF : new SFString("Bounce2"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("velocity"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_fraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),
ecmascript:eval (0
			, function newBubble() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			, function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
				if (Math.abs(translation.x) > 10) {
					newBubble();
				} else if (Math.abs(translation.y) > 10) {
					newBubble();
				} else if (Math.abs(translation.z) > 10) {
					newBubble();
				} else {
					velocity = new SFVec3f(
						velocity.x + Math.random() * 0.2 - 0.1,
						velocity.y + Math.random() * 0.2 - 0.1,
						velocity.z + Math.random() * 0.2 - 0.1
					);
				}
			}

			, function initialize() {
			     newBubble();
			})}),

            new TimeSensor({
              DEF : new SFString("TourTime"),
              cycleInterval : new SFTime(0.15),
              loop : new SFBool(true)}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("Bounce2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Bounce2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("transform"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
