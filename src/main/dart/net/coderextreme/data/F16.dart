// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('F16.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Murat ONDER, LTJG, Turkish Navy')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission.')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('13 July 2003')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 November 2015')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.fas.org/man/dod-101/sys/ac/f-16.htm')),

            meta(
              name_ : SFString('permission'),
              content_ : SFString('Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: \"Murat Onder\" <monder@nps.navy.mil> To: <Soji_Yamakawa@cmu.edu>; <PEB01130@nifty.ne.jp> Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&apos;m a MS student in Naval Postgraduate School. \' making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course \'l make the citation and put the reference links to your page in the meta files of x3d file. \' like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated.')),

            meta(
              name_ : SFString('drawing'),
              content_ : SFString('\"Drawing.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\"')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('\"FrontView.jpg\" \"FrontView2.jpg\" \"Missiles.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\"')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('F16, F-16, Fighting Falcon')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              DEF_ : SFString('F16Transform'),
              children_ : [
                Transform(
                  DEF_ : SFString('MainFrameTransform'),
                  scale_ : SFVec3f([SFDouble(3), SFDouble(3), SFDouble(3)]),
                  children_ : [
                    Shape(
                      DEF_ : SFString('Nose'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.25), SFDouble(0.25), SFDouble(0.25)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(24), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(24), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(25), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(29), SFInt32(28), SFInt32(-1), SFInt32(27), SFInt32(30), SFInt32(29), SFInt32(-1), SFInt32(27), SFInt32(31), SFInt32(30), SFInt32(-1), SFInt32(3), SFInt32(18), SFInt32(24), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(16), SFInt32(0), SFInt32(3), SFInt32(-1), SFInt32(4), SFInt32(0), SFInt32(16), SFInt32(-1), SFInt32(17), SFInt32(17), SFInt32(17), SFInt32(-1), SFInt32(18), SFInt32(18), SFInt32(18), SFInt32(-1), SFInt32(19), SFInt32(19), SFInt32(19), SFInt32(-1), SFInt32(20), SFInt32(20), SFInt32(20), SFInt32(-1), SFInt32(21), SFInt32(21), SFInt32(21), SFInt32(-1), SFInt32(3), SFInt32(14), SFInt32(16), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              DEF_ : SFString('coordinates'),
                              point_ : MFVec3f([SFVec3f([-0.32,0.36,-4.91]),SFVec3f([-0.38,0.43,-4.21]),SFVec3f([0,0.6,-4.2]),SFVec3f([0,0.5,-4.9]),SFVec3f([-0.5,0,-4.9]),SFVec3f([-0.6,0,-4.2]),SFVec3f([1,0,5.8]),SFVec3f([1,0,5.3]),SFVec3f([2.8,-0.4,6.3]),SFVec3f([2.8,-0.4,6.61]),SFVec3f([0.31,-0.36,-4.9]),SFVec3f([0.4,-0.35,-4.2]),SFVec3f([0,-0.4,-4.2]),SFVec3f([0,-0.4,-4.9]),SFVec3f([-0.31,-0.36,-4.9]),SFVec3f([-0.4,-0.35,-4.2]),SFVec3f([0.5,0,-4.9]),SFVec3f([0.6,0,-4.2]),SFVec3f([0.32,0.36,-4.91]),SFVec3f([0.38,0.43,-4.21]),SFVec3f([-1,0,5.8]),SFVec3f([-1,0,5.3]),SFVec3f([-2.8,-0.4,6.3]),SFVec3f([-2.8,-0.4,6.61]),SFVec3f([0,-0.1,-7]),SFVec3f([-0.31,-0.36,-4.9]),SFVec3f([-0.5,0,-4.9]),SFVec3f([0,-0.1,-7]),SFVec3f([0,-0.4,-4.9]),SFVec3f([0.31,-0.36,-4.9]),SFVec3f([0.5,0,-4.9]),SFVec3f([0.32,0.36,-4.91]),SFVec3f([-0.27,0.93,-3.51]),SFVec3f([0,1.1,-3.6]),SFVec3f([-0.33,0.5,-3.41]),SFVec3f([-0.34,0.9,-1.73]),SFVec3f([0,0.9,-1]),SFVec3f([0,1.1,-1.8]),SFVec3f([-0.38,0.64,-1.68]),SFVec3f([0.34,0.9,-1.73]),SFVec3f([0,0.9,-1]),SFVec3f([0.38,0.64,-1.68]),SFVec3f([0.34,0.9,-1.73]),SFVec3f([0.27,0.93,-3.51]),SFVec3f([0.33,0.5,-3.41]),SFVec3f([0,1.3,-2.8]),SFVec3f([0.45,1.02,-2.68]),SFVec3f([0.38,0.64,-1.68]),SFVec3f([0.53,0.5,-2.56]),SFVec3f([-0.53,0.5,-2.56]),SFVec3f([-0.45,1.02,-2.68]),SFVec3f([-0.53,0.75,0]),SFVec3f([-0.56,0.66,2.8]),SFVec3f([0,0.7,2.8]),SFVec3f([0,0.8,0]),SFVec3f([-1.1,0.3,0]),SFVec3f([-1,0.3,2.8]),SFVec3f([-0.37,0.57,4.9]),SFVec3f([0,0.59,4.9]),SFVec3f([-0.7,0.3,4.9]),SFVec3f([-0.7,0.3,4.9]),SFVec3f([-0.7,0,7]),SFVec3f([-0.5,0.49,7]),SFVec3f([-0.5,0.49,7]),SFVec3f([0,0.7,7]),SFVec3f([-1.4,0,0]),SFVec3f([-1.4,0,3.9]),SFVec3f([-1.4,0,3.9]),SFVec3f([-1,0,3.9]),SFVec3f([-1,0.3,2.8]),SFVec3f([-1,0.3,4.9]),SFVec3f([-0.59,0.65,-0.77]),SFVec3f([-0.8,0.3,-0.6]),SFVec3f([-1.4,0,-0.7]),SFVec3f([-1,-0.1,2.8]),SFVec3f([-0.7,-0.7,-2.5]),SFVec3f([-0.5,-0.9,-2.5]),SFVec3f([-0.5,-0.9,-0.6]),SFVec3f([-0.7,-0.7,-0.6]),SFVec3f([0,-1,-2.5]),SFVec3f([0,-1,-0.6]),SFVec3f([-0.72,-0.12,-2.5]),SFVec3f([-0.8,-0.3,-2.5]),SFVec3f([-0.8,-0.3,-0.6]),SFVec3f([-0.8,-0.3,-2.5]),SFVec3f([-0.8,-0.3,-0.6]),SFVec3f([-1.4,0,0]),SFVec3f([-1.4,0,-0.7]),SFVec3f([-0.7,-0.1,4.9]),SFVec3f([-1,-0.1,4.9]),SFVec3f([-0.5,-0.9,4.9]),SFVec3f([-0.7,-0.7,4.9]),SFVec3f([0,-1,4.9]),SFVec3f([-0.7,-0.1,4.9]),SFVec3f([-0.5,-0.5,7]),SFVec3f([-0.7,0,7]),SFVec3f([0,-0.7,7]),SFVec3f([-1,0,7.4]),SFVec3f([-2.8,-0.4,7.1]),SFVec3f([-2.57,-0.32,7.42]),SFVec3f([-4.9,0.1,4]),SFVec3f([-5.1,0.1,4]),SFVec3f([-5.1,-0.1,4]),SFVec3f([-4.9,-0.1,4]),SFVec3f([-5.1,0.1,1.6]),SFVec3f([-5.1,-0.1,1.6]),SFVec3f([-4.9,0.1,2.8]),SFVec3f([-4.9,-0.1,2.8]),SFVec3f([-0.58,-0.83,3.6]),SFVec3f([-0.72,-1.4,3.9]),SFVec3f([-0.69,-1.32,4.9]),SFVec3f([-0.58,-0.83,4.9]),SFVec3f([0.58,-0.83,3.6]),SFVec3f([0.72,-1.4,3.9]),SFVec3f([0.69,-1.32,4.9]),SFVec3f([0.58,-0.83,4.9]),SFVec3f([4.9,-0.1,2.8]),SFVec3f([5.1,-0.1,1.6]),SFVec3f([5.1,-0.1,4]),SFVec3f([4.9,-0.1,4]),SFVec3f([-0.8,0,-2.5]),SFVec3f([4.9,0.1,4]),SFVec3f([5.1,0.1,4]),SFVec3f([5.1,0.1,1.6]),SFVec3f([4.9,0.1,2.8]),SFVec3f([0.59,0.65,-0.77]),SFVec3f([0.8,0.3,-0.6]),SFVec3f([0.8,0,-2.5]),SFVec3f([-0.8,0,-2.5]),SFVec3f([0.8,-0.3,-0.6]),SFVec3f([0.72,-0.12,-2.5]),SFVec3f([0.8,0,-2.5]),SFVec3f([1,0,7.4]),SFVec3f([2.8,-0.4,7.1]),SFVec3f([2.57,-0.32,7.42]),SFVec3f([-0.7,0,7.4]),SFVec3f([0.5,-0.9,4.9]),SFVec3f([0.7,-0.7,4.9]),SFVec3f([0.5,-0.5,7]),SFVec3f([-4.9,0,2.8]),SFVec3f([-4.9,0,3.9]),SFVec3f([0.7,-0.1,4.9]),SFVec3f([0.7,0,7]),SFVec3f([1.4,0,0]),SFVec3f([4.9,0,2.8]),SFVec3f([4.9,0,3.9]),SFVec3f([1.4,0,3.9]),SFVec3f([1.4,0,-0.7]),SFVec3f([1.4,0,-0.7]),SFVec3f([0.7,-0.7,-0.6]),SFVec3f([0.8,-0.3,-0.6]),SFVec3f([0.5,-0.9,-0.6]),SFVec3f([1,-0.1,4.9]),SFVec3f([1,0.3,4.9]),SFVec3f([0.7,0,7.4]),SFVec3f([0.7,0.3,4.9]),SFVec3f([0.7,-0.1,4.9]),SFVec3f([0.56,0.66,2.8]),SFVec3f([0.53,0.75,0]),SFVec3f([1,0.3,2.8]),SFVec3f([1.1,0.3,0]),SFVec3f([0.37,0.57,4.9]),SFVec3f([0.7,0.3,4.9]),SFVec3f([0.5,0.49,7]),SFVec3f([0.7,0,7]),SFVec3f([0.5,0.49,7]),SFVec3f([1.4,0,3.9]),SFVec3f([1.4,0,0]),SFVec3f([1,0.3,2.8]),SFVec3f([1,0,3.9]),SFVec3f([1,-0.1,2.8]),SFVec3f([0.5,-0.9,-2.5]),SFVec3f([0.7,-0.7,-2.5]),SFVec3f([0.8,-0.3,-2.5]),SFVec3f([0.8,-0.3,-2.5]),SFVec3f([1,0.3,3.9]),SFVec3f([0.59,0.65,-0.77]),SFVec3f([0,0.7,2.8]),SFVec3f([0,1.4,4.5]),SFVec3f([0,0.59,4.9]),SFVec3f([0,3.5,6.8]),SFVec3f([0,3.5,8.1]),SFVec3f([0,1.4,7.3]),SFVec3f([0,0.7,7]),SFVec3f([0,0.7,7.3]),SFVec3f([-1,0.3,3.9]),SFVec3f([0,0.35,7.7]),SFVec3f([-0.25,0.24,7.7]),SFVec3f([-0.35,0,7.7]),SFVec3f([-0.25,-0.25,7.7]),SFVec3f([0,-0.35,7.7]),SFVec3f([0.25,-0.25,7.7]),SFVec3f([0.35,0,7.7]),SFVec3f([0.25,0.24,7.7]),SFVec3f([0,-0.2,-2.5]),SFVec3f([0.7,-0.7,-2.5]),SFVec3f([0.5,-0.9,-2.5]),SFVec3f([0,-1,-2.5]),SFVec3f([-0.5,-0.9,-2.5]),SFVec3f([-0.7,-0.7,-2.5]),SFVec3f([0,-0.2,-2.5]),SFVec3f([-0.72,-0.12,-2.5]),SFVec3f([0.72,-0.12,-2.5]),SFVec3f([0.25,0.24,7.7]),SFVec3f([0.35,0,7.7]),SFVec3f([-0.35,0,7.7]),SFVec3f([-0.25,0.24,7.7])])),
                          normal_ : 
                            Normal(
                              DEF_ : SFString('normalVector'),
                              vector_ : MFVec3f([SFVec3f([-0.68,0.714,-0.166]),SFVec3f([-0.689,0.721,-0.072]),SFVec3f([0,0.965,-0.26]),SFVec3f([0,0.985,-0.175]),SFVec3f([-0.99,-0.016,-0.138]),SFVec3f([-0.999,-0.022,-0.037]),SFVec3f([0.567,-0.819,-0.093]),SFVec3f([0.561,-0.828,0]),SFVec3f([0,-1,0]),SFVec3f([0,-0.997,-0.071]),SFVec3f([-0.567,-0.819,-0.093]),SFVec3f([-0.561,-0.828,0]),SFVec3f([0.99,-0.016,-0.138]),SFVec3f([0.999,-0.022,-0.037]),SFVec3f([0.68,0.714,-0.166]),SFVec3f([0.689,0.721,-0.072]),SFVec3f([-0.351,0.889,-0.294]),SFVec3f([-0.868,-0.459,-0.19]),SFVec3f([-0.13,-0.982,-0.14]),SFVec3f([0.13,-0.982,-0.14]),SFVec3f([0.868,-0.459,-0.19]),SFVec3f([0.872,0.431,-0.231]),SFVec3f([-0.834,0.445,-0.327]),SFVec3f([0,0.929,-0.369]),SFVec3f([-0.88,0.401,-0.256]),SFVec3f([-0.799,0.577,0.169]),SFVec3f([-0.58,0.798,0.164]),SFVec3f([0,0.998,0.065]),SFVec3f([-0.862,0.486,0.146]),SFVec3f([0.886,0.219,0.408]),SFVec3f([0.799,0.577,0.169]),SFVec3f([0.834,0.445,-0.327]),SFVec3f([0.88,0.401,-0.256]),SFVec3f([0,0.995,-0.096]),SFVec3f([0.842,0.534,-0.08]),SFVec3f([0.862,0.486,0.146]),SFVec3f([0.833,0.549,-0.073]),SFVec3f([-0.833,0.549,-0.073]),SFVec3f([-0.842,0.534,-0.08]),SFVec3f([-0.485,0.87,-0.089]),SFVec3f([-0.37,0.929,0]),SFVec3f([0,1,0]),SFVec3f([0,1,-0.01]),SFVec3f([-0.592,0.796,-0.125]),SFVec3f([-0.573,0.818,0.05]),SFVec3f([-0.37,0.929,-0.01]),SFVec3f([0,1,-0.025]),SFVec3f([-0.487,0.873,0.036]),SFVec3f([-0.923,0.381,0.05]),SFVec3f([-0.683,0.704,0.195]),SFVec3f([0,0.99,0.14]),SFVec3f([-0.707,0.707,0]),SFVec3f([-0.385,0.912,0.141]),SFVec3f([0,0.966,0.259]),SFVec3f([-0.563,0.826,-0.037]),SFVec3f([-0.661,0.738,-0.138]),SFVec3f([-0.521,0.846,-0.115]),SFVec3f([0,-0.996,0.09]),SFVec3f([-0.773,-0.436,-0.461]),SFVec3f([-0.42,-0.781,-0.463]),SFVec3f([-0.474,-0.881,0]),SFVec3f([-0.871,-0.492,0]),SFVec3f([0,-0.891,-0.455]),SFVec3f([-0.917,0.399,0]),SFVec3f([-0.881,0.074,-0.467]),SFVec3f([-0.902,-0.429,-0.039]),SFVec3f([-0.09,-0.995,0.05]),SFVec3f([-0.451,-0.892,0]),SFVec3f([-0.28,-0.959,0.04]),SFVec3f([-0.468,-0.878,0.097]),SFVec3f([-0.877,-0.474,0.085]),SFVec3f([0,-0.997,0.072]),SFVec3f([-0.693,-0.72,0.045]),SFVec3f([-0.79,-0.562,0.244]),SFVec3f([-0.968,0.003,0.25]),SFVec3f([0,-0.966,0.257]),SFVec3f([0,0,1]),SFVec3f([-1,0,0]),SFVec3f([0.987,0,-0.16]),SFVec3f([1,0,0]),SFVec3f([-0.831,-0.551,-0.08]),SFVec3f([0.563,0.826,-0.037]),SFVec3f([0.661,0.738,-0.138]),SFVec3f([0.998,-0.037,-0.049]),SFVec3f([-0.987,0,-0.16]),SFVec3f([-0.998,-0.037,-0.049]),SFVec3f([0.831,-0.551,-0.08]),SFVec3f([0,-0.999,0.04]),SFVec3f([0,0.993,0.12]),SFVec3f([0.468,-0.878,0.097]),SFVec3f([0.877,-0.474,0.085]),SFVec3f([0.79,-0.562,0.244]),SFVec3f([-0.419,-0.897,-0.14]),SFVec3f([0.693,-0.72,0.045]),SFVec3f([0.968,0.003,0.25]),SFVec3f([0.521,0.846,-0.115]),SFVec3f([0.419,-0.897,-0.14]),SFVec3f([0.871,-0.492,0]),SFVec3f([0.902,-0.429,-0.039]),SFVec3f([0.474,-0.881,0]),SFVec3f([0.37,0.929,0]),SFVec3f([0.485,0.87,-0.089]),SFVec3f([0.573,0.818,0.05]),SFVec3f([0.592,0.796,-0.125]),SFVec3f([0.37,0.929,-0.01]),SFVec3f([0.487,0.873,0.036]),SFVec3f([0.923,0.381,0.05]),SFVec3f([0.683,0.704,0.195]),SFVec3f([0.385,0.912,0.141]),SFVec3f([0.707,0.707,0]),SFVec3f([0.42,-0.781,-0.463]),SFVec3f([0.773,-0.436,-0.461]),SFVec3f([0.917,0.399,0]),SFVec3f([0.881,0.074,-0.467]),SFVec3f([0.09,-0.995,0.05]),SFVec3f([0.451,-0.892,0]),SFVec3f([0.28,-0.959,0.04]),SFVec3f([0.42,0.901,-0.11]),SFVec3f([0,0.666,0.746]),SFVec3f([-0.481,0.468,0.741]),SFVec3f([-0.674,0,0.738]),SFVec3f([-0.475,-0.475,0.741]),SFVec3f([0,-0.674,0.738]),SFVec3f([0.475,-0.475,0.741]),SFVec3f([0.674,0,0.738]),SFVec3f([0.481,0.468,0.741]),SFVec3f([0,0,-1]),SFVec3f([0,-0.893,-0.45]),SFVec3f([-0.901,-0.224,-0.372]),SFVec3f([0.901,-0.224,-0.372]),SFVec3f([0.841,0.34,0.421]),SFVec3f([-0.841,0.34,0.421])])))),

                    Shape(
                      DEF_ : SFString('Canopy'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.25), SFDouble(0.25), SFDouble(0.25)]),
                              transparency_ : 0.8)),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(2), SFInt32(32), SFInt32(33), SFInt32(-1), SFInt32(34), SFInt32(32), SFInt32(2), SFInt32(-1), SFInt32(35), SFInt32(36), SFInt32(37), SFInt32(-1), SFInt32(38), SFInt32(36), SFInt32(35), SFInt32(-1), SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(-1), SFInt32(37), SFInt32(36), SFInt32(42), SFInt32(-1), SFInt32(2), SFInt32(43), SFInt32(44), SFInt32(-1), SFInt32(33), SFInt32(43), SFInt32(2), SFInt32(-1), SFInt32(45), SFInt32(37), SFInt32(42), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(42), SFInt32(47), SFInt32(48), SFInt32(-1), SFInt32(33), SFInt32(45), SFInt32(46), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(46), SFInt32(48), SFInt32(44), SFInt32(-1), SFInt32(34), SFInt32(49), SFInt32(50), SFInt32(32), SFInt32(-1), SFInt32(32), SFInt32(50), SFInt32(45), SFInt32(33), SFInt32(-1), SFInt32(49), SFInt32(38), SFInt32(35), SFInt32(50), SFInt32(-1), SFInt32(50), SFInt32(35), SFInt32(37), SFInt32(45), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(2), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(22), SFInt32(2), SFInt32(-1), SFInt32(25), SFInt32(26), SFInt32(27), SFInt32(-1), SFInt32(28), SFInt32(26), SFInt32(25), SFInt32(-1), SFInt32(29), SFInt32(29), SFInt32(29), SFInt32(-1), SFInt32(27), SFInt32(26), SFInt32(30), SFInt32(-1), SFInt32(2), SFInt32(31), SFInt32(32), SFInt32(-1), SFInt32(23), SFInt32(31), SFInt32(2), SFInt32(-1), SFInt32(33), SFInt32(27), SFInt32(30), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(30), SFInt32(35), SFInt32(36), SFInt32(-1), SFInt32(23), SFInt32(33), SFInt32(34), SFInt32(31), SFInt32(-1), SFInt32(31), SFInt32(34), SFInt32(36), SFInt32(32), SFInt32(-1), SFInt32(24), SFInt32(37), SFInt32(38), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(38), SFInt32(33), SFInt32(23), SFInt32(-1), SFInt32(37), SFInt32(28), SFInt32(25), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(25), SFInt32(27), SFInt32(33), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('MainBodyAndWingEdges'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.1796), SFDouble(0.1914), SFDouble(0.2382)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(51), SFInt32(52), SFInt32(53), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(56), SFInt32(52), SFInt32(51), SFInt32(-1), SFInt32(52), SFInt32(57), SFInt32(58), SFInt32(53), SFInt32(-1), SFInt32(56), SFInt32(59), SFInt32(57), SFInt32(52), SFInt32(-1), SFInt32(60), SFInt32(61), SFInt32(62), SFInt32(-1), SFInt32(57), SFInt32(59), SFInt32(63), SFInt32(-1), SFInt32(57), SFInt32(63), SFInt32(64), SFInt32(-1), SFInt32(58), SFInt32(57), SFInt32(64), SFInt32(-1), SFInt32(56), SFInt32(55), SFInt32(65), SFInt32(66), SFInt32(-1), SFInt32(67), SFInt32(68), SFInt32(69), SFInt32(-1), SFInt32(69), SFInt32(70), SFInt32(60), SFInt32(-1), SFInt32(71), SFInt32(54), SFInt32(36), SFInt32(-1), SFInt32(51), SFInt32(54), SFInt32(71), SFInt32(-1), SFInt32(72), SFInt32(51), SFInt32(71), SFInt32(-1), SFInt32(55), SFInt32(51), SFInt32(72), SFInt32(-1), SFInt32(72), SFInt32(73), SFInt32(55), SFInt32(-1), SFInt32(65), SFInt32(55), SFInt32(73), SFInt32(-1), SFInt32(68), SFInt32(67), SFInt32(74), SFInt32(-1), SFInt32(75), SFInt32(76), SFInt32(77), SFInt32(78), SFInt32(-1), SFInt32(76), SFInt32(79), SFInt32(80), SFInt32(77), SFInt32(-1), SFInt32(81), SFInt32(82), SFInt32(83), SFInt32(-1), SFInt32(84), SFInt32(75), SFInt32(78), SFInt32(85), SFInt32(-1), SFInt32(83), SFInt32(74), SFInt32(67), SFInt32(-1), SFInt32(67), SFInt32(86), SFInt32(87), SFInt32(83), SFInt32(-1), SFInt32(74), SFInt32(88), SFInt32(89), SFInt32(-1), SFInt32(88), SFInt32(74), SFInt32(83), SFInt32(-1), SFInt32(78), SFInt32(77), SFInt32(90), SFInt32(91), SFInt32(-1), SFInt32(77), SFInt32(80), SFInt32(92), SFInt32(90), SFInt32(-1), SFInt32(85), SFInt32(91), SFInt32(93), SFInt32(-1), SFInt32(85), SFInt32(78), SFInt32(91), SFInt32(-1), SFInt32(94), SFInt32(95), SFInt32(93), SFInt32(-1), SFInt32(94), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(91), SFInt32(96), SFInt32(94), SFInt32(-1), SFInt32(96), SFInt32(91), SFInt32(90), SFInt32(-1), SFInt32(90), SFInt32(92), SFInt32(96), SFInt32(-1), SFInt32(100), SFInt32(101), SFInt32(102), SFInt32(103), SFInt32(-1), SFInt32(101), SFInt32(104), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(104), SFInt32(106), SFInt32(107), SFInt32(105), SFInt32(-1), SFInt32(106), SFInt32(100), SFInt32(103), SFInt32(107), SFInt32(-1), SFInt32(106), SFInt32(104), SFInt32(101), SFInt32(100), SFInt32(-1), SFInt32(103), SFInt32(102), SFInt32(105), SFInt32(107), SFInt32(-1), SFInt32(116), SFInt32(117), SFInt32(118), SFInt32(119), SFInt32(-1), SFInt32(120), SFInt32(81), SFInt32(83), SFInt32(-1), SFInt32(121), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(-1), SFInt32(116), SFInt32(119), SFInt32(121), SFInt32(124), SFInt32(-1), SFInt32(48), SFInt32(125), SFInt32(126), SFInt32(127), SFInt32(-1), SFInt32(117), SFInt32(116), SFInt32(124), SFInt32(123), SFInt32(-1), SFInt32(128), SFInt32(72), SFInt32(71), SFInt32(49), SFInt32(-1), SFInt32(118), SFInt32(117), SFInt32(123), SFInt32(122), SFInt32(-1), SFInt32(119), SFInt32(118), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(129), SFInt32(130), SFInt32(131), SFInt32(-1), SFInt32(89), SFInt32(88), SFInt32(135), SFInt32(97), SFInt32(-1), SFInt32(60), SFInt32(70), SFInt32(97), SFInt32(135), SFInt32(-1), SFInt32(70), SFInt32(89), SFInt32(97), SFInt32(-1), SFInt32(96), SFInt32(92), SFInt32(136), SFInt32(-1), SFInt32(136), SFInt32(137), SFInt32(96), SFInt32(-1), SFInt32(138), SFInt32(96), SFInt32(137), SFInt32(-1), SFInt32(120), SFInt32(83), SFInt32(87), SFInt32(-1), SFInt32(128), SFInt32(73), SFInt32(72), SFInt32(-1), SFInt32(137), SFInt32(141), SFInt32(138), SFInt32(-1), SFInt32(141), SFInt32(142), SFInt32(138), SFInt32(-1), SFInt32(126), SFInt32(147), SFInt32(127), SFInt32(-1), SFInt32(148), SFInt32(129), SFInt32(131), SFInt32(-1), SFInt32(137), SFInt32(149), SFInt32(150), SFInt32(-1), SFInt32(141), SFInt32(137), SFInt32(150), SFInt32(-1), SFInt32(136), SFInt32(92), SFInt32(80), SFInt32(151), SFInt32(-1), SFInt32(137), SFInt32(136), SFInt32(151), SFInt32(149), SFInt32(-1), SFInt32(132), SFInt32(152), SFInt32(153), SFInt32(-1), SFInt32(154), SFInt32(132), SFInt32(153), SFInt32(155), SFInt32(-1), SFInt32(132), SFInt32(154), SFInt32(156), SFInt32(152), SFInt32(-1), SFInt32(54), SFInt32(53), SFInt32(157), SFInt32(158), SFInt32(-1), SFInt32(158), SFInt32(157), SFInt32(159), SFInt32(160), SFInt32(-1), SFInt32(53), SFInt32(58), SFInt32(161), SFInt32(157), SFInt32(-1), SFInt32(157), SFInt32(161), SFInt32(162), SFInt32(159), SFInt32(-1), SFInt32(163), SFInt32(164), SFInt32(155), SFInt32(-1), SFInt32(165), SFInt32(162), SFInt32(161), SFInt32(-1), SFInt32(64), SFInt32(165), SFInt32(161), SFInt32(-1), SFInt32(64), SFInt32(161), SFInt32(58), SFInt32(-1), SFInt32(166), SFInt32(167), SFInt32(160), SFInt32(159), SFInt32(-1), SFInt32(168), SFInt32(169), SFInt32(146), SFInt32(-1), SFInt32(155), SFInt32(153), SFInt32(168), SFInt32(-1), SFInt32(36), SFInt32(54), SFInt32(125), SFInt32(-1), SFInt32(125), SFInt32(54), SFInt32(158), SFInt32(-1), SFInt32(125), SFInt32(158), SFInt32(126), SFInt32(-1), SFInt32(126), SFInt32(158), SFInt32(160), SFInt32(-1), SFInt32(160), SFInt32(147), SFInt32(126), SFInt32(-1), SFInt32(147), SFInt32(160), SFInt32(167), SFInt32(-1), SFInt32(170), SFInt32(146), SFInt32(169), SFInt32(-1), SFInt32(149), SFInt32(151), SFInt32(171), SFInt32(172), SFInt32(-1), SFInt32(151), SFInt32(80), SFInt32(79), SFInt32(171), SFInt32(-1), SFInt32(129), SFInt32(173), SFInt32(130), SFInt32(-1), SFInt32(150), SFInt32(149), SFInt32(172), SFInt32(174), SFInt32(-1), SFInt32(146), SFInt32(170), SFInt32(129), SFInt32(-1), SFInt32(129), SFInt32(148), SFInt32(143), SFInt32(146), SFInt32(-1), SFInt32(152), SFInt32(156), SFInt32(170), SFInt32(-1), SFInt32(129), SFInt32(170), SFInt32(156), SFInt32(-1), SFInt32(156), SFInt32(154), SFInt32(164), SFInt32(-1), SFInt32(154), SFInt32(155), SFInt32(164), SFInt32(-1), SFInt32(168), SFInt32(175), SFInt32(169), SFInt32(-1), SFInt32(175), SFInt32(153), SFInt32(152), SFInt32(169), SFInt32(-1), SFInt32(152), SFInt32(170), SFInt32(169), SFInt32(-1), SFInt32(48), SFInt32(47), SFInt32(125), SFInt32(-1), SFInt32(41), SFInt32(40), SFInt32(176), SFInt32(-1), SFInt32(71), SFInt32(38), SFInt32(49), SFInt32(-1), SFInt32(71), SFInt32(36), SFInt32(38), SFInt32(-1), SFInt32(61), SFInt32(135), SFInt32(88), SFInt32(-1), SFInt32(61), SFInt32(60), SFInt32(135), SFInt32(-1), SFInt32(68), SFInt32(185), SFInt32(69), SFInt32(-1), SFInt32(68), SFInt32(74), SFInt32(89), SFInt32(-1), SFInt32(68), SFInt32(89), SFInt32(70), SFInt32(185), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(39), SFInt32(40), SFInt32(41), SFInt32(42), SFInt32(-1), SFInt32(43), SFInt32(44), SFInt32(40), SFInt32(39), SFInt32(-1), SFInt32(40), SFInt32(45), SFInt32(46), SFInt32(41), SFInt32(-1), SFInt32(44), SFInt32(47), SFInt32(45), SFInt32(40), SFInt32(-1), SFInt32(48), SFInt32(48), SFInt32(48), SFInt32(-1), SFInt32(45), SFInt32(47), SFInt32(49), SFInt32(-1), SFInt32(45), SFInt32(49), SFInt32(50), SFInt32(-1), SFInt32(46), SFInt32(45), SFInt32(50), SFInt32(-1), SFInt32(44), SFInt32(43), SFInt32(51), SFInt32(52), SFInt32(-1), SFInt32(53), SFInt32(53), SFInt32(53), SFInt32(-1), SFInt32(41), SFInt32(41), SFInt32(41), SFInt32(-1), SFInt32(54), SFInt32(42), SFInt32(26), SFInt32(-1), SFInt32(39), SFInt32(42), SFInt32(54), SFInt32(-1), SFInt32(55), SFInt32(39), SFInt32(54), SFInt32(-1), SFInt32(43), SFInt32(39), SFInt32(55), SFInt32(-1), SFInt32(55), SFInt32(56), SFInt32(43), SFInt32(-1), SFInt32(51), SFInt32(43), SFInt32(56), SFInt32(-1), SFInt32(57), SFInt32(57), SFInt32(57), SFInt32(-1), SFInt32(58), SFInt32(59), SFInt32(60), SFInt32(61), SFInt32(-1), SFInt32(59), SFInt32(62), SFInt32(8), SFInt32(60), SFInt32(-1), SFInt32(63), SFInt32(63), SFInt32(63), SFInt32(-1), SFInt32(64), SFInt32(58), SFInt32(61), SFInt32(65), SFInt32(-1), SFInt32(66), SFInt32(66), SFInt32(66), SFInt32(-1), SFInt32(67), SFInt32(67), SFInt32(67), SFInt32(67), SFInt32(-1), SFInt32(8), SFInt32(8), SFInt32(8), SFInt32(-1), SFInt32(68), SFInt32(68), SFInt32(68), SFInt32(-1), SFInt32(61), SFInt32(60), SFInt32(69), SFInt32(70), SFInt32(-1), SFInt32(60), SFInt32(8), SFInt32(71), SFInt32(69), SFInt32(-1), SFInt32(65), SFInt32(70), SFInt32(72), SFInt32(-1), SFInt32(65), SFInt32(61), SFInt32(70), SFInt32(-1), SFInt32(73), SFInt32(74), SFInt32(72), SFInt32(-1), SFInt32(73), SFInt32(72), SFInt32(70), SFInt32(-1), SFInt32(70), SFInt32(75), SFInt32(73), SFInt32(-1), SFInt32(75), SFInt32(70), SFInt32(69), SFInt32(-1), SFInt32(69), SFInt32(71), SFInt32(75), SFInt32(-1), SFInt32(76), SFInt32(76), SFInt32(76), SFInt32(76), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(78), SFInt32(78), SFInt32(78), SFInt32(78), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(41), SFInt32(41), SFInt32(41), SFInt32(41), SFInt32(-1), SFInt32(8), SFInt32(8), SFInt32(8), SFInt32(8), SFInt32(-1), SFInt32(8), SFInt32(8), SFInt32(8), SFInt32(8), SFInt32(-1), SFInt32(80), SFInt32(80), SFInt32(80), SFInt32(-1), SFInt32(41), SFInt32(41), SFInt32(41), SFInt32(41), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(36), SFInt32(81), SFInt32(82), SFInt32(83), SFInt32(-1), SFInt32(84), SFInt32(84), SFInt32(84), SFInt32(84), SFInt32(-1), SFInt32(85), SFInt32(55), SFInt32(54), SFInt32(37), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(76), SFInt32(76), SFInt32(76), SFInt32(76), SFInt32(-1), SFInt32(86), SFInt32(86), SFInt32(86), SFInt32(-1), SFInt32(87), SFInt32(87), SFInt32(87), SFInt32(87), SFInt32(-1), SFInt32(88), SFInt32(88), SFInt32(88), SFInt32(88), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(75), SFInt32(71), SFInt32(89), SFInt32(-1), SFInt32(89), SFInt32(90), SFInt32(75), SFInt32(-1), SFInt32(91), SFInt32(75), SFInt32(90), SFInt32(-1), SFInt32(92), SFInt32(92), SFInt32(92), SFInt32(-1), SFInt32(85), SFInt32(56), SFInt32(55), SFInt32(-1), SFInt32(90), SFInt32(93), SFInt32(91), SFInt32(-1), SFInt32(93), SFInt32(94), SFInt32(91), SFInt32(-1), SFInt32(82), SFInt32(95), SFInt32(83), SFInt32(-1), SFInt32(96), SFInt32(96), SFInt32(96), SFInt32(-1), SFInt32(90), SFInt32(97), SFInt32(98), SFInt32(-1), SFInt32(93), SFInt32(90), SFInt32(98), SFInt32(-1), SFInt32(89), SFInt32(71), SFInt32(8), SFInt32(99), SFInt32(-1), SFInt32(90), SFInt32(89), SFInt32(99), SFInt32(97), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(88), SFInt32(88), SFInt32(88), SFInt32(88), SFInt32(-1), SFInt32(87), SFInt32(87), SFInt32(87), SFInt32(87), SFInt32(-1), SFInt32(42), SFInt32(41), SFInt32(100), SFInt32(101), SFInt32(-1), SFInt32(101), SFInt32(100), SFInt32(102), SFInt32(103), SFInt32(-1), SFInt32(41), SFInt32(46), SFInt32(104), SFInt32(100), SFInt32(-1), SFInt32(100), SFInt32(104), SFInt32(105), SFInt32(102), SFInt32(-1), SFInt32(106), SFInt32(106), SFInt32(106), SFInt32(-1), SFInt32(107), SFInt32(105), SFInt32(104), SFInt32(-1), SFInt32(50), SFInt32(107), SFInt32(104), SFInt32(-1), SFInt32(50), SFInt32(104), SFInt32(46), SFInt32(-1), SFInt32(108), SFInt32(109), SFInt32(103), SFInt32(102), SFInt32(-1), SFInt32(53), SFInt32(53), SFInt32(53), SFInt32(-1), SFInt32(41), SFInt32(41), SFInt32(41), SFInt32(-1), SFInt32(26), SFInt32(42), SFInt32(81), SFInt32(-1), SFInt32(81), SFInt32(42), SFInt32(101), SFInt32(-1), SFInt32(81), SFInt32(101), SFInt32(82), SFInt32(-1), SFInt32(82), SFInt32(101), SFInt32(103), SFInt32(-1), SFInt32(103), SFInt32(95), SFInt32(82), SFInt32(-1), SFInt32(95), SFInt32(103), SFInt32(109), SFInt32(-1), SFInt32(57), SFInt32(57), SFInt32(57), SFInt32(-1), SFInt32(97), SFInt32(99), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(99), SFInt32(8), SFInt32(62), SFInt32(110), SFInt32(-1), SFInt32(112), SFInt32(112), SFInt32(112), SFInt32(-1), SFInt32(98), SFInt32(97), SFInt32(111), SFInt32(113), SFInt32(-1), SFInt32(114), SFInt32(114), SFInt32(114), SFInt32(-1), SFInt32(115), SFInt32(115), SFInt32(115), SFInt32(115), SFInt32(-1), SFInt32(8), SFInt32(8), SFInt32(8), SFInt32(-1), SFInt32(116), SFInt32(116), SFInt32(116), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(36), SFInt32(35), SFInt32(81), SFInt32(-1), SFInt32(117), SFInt32(117), SFInt32(117), SFInt32(-1), SFInt32(54), SFInt32(28), SFInt32(37), SFInt32(-1), SFInt32(54), SFInt32(26), SFInt32(28), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(79), SFInt32(79), SFInt32(79), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(77), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('ExhaustExitFlatPanel'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(186), SFInt32(187), SFInt32(188), SFInt32(189), SFInt32(190), SFInt32(-1), SFInt32(190), SFInt32(191), SFInt32(192), SFInt32(193), SFInt32(186), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(118), SFInt32(119), SFInt32(120), SFInt32(121), SFInt32(122), SFInt32(-1), SFInt32(122), SFInt32(123), SFInt32(124), SFInt32(125), SFInt32(118), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('ExhaustEntranceFrontBottomPart'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.2304), SFDouble(0.2304), SFDouble(0.2304)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(194), SFInt32(130), SFInt32(173), SFInt32(195), SFInt32(196), SFInt32(197), SFInt32(-1), SFInt32(197), SFInt32(198), SFInt32(199), SFInt32(82), SFInt32(81), SFInt32(194), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(-1), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(126), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('ThirdPartFromNoseUnderCanopy'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.6), SFDouble(0.6), SFDouble(0.6)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(12), SFInt32(200), SFInt32(201), SFInt32(15), SFInt32(-1), SFInt32(19), SFInt32(48), SFInt32(127), SFInt32(17), SFInt32(-1), SFInt32(15), SFInt32(201), SFInt32(128), SFInt32(5), SFInt32(-1), SFInt32(17), SFInt32(127), SFInt32(202), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(202), SFInt32(200), SFInt32(12), SFInt32(-1), SFInt32(5), SFInt32(128), SFInt32(49), SFInt32(1), SFInt32(-1), SFInt32(48), SFInt32(19), SFInt32(44), SFInt32(-1), SFInt32(19), SFInt32(2), SFInt32(44), SFInt32(-1), SFInt32(34), SFInt32(1), SFInt32(49), SFInt32(-1), SFInt32(34), SFInt32(2), SFInt32(1), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(8), SFInt32(127), SFInt32(128), SFInt32(11), SFInt32(-1), SFInt32(15), SFInt32(36), SFInt32(83), SFInt32(13), SFInt32(-1), SFInt32(11), SFInt32(128), SFInt32(85), SFInt32(5), SFInt32(-1), SFInt32(13), SFInt32(83), SFInt32(129), SFInt32(7), SFInt32(-1), SFInt32(7), SFInt32(129), SFInt32(127), SFInt32(8), SFInt32(-1), SFInt32(5), SFInt32(85), SFInt32(37), SFInt32(1), SFInt32(-1), SFInt32(36), SFInt32(15), SFInt32(32), SFInt32(-1), SFInt32(15), SFInt32(2), SFInt32(32), SFInt32(-1), SFInt32(24), SFInt32(1), SFInt32(37), SFInt32(-1), SFInt32(24), SFInt32(2), SFInt32(1), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('RearExhaustExitPartLastPartOfMainBody'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.37), SFDouble(0.37), SFDouble(0.37)]),
                              shininess_ : 0.5)),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(64), SFInt32(186), SFInt32(193), SFInt32(165), SFInt32(-1), SFInt32(203), SFInt32(204), SFInt32(164), SFInt32(163), SFInt32(-1), SFInt32(192), SFInt32(191), SFInt32(138), SFInt32(142), SFInt32(-1), SFInt32(191), SFInt32(190), SFInt32(96), SFInt32(138), SFInt32(-1), SFInt32(94), SFInt32(96), SFInt32(190), SFInt32(189), SFInt32(-1), SFInt32(95), SFInt32(94), SFInt32(189), SFInt32(188), SFInt32(-1), SFInt32(63), SFInt32(187), SFInt32(186), SFInt32(64), SFInt32(-1), SFInt32(62), SFInt32(61), SFInt32(205), SFInt32(206), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(50), SFInt32(118), SFInt32(125), SFInt32(107), SFInt32(-1), SFInt32(130), SFInt32(130), SFInt32(130), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(123), SFInt32(91), SFInt32(94), SFInt32(-1), SFInt32(123), SFInt32(122), SFInt32(75), SFInt32(91), SFInt32(-1), SFInt32(73), SFInt32(75), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(74), SFInt32(73), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(49), SFInt32(119), SFInt32(118), SFInt32(50), SFInt32(-1), SFInt32(131), SFInt32(131), SFInt32(131), SFInt32(131), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('WingsAndTail'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              emissiveColor_ : SFColor([SFDouble(0.1796), SFDouble(0.1914), SFDouble(0.2382)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          colorPerVertex_ : false,
                          coordIndex_ : MFInt32([SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(20), SFInt32(21), SFInt32(22), SFInt32(23), SFInt32(-1), SFInt32(23), SFInt32(22), SFInt32(21), SFInt32(20), SFInt32(-1), SFInt32(97), SFInt32(20), SFInt32(23), SFInt32(98), SFInt32(99), SFInt32(-1), SFInt32(99), SFInt32(98), SFInt32(23), SFInt32(20), SFInt32(97), SFInt32(-1), SFInt32(108), SFInt32(109), SFInt32(110), SFInt32(111), SFInt32(-1), SFInt32(111), SFInt32(110), SFInt32(109), SFInt32(108), SFInt32(-1), SFInt32(112), SFInt32(113), SFInt32(114), SFInt32(115), SFInt32(-1), SFInt32(115), SFInt32(114), SFInt32(113), SFInt32(112), SFInt32(-1), SFInt32(132), SFInt32(6), SFInt32(9), SFInt32(133), SFInt32(134), SFInt32(-1), SFInt32(134), SFInt32(133), SFInt32(9), SFInt32(6), SFInt32(132), SFInt32(-1), SFInt32(86), SFInt32(139), SFInt32(140), SFInt32(67), SFInt32(-1), SFInt32(67), SFInt32(140), SFInt32(139), SFInt32(86), SFInt32(-1), SFInt32(143), SFInt32(144), SFInt32(145), SFInt32(146), SFInt32(-1), SFInt32(146), SFInt32(145), SFInt32(144), SFInt32(143), SFInt32(-1), SFInt32(177), SFInt32(178), SFInt32(179), SFInt32(-1), SFInt32(179), SFInt32(178), SFInt32(177), SFInt32(-1), SFInt32(178), SFInt32(180), SFInt32(181), SFInt32(182), SFInt32(183), SFInt32(179), SFInt32(-1), SFInt32(179), SFInt32(183), SFInt32(182), SFInt32(181), SFInt32(180), SFInt32(178), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(183), SFInt32(-1), SFInt32(183), SFInt32(184), SFInt32(182), SFInt32(-1), SFInt32(177), SFInt32(178), SFInt32(179), SFInt32(-1), SFInt32(179), SFInt32(178), SFInt32(177), SFInt32(-1), SFInt32(178), SFInt32(180), SFInt32(181), SFInt32(182), SFInt32(183), SFInt32(179), SFInt32(-1), SFInt32(179), SFInt32(183), SFInt32(182), SFInt32(181), SFInt32(180), SFInt32(178), SFInt32(-1), SFInt32(182), SFInt32(184), SFInt32(183), SFInt32(-1), SFInt32(183), SFInt32(184), SFInt32(182), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(50), SFInt32(118), SFInt32(125), SFInt32(107), SFInt32(-1), SFInt32(130), SFInt32(130), SFInt32(130), SFInt32(130), SFInt32(-1), SFInt32(124), SFInt32(123), SFInt32(91), SFInt32(94), SFInt32(-1), SFInt32(123), SFInt32(122), SFInt32(75), SFInt32(91), SFInt32(-1), SFInt32(73), SFInt32(75), SFInt32(122), SFInt32(121), SFInt32(-1), SFInt32(74), SFInt32(73), SFInt32(121), SFInt32(120), SFInt32(-1), SFInt32(49), SFInt32(119), SFInt32(118), SFInt32(50), SFInt32(-1), SFInt32(131), SFInt32(131), SFInt32(131), SFInt32(131), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector')))),

                    Shape(
                      DEF_ : SFString('SecondPartAfterNose'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.6), SFDouble(0.6), SFDouble(0.6)]))),
                      geometry_ : 
                        IndexedFaceSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(12), SFInt32(13), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(13), SFInt32(12), SFInt32(15), SFInt32(14), SFInt32(-1), SFInt32(16), SFInt32(17), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(18), SFInt32(19), SFInt32(17), SFInt32(16), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(19), SFInt32(18), SFInt32(-1)]),
                          creaseAngle_ : 0.5,
                          normalIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(1), SFInt32(0), SFInt32(-1), SFInt32(6), SFInt32(7), SFInt32(8), SFInt32(9), SFInt32(-1), SFInt32(10), SFInt32(11), SFInt32(5), SFInt32(4), SFInt32(-1), SFInt32(9), SFInt32(8), SFInt32(11), SFInt32(10), SFInt32(-1), SFInt32(12), SFInt32(13), SFInt32(7), SFInt32(6), SFInt32(-1), SFInt32(14), SFInt32(15), SFInt32(13), SFInt32(12), SFInt32(-1), SFInt32(3), SFInt32(2), SFInt32(15), SFInt32(14), SFInt32(-1)]),
                          solid_ : false,
                          coord_ : 
                            Coordinate(
                              USE_ : SFString('coordinates')),
                          normal_ : 
                            Normal(
                              USE_ : SFString('normalVector'))))]),

                Transform(
                  DEF_ : SFString('CockpitTransform'),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.1)]),
                  scale_ : SFVec3f([SFDouble(0.045), SFDouble(0.045), SFDouble(0.045)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(-10)]),
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("Cockpit.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.x3d"), SFString("Cockpit.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.wrl")]))]),

                Transform(
                  DEF_ : SFString('SeatTransform'),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(-0.1)]),
                  scale_ : SFVec3f([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-8.3)]),
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("Seat.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.x3d"), SFString("Seat.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.wrl")]))]),

                Transform(
                  DEF_ : SFString('FrontWheelTransform'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(2.5), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.92)]),
                  translation_ : SFVec3f([SFDouble(0.7), SFDouble(-5.2), SFDouble(-6.5)]),
                  /*Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel)*/
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("FrontWheel.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.x3d"), SFString("FrontWheel.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.wrl")]))]),

                Transform(
                  DEF_ : SFString('RearLeftWheelTransform'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(2.5), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(1), SFDouble(1.92)]),
                  translation_ : SFVec3f([SFDouble(-2.95), SFDouble(-5), SFDouble(7)]),
                  /*Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)*/
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("RearLeftWheel.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.x3d"), SFString("RearLeftWheel.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.wrl")]))]),

                Transform(
                  DEF_ : SFString('RearRightWheelTransform'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(2.5), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(-1), SFDouble(1.92)]),
                  translation_ : SFVec3f([SFDouble(2.95), SFDouble(-5), SFDouble(7)]),
                  /*Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)*/
                  children_ : [
                    Inline(
                      url_ : MFString([SFString("RearRightWheel.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.x3d"), SFString("RearRightWheel.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.wrl")]))]),

                Transform(
                  DEF_ : SFString('CockpitButtonsTransform'),
                  children_ : [
                    Transform(
                      DEF_ : SFString('UpButtonTransform'),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      scale_ : SFVec3f([SFDouble(0.008), SFDouble(0.008), SFDouble(0.008)]),
                      translation_ : SFVec3f([SFDouble(-0.95), SFDouble(1.05), SFDouble(-10)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Cylinder(
                              height_ : 1,
                              radius_ : 4),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                                  shininess_ : 0.8))),

                        TouchSensor(
                          DEF_ : SFString('TouchSensorUp'),
                          description_ : SFString('click for gears up'))]),

                    Transform(
                      DEF_ : SFString('DownButtonTransform'),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      scale_ : SFVec3f([SFDouble(0.008), SFDouble(0.008), SFDouble(0.008)]),
                      translation_ : SFVec3f([SFDouble(-0.83), SFDouble(1.05), SFDouble(-10)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Cylinder(
                              height_ : 1,
                              radius_ : 4),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                                  shininess_ : 0.8))),

                        TouchSensor(
                          DEF_ : SFString('TouchSensorDown'),
                          description_ : SFString('click for gears down'))]),

                    Transform(
                      DEF_ : SFString('GearUpTextTransform'),
                      scale_ : SFVec3f([SFDouble(0.06), SFDouble(0.06), SFDouble(0.06)]),
                      translation_ : SFVec3f([SFDouble(-0.65), SFDouble(1.55), SFDouble(-10)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("RED Button"), SFString("Gear Up")])),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),

                    Transform(
                      DEF_ : SFString('GearDownTextTransform'),
                      scale_ : SFVec3f([SFDouble(0.06), SFDouble(0.06), SFDouble(0.06)]),
                      translation_ : SFVec3f([SFDouble(-0.65), SFDouble(1.35), SFDouble(-10)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              length_ : MFFloat([SFFloat(5.5)]),
                              string_ : MFString([SFString("YELLOW Button"), SFString("Gear Down")])),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]))))]),

                    Transform(
                      DEF_ : SFString('FireButtonTransform'),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      scale_ : SFVec3f([SFDouble(0.008), SFDouble(0.008), SFDouble(0.008)]),
                      translation_ : SFVec3f([SFDouble(0.52), SFDouble(1.6), SFDouble(-10)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Cylinder(
                              height_ : 1,
                              radius_ : 4),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.75), SFDouble(0.18)]),
                                  shininess_ : 0.8))),

                        TouchSensor(
                          DEF_ : SFString('FireSensor'),
                          description_ : SFString('click to fire'))]),

                    Transform(
                      DEF_ : SFString('FireTextTransform'),
                      scale_ : SFVec3f([SFDouble(0.06), SFDouble(0.06), SFDouble(0.06)]),
                      translation_ : SFVec3f([SFDouble(0.36), SFDouble(1.5), SFDouble(-10)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Target Locked"), SFString(" FIRE!.."), SFString("(Green Button)")])),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.75), SFDouble(0.18)]))))])]),

                Viewpoint(
                  description_ : SFString('F16 Close Look-up'),
                  orientation_ : SFRotation([SFDouble(-0.559), SFDouble(-0.827), SFDouble(-0.057), SFDouble(1.3534)]),
                  position_ : SFVec3f([SFDouble(-28.7), SFDouble(19.9), SFDouble(17.4)])),

                Viewpoint(
                  description_ : SFString('Cockpit'),
                  orientation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1249)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(-7.9)])),

                Viewpoint(
                  DEF_ : SFString('LandingGearAnimationView'),
                  description_ : SFString('Landing Gear Animation View'),
                  orientation_ : SFRotation([SFDouble(-0.003), SFDouble(1), SFDouble(-0.012), SFDouble(2.5741)]),
                  position_ : SFVec3f([SFDouble(16.1), SFDouble(-5.8), SFDouble(-24.6)])),

                Viewpoint(
                  description_ : SFString('Cockpit Left View'),
                  orientation_ : SFRotation([SFDouble(-0.276), SFDouble(-0.922), SFDouble(-0.271), SFDouble(1.2338)]),
                  position_ : SFVec3f([SFDouble(-6.7), SFDouble(6.1), SFDouble(-3.9)])),

                Viewpoint(
                  description_ : SFString('F-16 Front View'),
                  orientation_ : SFRotation([SFDouble(-0.007), SFDouble(0.995), SFDouble(0.102), SFDouble(3.1152)]),
                  position_ : SFVec3f([SFDouble(-0.1), SFDouble(13.4), SFDouble(-65)])),

                Viewpoint(
                  description_ : SFString('Cockpit Target View'),
                  orientation_ : SFRotation([SFDouble(-0.834), SFDouble(-0.523), SFDouble(-0.176), SFDouble(0.0875)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(2.4), SFDouble(-7.9)])),

                Transform(
                  DEF_ : SFString('NoseAntennaTransform'),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-0.275), SFDouble(-21)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Cylinder(
                          radius_ : 0.05),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                              shininess_ : 0.5)))])]),

            TimeSensor(
              DEF_ : SFString('WheelUp'),
              cycleInterval_ : 8),

            OrientationInterpolator(
              DEF_ : SFString('GearUpInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.79), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1.92)])),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('TouchSensorUp'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('WheelUp')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WheelUp'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('GearUpInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('GearUpInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('FrontWheelTransform')),

            TimeSensor(
              DEF_ : SFString('WheelDown'),
              cycleInterval_ : 8),

            OrientationInterpolator(
              DEF_ : SFString('GearDownInterpolator'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-1.92), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.79), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('TouchSensorDown'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('WheelDown')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('WheelDown'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('GearDownInterpolator')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('GearDownInterpolator'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('FrontWheelTransform')),
          /*Animation commands for Rear Right Wheel Starts*/

            TimeSensor(
              DEF_ : SFString('RRearUp1'),
              cycleInterval_ : 8),

            TimeSensor(
              DEF_ : SFString('RRearDown1'),
              cycleInterval_ : 8),

            OrientationInterpolator(
              DEF_ : SFString('RRearInterUp1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.44), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(1.92)])),

            OrientationInterpolator(
              DEF_ : SFString('RRearInterDown1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(1.92), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0.44), SFRotation(-1), SFRotation(0), SFRotation(-1), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('TouchSensorDown'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('RRearDown1')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('TouchSensorUp'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('RRearUp1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RRearDown1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('RRearInterDown1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('RRearUp1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('RRearInterUp1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('RRearInterDown1'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('RearRightWheelTransform')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('RRearInterUp1'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('RearRightWheelTransform')),
          /*Animation commands for Rear Left Wheel*/

            TimeSensor(
              DEF_ : SFString('LRearUp1'),
              cycleInterval_ : 8),

            TimeSensor(
              DEF_ : SFString('LRearDown1'),
              cycleInterval_ : 8),

            OrientationInterpolator(
              DEF_ : SFString('LRearInterUp1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0.44), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(1.92)])),

            OrientationInterpolator(
              DEF_ : SFString('LRearInterDown1'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(1.92), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0.44), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0)])),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('TouchSensorDown'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('LRearDown1')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('TouchSensorUp'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('LRearUp1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('LRearDown1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('LRearInterDown1')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('LRearUp1'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('LRearInterUp1')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('LRearInterDown1'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('RearLeftWheelTransform')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('LRearInterUp1'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('RearLeftWheelTransform')),

            Background(
              groundAngle_ : MFFloat([SFFloat(1.309), SFFloat(1.570796)]),
              groundColor_ : MFColor([SFColor(0), SFColor(0.3), SFColor(0.7), SFColor(0), SFColor(0.35), SFColor(0.75), SFColor(0), SFColor(0.4), SFColor(0.8)]),
              skyAngle_ : MFFloat([SFFloat(1.309), SFFloat(1.571)]),
              skyColor_ : MFColor([SFColor(0), SFColor(0.3), SFColor(0.8), SFColor(0), SFColor(0.5), SFColor(1), SFColor(1), SFColor(1), SFColor(1)])),

            Transform(
              DEF_ : SFString('RightmostAmraamTransform'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.4), SFDouble(1.4), SFDouble(1.4)]),
              translation_ : SFVec3f([SFDouble(15.65), SFDouble(0), SFDouble(4.5)]),
              children_ : [
                Inline(
                  DEF_ : SFString('Amraam'),
                  url_ : MFString([SFString("../../Weapons/Missiles/Amraam.x3d"), SFString("https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d"), SFString("../../Weapons/Missiles/Amraam.wrl"), SFString("https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.wrl")]))]),

            Transform(
              DEF_ : SFString('LeftmostAmraamTransform'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.4), SFDouble(1.4), SFDouble(1.4)]),
              translation_ : SFVec3f([SFDouble(-15.65), SFDouble(0), SFDouble(4.5)]),
              children_ : [
                Inline(
                  USE_ : SFString('Amraam'))]),

            Transform(
              DEF_ : SFString('SidewinderHolderTransformRight'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(6), SFDouble(3), SFDouble(3)]),
              translation_ : SFVec3f([SFDouble(9), SFDouble(-1.125), SFDouble(8)]),
              children_ : [
                Inline(
                  DEF_ : SFString('SidewinderHolder'),
                  url_ : MFString([SFString("SidewinderHolder.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.x3d"), SFString("SidewinderHolder.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.wrl")]))]),

            Transform(
              DEF_ : SFString('SidewinderHolderTransformLeft'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(6), SFDouble(3), SFDouble(3)]),
              translation_ : SFVec3f([SFDouble(-8.45), SFDouble(-1.125), SFDouble(8)]),
              children_ : [
                Inline(
                  USE_ : SFString('SidewinderHolder'))]),

            Transform(
              DEF_ : SFString('TurkishFlagTransformLeft'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(-1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(0.3), SFDouble(0.25), SFDouble(0.3)]),
              translation_ : SFVec3f([SFDouble(-0.01), SFDouble(8), SFDouble(19.5)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("TurkishFlagLeft.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.x3d"), SFString("TurkishFlagLeft.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.wrl")]))]),

            Transform(
              DEF_ : SFString('TurkishFlagTransformRight'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(0.3), SFDouble(0.25), SFDouble(0.3)]),
              translation_ : SFVec3f([SFDouble(0.01), SFDouble(8), SFDouble(20.5)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("TurkishFlagRight.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.x3d"), SFString("TurkishFlagRight.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.wrl")]))]),

            Transform(
              DEF_ : SFString('AmraamHolderTransformLeft'),
              translation_ : SFVec3f([SFDouble(-12), SFDouble(-0.176), SFDouble(10.7)]),
              children_ : [
                Inline(
                  DEF_ : SFString('AmraamHolder'),
                  url_ : MFString([SFString("AmraamHolder.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.x3d"), SFString("AmraamHolder.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.wrl")]))]),

            Transform(
              DEF_ : SFString('AmraamHolderTransformRight'),
              translation_ : SFVec3f([SFDouble(12), SFDouble(-0.176), SFDouble(10.7)]),
              children_ : [
                Inline(
                  USE_ : SFString('AmraamHolder'))]),

            Transform(
              DEF_ : SFString('AmraamInnerTransformRight'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.4), SFDouble(1.4), SFDouble(1.4)]),
              translation_ : SFVec3f([SFDouble(12), SFDouble(-1.6), SFDouble(4.5)]),
              children_ : [
                Inline(
                  USE_ : SFString('Amraam'))]),

            Transform(
              DEF_ : SFString('AmraamInnerTransformLeft'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.4), SFDouble(1.4), SFDouble(1.4)]),
              translation_ : SFVec3f([SFDouble(-12), SFDouble(-1.6), SFDouble(4.5)]),
              children_ : [
                Inline(
                  USE_ : SFString('Amraam'))]),

            Transform(
              DEF_ : SFString('SidewinderTransformLeft'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.6), SFDouble(1.6), SFDouble(1.6)]),
              translation_ : SFVec3f([SFDouble(-8.7), SFDouble(-2), SFDouble(3.5)]),
              children_ : [
                Inline(
                  DEF_ : SFString('Sidewinder'),
                  url_ : MFString([SFString("../../Weapons/Missiles/Sidewinder.x3d"), SFString("https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.x3d"), SFString("../../Weapons/Missiles/Sidewinder.wrl"), SFString("https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.wrl")]))]),

            Transform(
              DEF_ : SFString('SidewinderTransformRight'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.6), SFDouble(1.6), SFDouble(1.6)]),
              translation_ : SFVec3f([SFDouble(8.7), SFDouble(-2), SFDouble(3.5)]),
              children_ : [
                Inline(
                  USE_ : SFString('Sidewinder'))]),

            Transform(
              DEF_ : SFString('FuelTankHolderTransformLeft'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.5), SFDouble(1.5), SFDouble(1.5)]),
              translation_ : SFVec3f([SFDouble(-4.8), SFDouble(-1.125), SFDouble(6)]),
              children_ : [
                Inline(
                  DEF_ : SFString('FuelTankHolder'),
                  url_ : MFString([SFString("FuelTankHolder.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.x3d"), SFString("FuelTankHolder.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.wrl")]))]),

            Transform(
              DEF_ : SFString('FuelTankHolderTransformRight'),
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.5), SFDouble(1.5), SFDouble(1.5)]),
              translation_ : SFVec3f([SFDouble(5.3), SFDouble(-1.125), SFDouble(6)]),
              children_ : [
                Inline(
                  USE_ : SFString('FuelTankHolder'))]),

            Transform(
              DEF_ : SFString('FuelTankTransformRight'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.5), SFDouble(1.5), SFDouble(1.5)]),
              translation_ : SFVec3f([SFDouble(5), SFDouble(-2.85), SFDouble(5.5)]),
              children_ : [
                Inline(
                  DEF_ : SFString('FuelTank'),
                  url_ : MFString([SFString("FuelTank.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.x3d"), SFString("FuelTank.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.wrl")]))]),

            Transform(
              DEF_ : SFString('FuelTankTransformLeft'),
              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(1.5), SFDouble(1.5), SFDouble(1.5)]),
              translation_ : SFVec3f([SFDouble(-5), SFDouble(-2.85), SFDouble(5.5)]),
              children_ : [
                Inline(
                  USE_ : SFString('FuelTank'))]),

            Transform(
              DEF_ : SFString('InlineCoverOfPlaneTansform'),
              children_ : [
                Shape(
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(4.15), SFDouble(0.1), SFDouble(20)])),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.25), SFDouble(0.25), SFDouble(0.25)]))))]),

            Transform(
              DEF_ : SFString('TargetHelicopterTransform'),
              translation_ : SFVec3f([SFDouble(16), SFDouble(-50), SFDouble(-500)]),
              children_ : [
                Inline(
                  url_ : MFString([SFString("Target.x3d"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.x3d"), SFString("Target.wrl"), SFString("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.wrl")]))]),

            TimeSensor(
              DEF_ : SFString('FireClock'),
              cycleInterval_ : 8),

            PositionInterpolator(
              DEF_ : SFString('MissilePath'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([-15.65,0,4.5]),SFVec3f([-15.65,-2,4.5]),SFVec3f([16,-50,-500])])),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('FireSensor'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('FireClock')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('FireClock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('MissilePath')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('MissilePath'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('LeftmostAmraamTransform')),

            Viewpoint(
              DEF_ : SFString('MissileLaunchView'),
              description_ : SFString('Missile Fire View'),
              orientation_ : SFRotation([SFDouble(0.094), SFDouble(-0.994), SFDouble(0.057), SFDouble(1.1716)]),
              position_ : SFVec3f([SFDouble(-344.3), SFDouble(-142.8), SFDouble(-27.7)])),

            ROUTE(
              fromField_ : SFString('isActive'),
              fromNode_ : SFString('FireSensor'),
              toField_ : SFString('set_bind'),
              toNode_ : SFString('MissileLaunchView')),
          /*TODO fix type, add filter*/]));
void main() { exit(0); }
