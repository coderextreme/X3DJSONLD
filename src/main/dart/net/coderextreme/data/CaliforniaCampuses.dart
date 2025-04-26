// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('Geospatial'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('CaliforniaCampuses.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Viewpoints and tour of California campuses')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('4 March 2010')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('CaliforniaCampuses.kml')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d-earth')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://x3d-earth.nps.edu')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://hamming.uc.nps.edu')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D Earth')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://mmog.ern.nps.edu/California/California.x3d')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('under development')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('mmog.ern.nps.edu restricted to internal access within NPS firewall only')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('KmlToX3dViewpoints.xslt')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://savage.nps.edu/Savage/license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('CaliforniaCampuses.x3d')),

            Switch(
              DEF_ : SFString('SwitchGlobes'),
              whichChoice_ : 0,
              /*Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.*/
              children_ : [
                Inline(
                  url_ : MFString([SFString("http://x3d-earth.nps.edu/osmdemo.x3d")])),
              /*<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>*/
              /*<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>*/
              /*<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>*/
              /*<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>*/]),

            NavigationInfo(
              transitionType_ : MFString([SFString("ANIMATE")])),

            Group(
              DEF_ : SFString('PlacemarkGroup'),
              children_ : [
                GeoViewpoint(
                  DEF_ : SFString('View01'),
                  description_ : SFString('Naval Postgraduate School'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(36.595599), SFDouble(-121.877148), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View02'),
                  description_ : SFString('University of California Davis'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(38.53650615157984), SFDouble(-121.7489628616831), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View03'),
                  description_ : SFString('University of California Berkeley'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.86963434512325), SFDouble(-122.2593873127355), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View04'),
                  description_ : SFString('University of California San Francisco'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.76340647188392), SFDouble(-122.4582475377715), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View05'),
                  description_ : SFString('University of California Santa Cruz'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(36.99628443046043), SFDouble(-122.0534325473795), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View06'),
                  description_ : SFString('University of California Merced'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.365508575977), SFDouble(-120.4252597059142), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View07'),
                  description_ : SFString('University of California Santa Barbara'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.41124450961521), SFDouble(-119.8479940053906), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View08'),
                  description_ : SFString('University of California Los Angeles'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.07224474392262), SFDouble(-118.4408472225642), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View09'),
                  description_ : SFString('University of California Irvine'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.64623283675919), SFDouble(-117.8427064139082), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View10'),
                  description_ : SFString('University of California Riverside'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.97350567066717), SFDouble(-117.3281649569839), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View11'),
                  description_ : SFString('University of California San Diego'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(32.87612136607509), SFDouble(-117.2367298240259), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View12'),
                  description_ : SFString('Humboldt State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(40.87630235623448), SFDouble(-124.0785789217266), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View13'),
                  description_ : SFString('California State University, Chico'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(39.73031527724385), SFDouble(-121.8453722745223), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View14'),
                  description_ : SFString('California State University Sacramento'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(38.5626517618963), SFDouble(-121.4244636520556), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View15'),
                  description_ : SFString('Sonoma State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(38.33922929793606), SFDouble(-122.6744333530031), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View16'),
                  description_ : SFString('California Maritime Academy'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(38.06907065059484), SFDouble(-122.2309147135222), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View17'),
                  description_ : SFString('San Francisco State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.722876), SFDouble(-122.4781512190666), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View18'),
                  description_ : SFString('California State University, East Bay'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.65707914139907), SFDouble(-122.0569190659761), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View19'),
                  description_ : SFString('California State University Stanislaus'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.52552478005697), SFDouble(-120.8563508560606), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View20'),
                  description_ : SFString('San Jose State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(37.33580940527095), SFDouble(-121.8815343755784), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View21'),
                  description_ : SFString('California State University, Monterey Bay'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(36.6538071781493), SFDouble(-121.7984465276711), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View22'),
                  description_ : SFString('Fresno State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(36.812166), SFDouble(-119.7451552005852), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View23'),
                  description_ : SFString('California State University, Bakersfield'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(35.350804), SFDouble(-119.1043226128032), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View24'),
                  description_ : SFString('California Polytechnic State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(35.30115692599171), SFDouble(-120.6595761796351), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View25'),
                  description_ : SFString('California State University, Channel Islands'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.1624126428852), SFDouble(-119.0425264841287), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View26'),
                  description_ : SFString('California State University, Northridge'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.23959265263849), SFDouble(-118.5284272400904), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View27'),
                  description_ : SFString('California State University, Los Angeles'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.06645996626264), SFDouble(-118.1682050902557), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View28'),
                  description_ : SFString('California State Polytechnic University, Pomona'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.05727150000314), SFDouble(-117.8215320234812), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View29'),
                  description_ : SFString('California State University, San Bernardino'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(34.18180116432101), SFDouble(-117.3243676664719), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View30'),
                  description_ : SFString('California State University, Fullerton'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.882522), SFDouble(-117.8868367869023), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View31'),
                  description_ : SFString('California State University Dominguez Hills'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.86463396857103), SFDouble(-118.2553596272055), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View32'),
                  description_ : SFString('California State University, Long Beach'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.78196696470824), SFDouble(-118.112678253688), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View33'),
                  description_ : SFString('California State University, San Marcos'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.12837619265174), SFDouble(-117.1600194071002), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View34'),
                  description_ : SFString('San Diego State University'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(32.77593126586385), SFDouble(-117.0722876242553), SFDouble(250000)])),

                GeoViewpoint(
                  DEF_ : SFString('View35'),
                  description_ : SFString('CENIC'),
                  orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  position_ : SFVec3d([SFDouble(33.879947), SFDouble(-118.027903), SFDouble(250000)]))]),
          /*====================*/

            ExternProtoDeclare(
              name_ : SFString('CrossHair'),
              appinfo_ : SFString('CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point'),
              url_ : MFString([SFString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), SFString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"), SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair")]),
              field_ : [
                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('whether CrossHair prototype is enabled or not')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('set_enabled'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('control whether enabled/disabled')),

                field(
                  type_ : SFString("SFColor"),
                  name_ : SFString('markerColor'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('color of CrossHair marker')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('scale'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('size of CrossHair in meters')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('positionOffsetFromCamera'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('distance in front of HUD viewpoint'))]),

            ProtoInstance(
              name_ : SFString('CrossHair'),
              DEF_ : SFString('CrossHairInstance'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('markerColor'),
                  value_ : SFString('0.1 0.8 0.1')),

                fieldValue(
                  name_ : SFString('scale'),
                  value_ : SFString('0.5 0.5 0.5')),

                fieldValue(
                  name_ : SFString('positionOffsetFromCamera'),
                  value_ : SFString('0 0 -5'))]),
          /*====================*/

            ExternProtoDeclare(
              name_ : SFString('HeadsUpDisplay'),
              appinfo_ : SFString('Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location'),
              url_ : MFString([SFString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay"), SFString("../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"), SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay")]),
              field_ : [
                field(
                  type_ : SFString("MFNode"),
                  name_ : SFString('children'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('X3D content positioned at HUD offset')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('screenOffset'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('offset position for HUD relative to current view location, default 0 0 -5')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('position_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('HUD position update (in world coordinates) relative to original location')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('orientation_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('HUD orientation update relative to original location'))]),
          /*====================*/

            ExternProtoDeclare(
              name_ : SFString('ViewpointSequencer'),
              appinfo_ : SFString('Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene'),
              url_ : MFString([SFString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), SFString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer"), SFString("../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"), SFString("https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer")]),
              field_ : [
                field(
                  type_ : SFString("MFNode"),
                  name_ : SFString('viewpoints'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('Viewpoint USE nodes that are sequentially bound')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('interval'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('number of seconds between viewpoint shifts')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('whether ViewpointSequencer is enabled or not')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('set_enabled'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('whether ViewpointSequencer is enabled or not')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('previous'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('bind previous Viewpoint in list')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('next'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('bind next Viewpoint in list')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('toggleMessage'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Select message to toggle ViewpointSequencer')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('toggleMessageFontSize'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('Color for toggleMessage text')),

                field(
                  type_ : SFString("SFColor"),
                  name_ : SFString('toggleMessageColor'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Color for toggleMessage text')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('enable console output'))]),

            ProtoInstance(
              name_ : SFString('ViewpointSequencer'),
              DEF_ : SFString('ViewpointTour'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('interval'),
                  value_ : SFString('30')),

                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('toggleMessage'),
                  value_ : SFString('\"ViewpointSequencer tour\"')),

                fieldValue(
                  name_ : SFString('viewpoints'),
                  children_ : [
                    GeoViewpoint(
                      USE_ : SFString('View01')),

                    GeoViewpoint(
                      USE_ : SFString('View02')),

                    GeoViewpoint(
                      USE_ : SFString('View03')),

                    GeoViewpoint(
                      USE_ : SFString('View04')),

                    GeoViewpoint(
                      USE_ : SFString('View05')),

                    GeoViewpoint(
                      USE_ : SFString('View06')),

                    GeoViewpoint(
                      USE_ : SFString('View07')),

                    GeoViewpoint(
                      USE_ : SFString('View08')),

                    GeoViewpoint(
                      USE_ : SFString('View09')),

                    GeoViewpoint(
                      USE_ : SFString('View10')),

                    GeoViewpoint(
                      USE_ : SFString('View11')),

                    GeoViewpoint(
                      USE_ : SFString('View12')),

                    GeoViewpoint(
                      USE_ : SFString('View13')),

                    GeoViewpoint(
                      USE_ : SFString('View14')),

                    GeoViewpoint(
                      USE_ : SFString('View15')),

                    GeoViewpoint(
                      USE_ : SFString('View16')),

                    GeoViewpoint(
                      USE_ : SFString('View17')),

                    GeoViewpoint(
                      USE_ : SFString('View18')),

                    GeoViewpoint(
                      USE_ : SFString('View19')),

                    GeoViewpoint(
                      USE_ : SFString('View20')),

                    GeoViewpoint(
                      USE_ : SFString('View21')),

                    GeoViewpoint(
                      USE_ : SFString('View22')),

                    GeoViewpoint(
                      USE_ : SFString('View23')),

                    GeoViewpoint(
                      USE_ : SFString('View24')),

                    GeoViewpoint(
                      USE_ : SFString('View25')),

                    GeoViewpoint(
                      USE_ : SFString('View26')),

                    GeoViewpoint(
                      USE_ : SFString('View27')),

                    GeoViewpoint(
                      USE_ : SFString('View28')),

                    GeoViewpoint(
                      USE_ : SFString('View29')),

                    GeoViewpoint(
                      USE_ : SFString('View30')),

                    GeoViewpoint(
                      USE_ : SFString('View31')),

                    GeoViewpoint(
                      USE_ : SFString('View32')),

                    GeoViewpoint(
                      USE_ : SFString('View33')),

                    GeoViewpoint(
                      USE_ : SFString('View34')),

                    GeoViewpoint(
                      USE_ : SFString('View35')),

                    Viewpoint(
                      DEF_ : SFString('View4'),
                      description_ : SFString('View four (-X axis)'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                      position_ : SFVec3f([SFDouble(-10), SFDouble(0), SFDouble(0)]))]),
              /*initially enabled is off, scene provides selectable text to activate*/]),
          /*====================*/

            GeoLocation(
              geoCoords_ : SFVec3d([SFDouble(36.595599), SFDouble(-121.877148), SFDouble(624990)]),
              children_ : [
                Billboard(
                  axisOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("ViewpointSequencer tour")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              ambientIntensity_ : 0.25,
                              diffuseColor_ : SFColor([SFDouble(0.795918), SFDouble(0.505869), SFDouble(0.093315)]),
                              shininess_ : 0.39,
                              specularColor_ : SFColor([SFDouble(0.923469), SFDouble(0.428866), SFDouble(0.006369)]))))]),

                TouchSensor(
                  DEF_ : SFString('TourTouch'),
                  description_ : SFString('Touch text to turn tour on/off')),

                BooleanToggle(
                  DEF_ : SFString('TourToggle')),

                ROUTE(
                  fromField_ : SFString('isActive'),
                  fromNode_ : SFString('TourTouch'),
                  toField_ : SFString('set_boolean'),
                  toNode_ : SFString('TourToggle')),

                ROUTE(
                  fromField_ : SFString('toggle'),
                  fromNode_ : SFString('TourToggle'),
                  toField_ : SFString('set_enabled'),
                  toNode_ : SFString('ViewpointTour'))]),
          /*====================*/

            ExternProtoDeclare(
              name_ : SFString('ViewPositionOrientation'),
              appinfo_ : SFString('ViewPositionOrientation provides provides console output of local position and orientation as user navigates'),
              url_ : MFString([SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), SFString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")]),
              field_ : [
                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Whether or not ViewPositionOrientation sends output to console')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('Output internal trace messages for debugging this node, intended for developer use only')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('set_traceEnabled'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('Ability to turn output tracing on/off at runtime')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('position_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Output local position')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('orientation_changed'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Output local orientation')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('outputViewpointString'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('MFString value of new Viewpoint'))]),

            ProtoInstance(
              name_ : SFString('ViewPositionOrientation'),
              DEF_ : SFString('ExampleViewPositionOrientation'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('false'))]),
          /*====================*/]));
void main() { exit(0); }
