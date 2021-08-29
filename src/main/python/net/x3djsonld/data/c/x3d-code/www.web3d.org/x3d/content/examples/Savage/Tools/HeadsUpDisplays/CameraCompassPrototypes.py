###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='CameraCompassPrototypes.x3d',name='title'),
    meta(content='Prototypes for a circular set of compass bearings that follow the active viewpoint. North = +X axis, East = +Z axis, up = +Y axis.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 June 2001',name='created'),
    meta(content='23 November 2009',name='modified'),
    meta(content='David Colleen',name='inspiration'),
    meta(content='http://www.planet9.com/earth/pearlharbor/vrml/tour.wrl',name='reference'),
    meta(content='http://www.planet9.com/earth/pearlharbor/vrml/compass.wrl',name='reference'),
    meta(content='compass display',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/8 = 45 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass8',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f',value=(0,6,0)),
        field(accessType='inputOutput',name='markerColor',type='SFColor',value=(0.3,0.3,0.8)),
        field(accessType='inputOutput',name='labelColor',type='SFColor',value=(0.9,0.9,0.9))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProximitySensor(DEF='WhereSensor',size=(1000000000,1000000000,1000000000),
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled')])),
          Transform(DEF='CameraLocation',
            children=[
            Transform(DEF='CameraOffset',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='positionOffsetFromCamera')]),
              children=[
              Group(DEF='AllMarkers',
                children=[
                Transform(DEF='West',translation=(0,0,-20),
                  children=[
                  Billboard(
                    children=[
                    Shape(DEF='CardinalMarker',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                        coord=Coordinate(point=[(0.1,2.0,0),(-0.1,2.0,0),(-0.1,1.2,0),(0.1,1.2,0)])),
                      appearance=Appearance(DEF='MarkerAppearance',
                        #  default diffuseColor is (0.8 0.8 0.8), thus zero it out so emissiveColor is unaffected 
                        material=Material(DEF='MarkerMaterial',diffuseColor=(0,0,0),
                          IS=IS(
                            connect=[
                            connect(nodeField='emissiveColor',protoField='markerColor')])))),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["West","270"],
                          fontStyle=FontStyle(DEF='CenterJustify',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.6)),
                        appearance=Appearance(DEF='TextAppearance',
                          #  default diffuseColor is (0.8 0.8 0.8), thus zero it out so emissiveColor is unaffected 
                          material=Material(DEF='TextMaterial',diffuseColor=(0,0,0),
                            IS=IS(
                              connect=[
                              connect(nodeField='emissiveColor',protoField='labelColor')]))))])])]),
                Transform(DEF='North',translation=(20,0,0),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='CardinalMarker'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["North","000"],
                          fontStyle=FontStyle(USE='CenterJustify')),
                        appearance=Appearance(USE='TextAppearance'))])])]),
                Transform(DEF='East',translation=(0,0,20),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='CardinalMarker'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["East","090"],
                          fontStyle=FontStyle(USE='CenterJustify')),
                        appearance=Appearance(USE='TextAppearance'))])])]),
                Transform(DEF='South',translation=(-20,0,0),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='CardinalMarker'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["South","180"],
                          fontStyle=FontStyle(USE='CenterJustify')),
                        appearance=Appearance(USE='TextAppearance'))])])]),
                #  ===== 
                Transform(DEF='NorthWest',translation=(14.142,0,-14.142),
                  children=[
                  Billboard(
                    children=[
                    Shape(DEF='MidMarker',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                        coord=Coordinate(point=[(0.05,1.8,0),(-0.05,1.8,0),(-0.05,1.4,0),(0.05,1.4,0)])),
                      appearance=Appearance(USE='MarkerAppearance')),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["NW","315"],
                          fontStyle=FontStyle(DEF='CenterJustifySmall',family=["SANS"],justify=["MIDDLE","FIRST"],size=0.6)),
                        appearance=Appearance(USE='TextAppearance'))])])]),
                Transform(DEF='NorthEast',translation=(14.142,0,14.142),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["NE","045"],
                          fontStyle=FontStyle(USE='CenterJustifySmall')),
                        appearance=Appearance(USE='TextAppearance'))])])]),
                Transform(DEF='SouthEast',translation=(-14.142,0,14.142),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["SE","135"],
                          fontStyle=FontStyle(USE='CenterJustifySmall')),
                        appearance=Appearance(USE='TextAppearance'))])])]),
                Transform(DEF='SouthWest',translation=(-14.142,0,-14.142),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["SW","225"],
                          fontStyle=FontStyle(USE='CenterJustifySmall')),
                        appearance=Appearance(USE='TextAppearance'))])])])]),
              Transform(DEF='CircleLine8',scale=(20,1,20),translation=(0,1.6,0),
                children=[
                Shape(
                  geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1,60,61,-1,62,63,-1],
                    coord=Coordinate(point=[(0.0,0.0,1.000),(0.105,0.0,0.995),(0.208,0.0,0.978),(0.309,0.0,0.951),(0.407,0.0,0.914),(0.500,0.0,0.866),(0.588,0.0,0.809),(0.669,0.0,0.743),(0.743,0.0,0.669),(0.809,0.0,0.588),(0.866,0.0,0.500),(0.914,0.0,0.407),(0.951,0.0,0.309),(0.978,0.0,0.208),(0.995,0.0,0.105),(1.0,0.0,0.000),(0.995,0.0,-0.105),(0.978,0.0,-0.208),(0.951,0.0,-0.309),(0.914,0.0,-0.407),(0.866,0.0,-0.500),(0.809,0.0,-0.588),(0.743,0.0,-0.669),(0.669,0.0,-0.743),(0.588,0.0,-0.809),(0.500,0.0,-0.866),(0.407,0.0,-0.914),(0.309,0.0,-0.951),(0.208,0.0,-0.978),(0.105,0.0,-0.995),(0.0,0.0,-1.000),(-0.105,0.0,-0.995),(-0.208,0.0,-0.978),(-0.309,0.0,-0.951),(-0.407,0.0,-0.914),(-0.500,0.0,-0.866),(-0.588,0.0,-0.809),(-0.669,0.0,-0.743),(-0.743,0.0,-0.669),(-0.809,0.0,-0.588),(-0.866,0.0,-0.500),(-0.914,0.0,-0.407),(-0.951,0.0,-0.309),(-0.978,0.0,-0.208),(-0.995,0.0,-0.105),(-1.0,0.0,-0.000),(-0.995,0.0,0.105),(-0.978,0.0,0.208),(-0.951,0.0,0.309),(-0.914,0.0,0.407),(-0.866,0.0,0.500),(-0.809,0.0,0.588),(-0.743,0.0,0.669),(-0.669,0.0,0.743),(-0.588,0.0,0.809),(-0.500,0.0,0.866),(-0.407,0.0,0.914),(-0.309,0.0,0.951),(-0.208,0.0,0.978),(-0.105,0.0,0.995),(0.0,0.0,1.000),(0,0,-1),(1,0,0),(-1,0,0)])),
                  appearance=Appearance(
                    material=Material(DEF='CircleMaterial',diffuseColor=(0,0,0),
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='markerColor')]))))])])])]),
        ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='translation',toNode='CameraLocation')])),
    ProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/12 = 30 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass12',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f',value=(0,6,0)),
        field(accessType='inputOutput',name='markerColor',type='SFColor',value=(0.3,0.3,0.8)),
        field(accessType='inputOutput',name='labelColor',type='SFColor',value=(0.9,0.9,0.9))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProximitySensor(DEF='WhereSensor12',size=(1000000000,1000000000,1000000000),
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled')])),
          Transform(DEF='CameraLocation12',
            children=[
            Transform(DEF='CameraOffset12',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='positionOffsetFromCamera')]),
              children=[
              Group(DEF='AllMarkers12',
                children=[
                Transform(DEF='West12',translation=(0,0,-20),
                  children=[
                  Billboard(
                    children=[
                    Shape(DEF='CardinalMarker12',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                        coord=Coordinate(point=[(0.1,2.0,0),(-0.1,2.0,0),(-0.1,1.2,0),(0.1,1.2,0)])),
                      appearance=Appearance(DEF='MarkerAppearance12',
                        #  default diffuseColor is (0.8 0.8 0.8), thus zero it out so emissiveColor is unaffected 
                        material=Material(DEF='MarkerMaterial12',diffuseColor=(0,0,0),
                          IS=IS(
                            connect=[
                            connect(nodeField='emissiveColor',protoField='markerColor')])))),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["West","270"],
                          fontStyle=FontStyle(DEF='CenterJustify12',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.6)),
                        appearance=Appearance(DEF='TextAppearance12',
                          #  default diffuseColor is (0.8 0.8 0.8), thus zero it out so emissiveColor is unaffected 
                          material=Material(DEF='TextMaterial12',diffuseColor=(0,0,0),
                            IS=IS(
                              connect=[
                              connect(nodeField='emissiveColor',protoField='labelColor')]))))])])]),
                Transform(DEF='North12',translation=(20,0,0),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='CardinalMarker12'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["North","000"],
                          fontStyle=FontStyle(USE='CenterJustify12')),
                        appearance=Appearance(USE='TextAppearance12'))])])]),
                Transform(DEF='East12',translation=(0,0,20),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='CardinalMarker12'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["East","090"],
                          fontStyle=FontStyle(USE='CenterJustify12')),
                        appearance=Appearance(USE='TextAppearance12'))])])]),
                Transform(DEF='South12',translation=(-20,0,0),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='CardinalMarker12'),
                    Transform(translation=(0,0.6,0),
                      children=[
                      Shape(
                        geometry=Text(string=["South","180"],
                          fontStyle=FontStyle(USE='CenterJustify12')),
                        appearance=Appearance(USE='TextAppearance12'))])])]),
                #  ===== 
                Transform(DEF='Bearing030',translation=(17.32,0,10),
                  children=[
                  Billboard(
                    children=[
                    Shape(DEF='MidMarker12',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                        coord=Coordinate(point=[(0.05,1.8,0),(-0.05,1.8,0),(-0.05,1.4,0),(0.05,1.4,0)])),
                      appearance=Appearance(USE='MarkerAppearance12')),
                    Shape(
                      geometry=Text(string=["030"],
                        fontStyle=FontStyle(DEF='CenterJustifySmall12',family=["SANS"],justify=["MIDDLE","FIRST"],size=0.75)),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing060',translation=(10,0,17.32),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["060"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing120',translation=(-10,0,17.32),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["120"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing150',translation=(-17.32,0,10),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["150"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing210',translation=(-17.32,0,-10),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["210"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing240',translation=(-10,0,-17.32),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["240"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing300',translation=(10,0,-17.32),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["300"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])]),
                Transform(DEF='Bearing330',translation=(17.32,0,-10),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker12'),
                    Shape(
                      geometry=Text(string=["330"],
                        fontStyle=FontStyle(USE='CenterJustifySmall12')),
                      appearance=Appearance(USE='TextAppearance12'))])])]),
              Transform(DEF='CircleLine12',scale=(20,1,20),translation=(0,1.6,0),
                children=[
                Shape(
                  geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1,60,61,-1,62,63,-1],
                    coord=Coordinate(point=[(0.0,0.0,1.000),(0.105,0.0,0.995),(0.208,0.0,0.978),(0.309,0.0,0.951),(0.407,0.0,0.914),(0.500,0.0,0.866),(0.588,0.0,0.809),(0.669,0.0,0.743),(0.743,0.0,0.669),(0.809,0.0,0.588),(0.866,0.0,0.500),(0.914,0.0,0.407),(0.951,0.0,0.309),(0.978,0.0,0.208),(0.995,0.0,0.105),(1.0,0.0,0.000),(0.995,0.0,-0.105),(0.978,0.0,-0.208),(0.951,0.0,-0.309),(0.914,0.0,-0.407),(0.866,0.0,-0.500),(0.809,0.0,-0.588),(0.743,0.0,-0.669),(0.669,0.0,-0.743),(0.588,0.0,-0.809),(0.500,0.0,-0.866),(0.407,0.0,-0.914),(0.309,0.0,-0.951),(0.208,0.0,-0.978),(0.105,0.0,-0.995),(0.0,0.0,-1.000),(-0.105,0.0,-0.995),(-0.208,0.0,-0.978),(-0.309,0.0,-0.951),(-0.407,0.0,-0.914),(-0.500,0.0,-0.866),(-0.588,0.0,-0.809),(-0.669,0.0,-0.743),(-0.743,0.0,-0.669),(-0.809,0.0,-0.588),(-0.866,0.0,-0.500),(-0.914,0.0,-0.407),(-0.951,0.0,-0.309),(-0.978,0.0,-0.208),(-0.995,0.0,-0.105),(-1.0,0.0,-0.000),(-0.995,0.0,0.105),(-0.978,0.0,0.208),(-0.951,0.0,0.309),(-0.914,0.0,0.407),(-0.866,0.0,0.500),(-0.809,0.0,0.588),(-0.743,0.0,0.669),(-0.669,0.0,0.743),(-0.588,0.0,0.809),(-0.500,0.0,0.866),(-0.407,0.0,0.914),(-0.309,0.0,0.951),(-0.208,0.0,0.978),(-0.105,0.0,0.995),(0.0,0.0,1.000),(0,0,-1),(1,0,0),(-1,0,0)])),
                  appearance=Appearance(
                    material=Material(DEF='CircleMaterial12',diffuseColor=(0,0,0),
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='markerColor')]))))])])])]),
        ROUTE(fromField='position_changed',fromNode='WhereSensor12',toField='translation',toNode='CameraLocation12')])),
    ProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/36 = 10 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass36',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f',value=(0,6,0)),
        field(accessType='inputOutput',name='markerColor',type='SFColor',value=(0.3,0.3,0.8)),
        field(accessType='inputOutput',name='labelColor',type='SFColor',value=(0.9,0.9,0.9))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProtoInstance(DEF='CameraCompass12Node',name='CameraCompass12',
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='positionOffsetFromCamera',protoField='positionOffsetFromCamera'),
              connect(nodeField='markerColor',protoField='markerColor'),
              connect(nodeField='labelColor',protoField='labelColor')])),
          ProximitySensor(DEF='WhereSensor36',size=(1000000000,1000000000,1000000000),
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled')])),
          Transform(DEF='CameraLocation36',
            children=[
            Transform(DEF='CameraOffset36',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='positionOffsetFromCamera')]),
              children=[
              Group(DEF='FirstQuadrantMarkers',
                children=[
                Transform(DEF='Bearing010',translation=(19.7,0.0,3.48),
                  children=[
                  Billboard(
                    children=[
                    Shape(DEF='MidMarker36',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                        coord=Coordinate(point=[(0.05,1.8,0),(-0.05,1.8,0),(-0.05,1.4,0),(0.05,1.4,0)])),
                      appearance=Appearance(DEF='MarkerAppearance36',
                        #  default diffuseColor is (0.8 0.8 0.8), thus zero it out so emissiveColor is unaffected 
                        material=Material(DEF='MarkerMaterial36',diffuseColor=(0,0,0),
                          IS=IS(
                            connect=[
                            connect(nodeField='emissiveColor',protoField='markerColor')]))))])]),
                Transform(DEF='Bearing020',translation=(18.8,0.0,6.84),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker36')])]),
                Transform(DEF='Bearing040',translation=(15.32,0.0,12.86),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker36')])]),
                Transform(DEF='Bearing050',translation=(12.86,0.0,15.32),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker36')])]),
                Transform(DEF='Bearing070',translation=(6.84,0.0,18.8),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker36')])]),
                Transform(DEF='Bearing080',translation=(3.48,0.0,19.7),
                  children=[
                  Billboard(
                    children=[
                    Shape(USE='MidMarker36')])])]),
              Transform(DEF='SecondQuadrantMarkers',rotation=(0,1,0,-1.57),
                children=[
                Group(USE='FirstQuadrantMarkers')]),
              Transform(DEF='ThirdQuadrantMarkers',rotation=(0,1,0,3.1416),
                children=[
                Group(USE='FirstQuadrantMarkers')]),
              Transform(DEF='FourthQuadrantMarkers',rotation=(0,1,0,1.57),
                children=[
                Group(USE='FirstQuadrantMarkers')])])])]),
        ROUTE(fromField='position_changed',fromNode='WhereSensor36',toField='translation',toNode='CameraLocation36')])),
    #  ======================== 
    NavigationInfo(speed=10,type=["FLY","ANY"]),
    Group(DEF='TextMenu',
      children=[
      Transform(translation=(0,2,0),
        children=[
        Shape(
          geometry=Text(string=["CameraCompassPrototypes","is a prototype definition file.","For examples click text:"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9))))]),
      Transform(translation=(0,-1,0),
        children=[
        Anchor(description='CameraCompass8 Example',parameter=["target=_blank"],url=["CameraCompass8Example.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass8Example.x3d","CameraCompass8Example.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass8Example.wrl"],
          children=[
          Shape(
            geometry=Text(string=["CameraCompass8 Example"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.8,0.4))))])]),
      Transform(translation=(0,-2,0),
        children=[
        Anchor(description='CameraCompass12 Example',parameter=["target=_blank"],url=["CameraCompass12Example.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass12Example.x3d","CameraCompass12Example.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass12Example.wrl"],
          children=[
          Shape(
            geometry=Text(string=["CameraCompass12 Example"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.4,0.2))))])]),
      Transform(translation=(0,-3,0),
        children=[
        Anchor(description='CameraCompass36 Example',parameter=["target=_blank"],url=["CameraCompass36Example.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass36Example.x3d","CameraCompass36Example.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompass36Example.wrl"],
          children=[
          Shape(
            geometry=Text(string=["CameraCompass36 Example"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.2,0.2))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CameraCompassPrototypes.py")
