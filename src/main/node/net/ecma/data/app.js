'use strict';
import fs from 'fs';
import { * } from './x3d.js';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0")
      head : (new head({

        meta : (new meta({

          name : new SFString("John W"),
          content : new SFString("Carlson, I")}))
        meta : (new meta({

          name : new SFString("John A"),
          content : new SFString("Carlson, II")}))
        meta : (new meta({

          name : new SFString("John R"),
          content : new SFString("Carlson, III")}))}))
      scene : (new Scene({

        children : (new Group({

          bboxCenter : new SFVec3f([0,0,0]),
          bboxSize : new SFVec3f([-1,-1,-1]),
          visible : new SFBool(true)
          children : (new Shape({

            bboxCenter : new SFVec3f([0,0,0]),
            bboxSize : new SFVec3f([-1,-1,-1]),
            visible : new SFBool(true)
            appearance : (new Appearance({

              material : (new Material({

                diffuseColor : new SFColor([1,0,0])}))}))
            geometry : (new Box({

              size : new SFVec3f([2,2,2]),
              solid : new SFBool(true)}))}))}))
        children : (new Transform({

          bboxCenter : new SFVec3f([0,0,0]),
          bboxSize : new SFVec3f([-1,-1,-1]),
          rotation : new SFRotation([7,8,9,3.14]),
          scale : new SFVec3f([4,5,6]),
          translation : new SFVec3f([1,2,3]),
          visible : new SFBool(true)}))}))});
console.log(X3D0.toXMLNode());
