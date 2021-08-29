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
    meta(content='DaybeaconPrototype.x3d',name='title'),
    meta(content='Passing Daybeacon Prototype (Lateral Marker), with options for Green/Red.',name='description'),
    meta(content='Planet 9 Studios, Inc., San Francisco, CA',name='creator'),
    meta(content='Christian Greuel, Director of Art and Production',name='producer'),
    meta(content='Danny Lee, Christian Greuel',name='modelers'),
    meta(content='http://www.planet9.com',name='reference'),
    meta(content='IHO S-57: http://www.caris.com/s-57',name='reference'),
    meta(content='Xj3D Format Converter',name='translator'),
    meta(content='17 August 2006',name='created'),
    meta(content='18 August 2006',name='translated'),
    meta(content='28 August 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DaybeaconPrototype.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='Daybeacon',
      ProtoInterface=ProtoInterface(
        #  0=None(Unlikely), 1=PortHand(GreenSquare), 2=StarboardHand(RedTriangle), 3=PreferredChannelToStarboard(TopmostBandGreen), 4=PreferredChannelToPort(TopmostBandRed) 
        field=[
        field(accessType='inputOutput',name='Catlam',type='SFInt32',value=1),
        #  Not Implemented 
        field(accessType='inputOutput',name='Number',type='SFInt32',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='DaybeaconGeometry',
          children=[
          Group(DEF='DaybeaconSignals',
            children=[
            Switch(DEF='CatlamSwitch',whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='Catlam')]),
              children=[
              Transform(DEF='NoDaybeacons'),
              Transform(DEF='DaybeaconsGreen',translation=(0.0,4.36938,0.0),
                children=[
                Transform(DEF='DaybeaconGreen1',translation=(7.36E-4,-0.091284,0.001776),
                  children=[
                  Shape(
                    appearance=Appearance(DEF='Daybeacon_1',
                      material=Material(DEF='Daybeacon_2',ambientIntensity=0.0,diffuseColor=(0.588235,0.588235,0.588235),shininess=0.145),
                      texture=ImageTexture(url=["Textures/DaybeaconGreen.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconGreen.jpg"])),
                    geometry=IndexedFaceSet(coordIndex=[6,7,4,-1,5,4,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[6,7,4,-1,5,4,7,-1],
                      coord=Coordinate(DEF='DaybeaconGreen1-COORD',point=[(0.500074,-0.408716,0.748223),(-0.499926,-0.408716,0.748223),(0.498454,0.591285,0.748223),(-0.501546,0.591285,0.748223),(0.449005,-0.358715,0.748223),(-0.450995,-0.358715,0.748223),(0.448454,0.541285,0.748223),(-0.451546,0.541285,0.748223)]),
                      normal=Normal(DEF='Daybeacon_3',vector=[(0.0,0.0,1.0),(0.0,0.0,-1.0)]),
                      texCoord=TextureCoordinate(DEF='DaybeaconGreen1-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.997885,0.999501),(4.99E-4,0.9995),(0.948565,0.05045),(0.050918,0.050449),(0.948015,0.949551),(0.050368,0.949551)]))),
                  Shape(
                    appearance=Appearance(DEF='Daybeacon_4',
                      material=Material(USE='Daybeacon_2'),
                      texture=ImageTexture(url=["Textures/DaybeaconGreenDark.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconGreenDark.jpg"])),
                    geometry=IndexedFaceSet(coordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],
                      coord=Coordinate(USE='DaybeaconGreen1-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreen1-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(DEF='Daybeacon_5',
                      material=Material(USE='Daybeacon_2'),
                      texture=ImageTexture(url=["Textures/DaybeaconBack.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconBack.jpg"])),
                    geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[7,6,4,-1,4,5,7,-1],
                      coord=Coordinate(USE='DaybeaconGreen1-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreen1-TEXCOORD')))]),
                Transform(DEF='DaybeaconGreen2',rotation=(0.0,-1.0,0.0,-3.14159),translation=(-7.36E-4,-0.091284,-0.001776),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_1'),
                    geometry=IndexedFaceSet(coordIndex=[6,7,4,-1,5,4,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[6,7,4,-1,5,4,7,-1],
                      coord=Coordinate(DEF='DaybeaconGreen2-COORD',point=[(0.500074,-0.408716,0.748223),(-0.499926,-0.408716,0.748223),(0.498454,0.591285,0.748223),(-0.501546,0.591285,0.748223),(0.449005,-0.358715,0.748223),(-0.450995,-0.358715,0.748223),(0.448454,0.541285,0.748223),(-0.451546,0.541285,0.748223)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconGreen2-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.997885,0.999501),(4.99E-4,0.9995),(0.948565,0.05045),(0.050918,0.050449),(0.948015,0.949551),(0.050368,0.949551)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_4'),
                    geometry=IndexedFaceSet(coordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],
                      coord=Coordinate(USE='DaybeaconGreen2-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreen2-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[7,6,4,-1,4,5,7,-1],
                      coord=Coordinate(USE='DaybeaconGreen2-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreen2-TEXCOORD')))])]),
              Transform(DEF='DaybeaconsRed',translation=(0.0,4.36938,0.0),
                children=[
                Transform(DEF='DaybeaconRed1',translation=(0.0,-0.166405,0.75),
                  children=[
                  Shape(
                    appearance=Appearance(DEF='Daybeacon_6',
                      material=Material(USE='Daybeacon_2'),
                      texture=ImageTexture(url=["Textures/DaybeaconRed.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconRed.jpg"])),
                    geometry=IndexedFaceSet(coordIndex=[4,5,3,-1],normalIndex=[0,0,0,-1],texCoordIndex=[4,5,3,-1],
                      coord=Coordinate(DEF='DaybeaconRed1-COORD',point=[(0.0,0.666405,0.0),(-0.574646,-0.333595,0.0),(0.574646,-0.333595,0.0),(0.0,0.555162,0.0),(-0.478307,-0.277973,0.0),(0.478307,-0.277974,0.0)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconRed1-TEXCOORD',point=[(0.5,0.999501),(4.99E-4,4.99E-4),(0.999501,4.99E-4),(0.5,0.888369),(0.08424,0.056065),(0.915759,0.056065)]))),
                  Shape(
                    appearance=Appearance(DEF='Daybeacon_7',
                      material=Material(USE='Daybeacon_2'),
                      texture=ImageTexture(url=["Textures/DaybeaconRedDark.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconRedDark.jpg"])),
                    geometry=IndexedFaceSet(coordIndex=[1,2,5,-1,5,4,1,-1,2,0,3,-1,3,5,2,-1,0,1,4,-1,4,3,0,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[1,2,5,-1,5,4,1,-1,2,0,3,-1,3,5,2,-1,0,1,4,-1,4,3,0,-1],
                      coord=Coordinate(USE='DaybeaconRed1-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRed1-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[2,1,0,-1],normalIndex=[1,1,1,-1],texCoordIndex=[5,4,3,-1],
                      coord=Coordinate(USE='DaybeaconRed1-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRed1-TEXCOORD')))]),
                Transform(DEF='DaybeaconRed2',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,-0.166405,-0.75),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_6'),
                    geometry=IndexedFaceSet(coordIndex=[4,5,3,-1],normalIndex=[0,0,0,-1],texCoordIndex=[4,5,3,-1],
                      coord=Coordinate(DEF='DaybeaconRed2-COORD',point=[(0.0,0.666405,0.0),(-0.574646,-0.333595,0.0),(0.574646,-0.333595,0.0),(0.0,0.555162,0.0),(-0.478307,-0.277973,0.0),(0.478307,-0.277974,0.0)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconRed2-TEXCOORD',point=[(0.5,0.999501),(4.99E-4,4.99E-4),(0.999501,4.99E-4),(0.5,0.888369),(0.08424,0.056065),(0.915759,0.056065)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_7'),
                    geometry=IndexedFaceSet(coordIndex=[1,2,5,-1,5,4,1,-1,2,0,3,-1,3,5,2,-1,0,1,4,-1,4,3,0,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[1,2,5,-1,5,4,1,-1,2,0,3,-1,3,5,2,-1,0,1,4,-1,4,3,0,-1],
                      coord=Coordinate(USE='DaybeaconRed2-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRed2-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[2,1,0,-1],normalIndex=[1,1,1,-1],texCoordIndex=[5,4,3,-1],
                      coord=Coordinate(USE='DaybeaconRed2-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRed2-TEXCOORD')))])]),
              Transform(DEF='DaybeaconsGreenPreferred',translation=(0.0,4.36938,0.0),
                children=[
                Transform(DEF='DaybeaconGreenPreferred1a',translation=(7.36E-4,-0.091284,0.001776),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_1'),
                    geometry=IndexedFaceSet(coordIndex=[3,5,4,-1,4,2,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[3,5,4,-1,4,2,3,-1],
                      coord=Coordinate(DEF='DaybeaconGreenPreferred1a-COORD',point=[(0.498454,0.591285,0.748223),(-0.501546,0.591285,0.748223),(0.448454,0.541285,0.748223),(-0.451546,0.541285,0.748223),(0.448729,0.091284,0.748223),(-0.451271,0.091284,0.748223),(0.499264,0.091284,0.748223),(-0.500736,0.091284,0.748223)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconGreenPreferred1a-TEXCOORD',point=[(0.997885,0.999501),(4.99E-4,0.9995),(0.948015,0.949551),(0.050368,0.949551),(0.94829,0.5),(0.050643,0.5),(0.998693,0.5),(0.94829,0.500001),(0.001307,0.5)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_4'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1,7,5,3,-1,3,1,7,-1,6,0,2,-1,2,4,6,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[3,2,0,-1,0,1,3,-1,8,5,3,-1,3,1,8,-1,6,0,2,-1,2,4,6,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred1a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred1a-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[0,6,7,-1,7,1,0,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[2,7,5,-1,5,3,2,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred1a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred1a-TEXCOORD')))]),
                Transform(DEF='DaybeaconGreenPreferred1b',translation=(7.36E-4,-0.091284,0.001776),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_6'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,4,-1,4,5,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[3,2,4,-1,4,5,3,-1],
                      coord=Coordinate(DEF='DaybeaconGreenPreferred1b-COORD',point=[(0.500074,-0.408716,0.748223),(-0.499926,-0.408716,0.748223),(0.449005,-0.358715,0.748223),(-0.450995,-0.358715,0.748223),(0.448729,0.091284,0.748223),(-0.451271,0.091284,0.748223),(0.499264,0.091284,0.748223),(-0.500736,0.091284,0.748223)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconGreenPreferred1b-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.948565,0.05045),(0.050918,0.050449),(0.94829,0.5),(0.050643,0.5),(0.998693,0.5),(0.94829,0.500001),(0.001307,0.5)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_7'),
                    geometry=IndexedFaceSet(coordIndex=[6,4,2,-1,2,0,6,-1,2,3,1,-1,1,0,2,-1,7,1,3,-1,3,5,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[6,4,2,-1,2,0,6,-1,2,3,1,-1,1,0,2,-1,8,1,3,-1,3,5,8,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred1b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred1b-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[0,1,7,-1,7,6,0,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[2,3,5,-1,5,7,2,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred1b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred1b-TEXCOORD')))]),
                Transform(DEF='DaybeaconGreenPreferred2a',rotation=(0.0,-1.0,0.0,-3.14159),translation=(-7.36E-4,-0.091284,-0.001776),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_1'),
                    geometry=IndexedFaceSet(coordIndex=[3,5,4,-1,4,2,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[3,5,4,-1,4,2,3,-1],
                      coord=Coordinate(DEF='DaybeaconGreenPreferred2a-COORD',point=[(0.498454,0.591285,0.748223),(-0.501546,0.591285,0.748223),(0.448454,0.541285,0.748223),(-0.451546,0.541285,0.748223),(0.448729,0.091284,0.748223),(-0.451271,0.091284,0.748223),(0.499264,0.091284,0.748223),(-0.500736,0.091284,0.748223)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconGreenPreferred2a-TEXCOORD',point=[(0.997885,0.999501),(4.99E-4,0.9995),(0.948015,0.949551),(0.050368,0.949551),(0.94829,0.5),(0.050643,0.5),(0.998693,0.5),(0.94829,0.500001),(0.001307,0.5)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_4'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1,7,5,3,-1,3,1,7,-1,6,0,2,-1,2,4,6,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[3,2,0,-1,0,1,3,-1,8,5,3,-1,3,1,8,-1,6,0,2,-1,2,4,6,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred2a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred2a-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[0,6,7,-1,7,1,0,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[2,7,5,-1,5,3,2,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred2a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred2a-TEXCOORD')))]),
                Transform(DEF='DaybeaconGreenPreferred2b',rotation=(0.0,-1.0,0.0,-3.14159),translation=(-7.36E-4,-0.091284,-0.001776),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_6'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,4,-1,4,5,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[3,2,4,-1,4,5,3,-1],
                      coord=Coordinate(DEF='DaybeaconGreenPreferred2b-COORD',point=[(0.500074,-0.408716,0.748223),(-0.499926,-0.408716,0.748223),(0.449005,-0.358715,0.748223),(-0.450995,-0.358715,0.748223),(0.448729,0.091284,0.748223),(-0.451271,0.091284,0.748223),(0.499264,0.091284,0.748223),(-0.500736,0.091284,0.748223)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconGreenPreferred2b-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.948565,0.05045),(0.050918,0.050449),(0.94829,0.5),(0.050643,0.5),(0.998693,0.5),(0.94829,0.500001),(0.001307,0.5)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_7'),
                    geometry=IndexedFaceSet(coordIndex=[6,4,2,-1,2,0,6,-1,2,3,1,-1,1,0,2,-1,7,1,3,-1,3,5,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[6,4,2,-1,2,0,6,-1,2,3,1,-1,1,0,2,-1,8,1,3,-1,3,5,8,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred2b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred2b-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[0,1,7,-1,7,6,0,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[2,3,5,-1,5,7,2,-1],
                      coord=Coordinate(USE='DaybeaconGreenPreferred2b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconGreenPreferred2b-TEXCOORD')))])]),
              Transform(DEF='DaybeaconsRedPreferred',translation=(0.0,4.36938,0.0),
                children=[
                Transform(DEF='DaybeaconRedPreferred1a',translation=(0.0,-0.166405,0.75),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_6'),
                    geometry=IndexedFaceSet(coordIndex=[2,1,3,-1],normalIndex=[0,0,0,-1],texCoordIndex=[2,1,3,-1],
                      coord=Coordinate(DEF='DaybeaconRedPreferred1a-COORD',point=[(0.0,0.666405,0.0),(0.0,0.555162,0.0),(0.280072,0.067321,0.0),(-0.280072,0.067321,0.0),(0.344261,0.067321,0.0),(-0.344261,0.067321,0.0)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconRedPreferred1a-TEXCOORD',point=[(0.5,0.999501),(0.5,0.888369),(0.743447,0.401015),(0.256553,0.401015),(0.799243,0.401015),(0.749075,0.38975),(0.200757,0.401015),(0.250925,0.38975)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_7'),
                    geometry=IndexedFaceSet(coordIndex=[5,3,1,-1,1,0,5,-1,4,0,1,-1,1,2,4,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[6,3,1,-1,1,0,6,-1,4,0,1,-1,1,2,4,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred1a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred1a-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[5,0,4,-1],normalIndex=[1,1,1,-1],texCoordIndex=[7,1,5,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred1a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred1a-TEXCOORD')))]),
                Transform(DEF='DaybeaconRedPreferred1b',translation=(0.0,-0.166405,0.75),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_1'),
                    geometry=IndexedFaceSet(coordIndex=[2,3,4,-1,4,5,2,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[2,3,4,-1,4,5,2,-1],
                      coord=Coordinate(DEF='DaybeaconRedPreferred1b-COORD',point=[(-0.574646,-0.333595,0.0),(0.574646,-0.333595,0.0),(-0.478307,-0.277973,0.0),(0.478307,-0.277974,0.0),(0.280072,0.067321,0.0),(-0.280072,0.067321,0.0),(0.344261,0.067321,0.0),(-0.344261,0.067321,0.0)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconRedPreferred1b-TEXCOORD',point=[(4.99E-4,4.99E-4),(0.999501,4.99E-4),(0.08424,0.056065),(0.915759,0.056065),(0.743447,0.401015),(0.256553,0.401015),(0.799243,0.401015),(0.749075,0.38975),(0.200757,0.401015),(0.250925,0.38975)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_4'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1,6,4,3,-1,3,1,6,-1,7,0,2,-1,2,5,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[3,2,0,-1,0,1,3,-1,6,4,3,-1,3,1,6,-1,8,0,2,-1,2,5,8,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred1b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred1b-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[6,1,0,-1,0,7,6,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[7,3,2,-1,2,9,7,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred1b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred1b-TEXCOORD')))]),
                Transform(DEF='DaybeaconRedPreferred2a',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,-0.166405,-0.75),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_6'),
                    geometry=IndexedFaceSet(coordIndex=[2,1,3,-1],normalIndex=[0,0,0,-1],texCoordIndex=[2,1,3,-1],
                      coord=Coordinate(DEF='DaybeaconRedPreferred2a-COORD',point=[(0.0,0.666405,0.0),(0.0,0.555162,0.0),(0.280072,0.067321,0.0),(-0.280072,0.067321,0.0),(0.344261,0.067321,0.0),(-0.344261,0.067321,0.0)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconRedPreferred2a-TEXCOORD',point=[(0.5,0.999501),(0.5,0.888369),(0.743447,0.401015),(0.256553,0.401015),(0.799243,0.401015),(0.749075,0.38975),(0.200757,0.401015),(0.250925,0.38975)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_7'),
                    geometry=IndexedFaceSet(coordIndex=[5,3,1,-1,1,0,5,-1,4,0,1,-1,1,2,4,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[6,3,1,-1,1,0,6,-1,4,0,1,-1,1,2,4,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred2a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred2a-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[5,0,4,-1],normalIndex=[1,1,1,-1],texCoordIndex=[7,1,5,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred2a-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred2a-TEXCOORD')))]),
                Transform(DEF='DaybeaconRedPreferred2b',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,-0.166405,-0.75),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Daybeacon_1'),
                    geometry=IndexedFaceSet(coordIndex=[2,3,4,-1,4,5,2,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[2,3,4,-1,4,5,2,-1],
                      coord=Coordinate(DEF='DaybeaconRedPreferred2b-COORD',point=[(-0.574646,-0.333595,0.0),(0.574646,-0.333595,0.0),(-0.478307,-0.277973,0.0),(0.478307,-0.277974,0.0),(0.280072,0.067321,0.0),(-0.280072,0.067321,0.0),(0.344261,0.067321,0.0),(-0.344261,0.067321,0.0)]),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(DEF='DaybeaconRedPreferred2b-TEXCOORD',point=[(4.99E-4,4.99E-4),(0.999501,4.99E-4),(0.08424,0.056065),(0.915759,0.056065),(0.743447,0.401015),(0.256553,0.401015),(0.799243,0.401015),(0.749075,0.38975),(0.200757,0.401015),(0.250925,0.38975)]))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_4'),
                    geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1,6,4,3,-1,3,1,6,-1,7,0,2,-1,2,5,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[3,2,0,-1,0,1,3,-1,6,4,3,-1,3,1,6,-1,8,0,2,-1,2,5,8,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred2b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred2b-TEXCOORD'))),
                  Shape(
                    appearance=Appearance(USE='Daybeacon_5'),
                    geometry=IndexedFaceSet(coordIndex=[6,1,0,-1,0,7,6,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[7,3,2,-1,2,9,7,-1],
                      coord=Coordinate(USE='DaybeaconRedPreferred2b-COORD'),
                      normal=Normal(USE='Daybeacon_3'),
                      texCoord=TextureCoordinate(USE='DaybeaconRedPreferred2b-TEXCOORD')))])])])]),
          Group(DEF='DaybeaconPile',
            children=[
            Transform(DEF='DaybeaconBase',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='Daybeacon_2'),
                  texture=ImageTexture(url=["Textures/BeaconStand06.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand06.jpg"])),
                geometry=IndexedFaceSet(coordIndex=[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1],normalIndex=[7,7,7,-1,7,7,7,-1,3,3,3,-1,3,3,3,-1,15,15,15,-1,15,15,15,-1,17,17,17,-1,17,17,17,-1,1,1,1,-1,1,1,1,-1,4,4,4,-1,4,4,4,-1,13,13,13,-1,13,13,13,-1,9,9,9,-1,9,9,9,-1],texCoordIndex=[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,16,11,17,-1,16,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1],
                  coord=Coordinate(DEF='DaybeaconBase-COORD',point=[(0.137639,0.0,0.33229),(0.33229,0.0,0.137639),(0.33229,0.0,-0.137639),(0.137639,0.0,-0.33229),(-0.137639,0.0,-0.33229),(-0.33229,0.0,-0.137639),(-0.33229,0.0,0.137639),(-0.137639,0.0,0.33229),(0.137639,3.65516,0.33229),(0.33229,3.65516,0.137639),(0.33229,3.65516,-0.137639),(0.137639,3.65516,-0.33229),(-0.137639,3.65516,-0.33229),(-0.33229,3.65516,-0.137639),(-0.33229,3.65516,0.137639),(-0.137639,3.65516,0.33229),(0.470872,3.65478,0.195042),(0.195042,3.65478,0.470872),(0.470872,3.65478,-0.195042),(0.195041,3.65478,-0.470872),(-0.195042,3.65478,-0.470872),(-0.470872,3.65478,-0.195042),(-0.470872,3.65478,0.195042),(-0.195042,3.65478,0.470872),(0.195042,3.78276,0.470872),(0.470872,3.78276,0.195042),(0.470872,3.78276,-0.195042),(0.195041,3.78276,-0.470872),(-0.195042,3.78276,-0.470872),(-0.470872,3.78276,-0.195042),(-0.470872,3.78276,0.195042),(-0.195042,3.78276,0.470872),(0.260098,3.78276,0.627932),(0.627932,3.78276,0.260098),(0.627932,3.78276,-0.260098),(0.260098,3.78276,-0.627932),(-0.260098,3.78276,-0.627932),(-0.627932,3.78276,-0.260098),(-0.627932,3.78276,0.260098),(-0.260098,3.78276,0.627932),(0.260098,3.90713,0.627932),(0.627932,3.90713,0.260098),(0.627932,3.90713,-0.260098),(0.260098,3.90713,-0.627932),(-0.260098,3.90713,-0.627932),(-0.627932,3.90713,-0.260098),(-0.627932,3.90713,0.260098),(-0.260098,3.90713,0.627932),(0.470872,0.0,-0.195042),(0.470872,0.0,0.195042)]),
                  normal=Normal(DEF='Daybeacon_8',vector=[(-0.3826,0.0,-0.9238),(-0.7071,0.0,-0.7071),(-0.9238,0.0,-0.3826),(1.0,0.0,0.0),(-1.0,0.0,0.0),(0.0,1.0,0.0),(0.3826,0.0,0.9238),(0.7071,0.0,0.7071),(0.9238,0.0,0.3826),(0.0,0.0,1.0),(0.0,-1.0,0.0),(-0.3826,0.0,0.9238),(0.3826,0.0,-0.9238),(-0.7071,0.0,0.7071),(-0.9238,0.0,0.3826),(0.7071,0.0,-0.7071),(0.9238,0.0,-0.3826),(0.0,0.0,-1.0)]),
                  texCoord=TextureCoordinate(DEF='DaybeaconBase-TEXCOORD',point=[(2.25,0.235249),(2.625,0.235249),(3.0,0.235249),(0.375,0.235249),(0.75,0.235249),(1.125,0.235249),(1.5,0.235249),(1.875,0.235249),(2.25,0.963385),(2.625,0.963385),(3.0,0.963385),(0.375,0.963385),(0.75,0.963385),(1.125,0.963385),(1.5,0.963385),(1.875,0.963385),(0.0,0.235249),(0.0,0.963385),(-0.22078,0.316178),(0.5,0.316178),(0.5,0.683823),(-0.22078,0.683823),(-0.22078,1.22078),(1.22078,1.22078),(0.5,1.51934),(1.51934,0.5),(1.22078,-0.22078),(0.5,-0.519337),(-0.22078,-0.22078),(-0.519337,0.5),(1.22078,0.683823),(1.22078,0.316178),(0.5,0.326533),(-0.461197,0.326533),(-0.461196,0.326533),(1.4612,1.4612),(1.85934,0.5),(0.5,1.85934),(-0.461196,1.4612),(-0.859337,0.5),(-0.461196,-0.461196),(0.5,-0.859337),(1.4612,-0.461196),(-0.461197,1.4612),(1.4612,0.683823),(1.4612,0.326533),(-0.461197,0.683823),(-0.461196,0.683823),(0.9995,0.004994),(4.99E-4,0.004994),(0.9995,9.995),(4.99E-4,9.995)]))),
              Shape(
                appearance=Appearance(
                  material=Material(USE='Daybeacon_2'),
                  texture=ImageTexture(url=["Textures/BeaconStand03.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand03.jpg"])),
                geometry=IndexedFaceSet(coordIndex=[16,19,18,-1,16,20,19,-1,16,21,20,-1,16,22,21,-1,16,23,22,-1,16,17,23,-1,17,25,24,-1,17,16,25,-1,16,26,25,-1,16,18,26,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,17,24,-1,32,34,33,-1,32,35,34,-1,32,36,35,-1,32,37,36,-1,32,38,37,-1,32,39,38,-1,32,41,40,-1,32,33,41,-1,33,42,41,-1,33,34,42,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,41,42,-1,40,42,43,-1,40,43,44,-1,40,44,45,-1,40,45,46,-1,40,46,47,-1],normalIndex=[10,10,10,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,6,8,6,-1,6,8,8,-1,8,16,8,-1,8,16,16,-1,16,12,16,-1,16,12,12,-1,12,0,12,-1,12,0,0,-1,0,2,0,-1,0,2,2,-1,2,14,2,-1,2,14,14,-1,14,11,14,-1,14,11,11,-1,11,6,11,-1,11,6,6,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,10,10,10,-1,6,8,6,-1,6,8,8,-1,8,16,8,-1,8,16,16,-1,16,12,16,-1,16,12,12,-1,12,0,12,-1,12,0,0,-1,0,2,0,-1,0,2,2,-1,2,14,2,-1,2,14,14,-1,14,11,14,-1,14,11,11,-1,11,6,11,-1,11,6,6,-1,5,5,5,-1,5,5,5,-1,5,5,5,-1,5,5,5,-1,5,5,5,-1,5,5,5,-1],texCoordIndex=[22,23,24,-1,22,25,23,-1,22,26,25,-1,22,27,26,-1,22,28,27,-1,22,29,28,-1,19,30,20,-1,19,31,30,-1,18,20,21,-1,18,19,20,-1,19,30,20,-1,19,31,30,-1,18,20,21,-1,18,19,20,-1,19,30,20,-1,19,31,30,-1,18,20,21,-1,18,19,20,-1,19,30,20,-1,19,31,30,-1,18,20,21,-1,18,19,20,-1,39,37,43,-1,39,35,37,-1,39,36,35,-1,39,42,36,-1,39,41,42,-1,39,40,41,-1,32,44,20,-1,32,45,44,-1,33,20,46,-1,33,32,20,-1,32,44,20,-1,32,45,44,-1,34,20,47,-1,34,32,20,-1,32,44,20,-1,32,45,44,-1,34,20,47,-1,34,32,20,-1,32,44,20,-1,32,45,44,-1,34,20,47,-1,34,32,20,-1,36,35,37,-1,36,37,38,-1,36,38,39,-1,36,39,40,-1,36,40,41,-1,36,41,42,-1],
                  coord=Coordinate(USE='DaybeaconBase-COORD'),
                  normal=Normal(USE='Daybeacon_8'),
                  texCoord=TextureCoordinate(USE='DaybeaconBase-TEXCOORD'))),
              Shape(
                appearance=Appearance(
                  material=Material(USE='Daybeacon_2'),
                  texture=ImageTexture(url=["Textures/BeaconStand08.png","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand08.png"])),
                geometry=IndexedFaceSet(coordIndex=[49,48,16,-1,18,16,48,-1],normalIndex=[3,3,3,-1,3,3,3,-1],solid=False,texCoordIndex=[48,49,50,-1,51,50,49,-1],
                  coord=Coordinate(USE='DaybeaconBase-COORD'),
                  normal=Normal(USE='Daybeacon_8'),
                  texCoord=TextureCoordinate(USE='DaybeaconBase-TEXCOORD')))]),
            Transform(DEF='DaybeaconGuardInside',
              children=[
              Shape(
                appearance=Appearance(DEF='Daybeacon_9',
                  material=Material(USE='Daybeacon_2'),
                  texture=ImageTexture(url=["Textures/BeaconStand07.png","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand07.png"])),
                geometry=IndexedFaceSet(coordIndex=[8,9,1,-1,1,0,8,-1,9,10,2,-1,2,1,9,-1,10,11,3,-1,3,2,10,-1,11,12,4,-1,4,3,11,-1,12,13,5,-1,5,4,12,-1,13,14,6,-1,6,5,13,-1,14,15,7,-1,7,6,14,-1,15,8,0,-1,0,7,15,-1],normalIndex=[4,7,7,-1,7,4,4,-1,7,5,5,-1,5,7,7,-1,5,1,1,-1,1,5,5,-1,1,0,0,-1,0,1,1,-1,0,3,3,-1,3,0,0,-1,3,6,6,-1,6,3,3,-1,6,2,2,-1,2,6,6,-1,2,4,4,-1,4,2,2,-1],texCoordIndex=[19,18,20,-1,20,21,19,-1,0,4,5,-1,5,2,0,-1,16,6,7,-1,7,17,16,-1,22,24,25,-1,25,23,22,-1,8,10,11,-1,11,9,8,-1,10,12,13,-1,13,11,10,-1,12,14,15,-1,15,13,12,-1,14,1,3,-1,3,15,14,-1],
                  coord=Coordinate(DEF='Daybeacon_10',point=[(0.260098,3.90713,0.627932),(0.627932,3.90713,0.260098),(0.627932,3.90713,-0.260098),(0.260098,3.90713,-0.627932),(-0.260098,3.90713,-0.627932),(-0.627932,3.90713,-0.260098),(-0.627932,3.90713,0.260098),(-0.260098,3.90713,0.627932),(0.305287,4.60083,0.737028),(0.737028,4.60083,0.305287),(0.737028,4.60083,-0.305287),(0.305287,4.60083,-0.737028),(-0.305287,4.60083,-0.737028),(-0.737028,4.60083,-0.305287),(-0.737028,4.60083,0.305287),(-0.305287,4.60083,0.737028)]),
                  normal=Normal(vector=[(0.3772,0.1678,0.9107),(-0.3772,0.1678,0.9107),(0.3772,0.1678,-0.9107),(0.9107,0.1678,0.3772),(-0.3772,0.1678,-0.9107),(-0.9107,0.1678,0.3772),(0.9107,0.1678,-0.3772),(-0.9107,0.1678,-0.3772)]),
                  texCoord=TextureCoordinate(DEF='Daybeacon_11',point=[(2.625,0.9995),(2.25,0.9995),(2.625,4.99E-4),(2.25,4.99E-4),(3.0,0.9995),(3.0,4.99E-4),(0.375,0.9995),(0.375,4.99E-4),(0.75,0.9995),(0.75,4.99E-4),(1.125,0.9995),(1.125,4.99E-4),(1.5,0.9995),(1.5,4.99E-4),(1.875,0.9995),(1.875,4.99E-4),(0.0,0.9995),(0.0,4.99E-4),(2.51281,0.9995),(2.13781,0.9995),(2.51281,4.99E-4),(2.13781,4.99E-4),(0.131827,0.9995),(0.131827,4.99E-4),(0.506827,0.9995),(0.506827,4.99E-4)])))]),
            Transform(DEF='DaybeaconGuardOutside',
              children=[
              Shape(
                appearance=Appearance(USE='Daybeacon_9'),
                geometry=IndexedFaceSet(coordIndex=[9,8,1,-1,0,1,8,-1,10,9,2,-1,1,2,9,-1,11,10,3,-1,2,3,10,-1,12,11,4,-1,3,4,11,-1,13,12,5,-1,4,5,12,-1,14,13,6,-1,5,6,13,-1,15,14,7,-1,6,7,14,-1,8,15,0,-1,7,0,15,-1],normalIndex=[6,3,6,-1,3,6,3,-1,1,6,1,-1,6,1,6,-1,5,1,5,-1,1,5,1,-1,7,5,7,-1,5,7,5,-1,2,7,2,-1,7,2,7,-1,0,2,0,-1,2,0,2,-1,4,0,4,-1,0,4,0,-1,3,4,3,-1,4,3,4,-1],texCoordIndex=[18,19,20,-1,21,20,19,-1,4,0,5,-1,2,5,0,-1,6,16,7,-1,17,7,16,-1,24,22,25,-1,23,25,22,-1,10,8,11,-1,9,11,8,-1,12,10,13,-1,11,13,10,-1,14,12,15,-1,13,15,12,-1,1,14,3,-1,15,3,14,-1],
                  coord=Coordinate(USE='Daybeacon_10'),
                  normal=Normal(vector=[(-0.9107,-0.1678,0.3772),(0.9107,-0.1678,-0.3772),(-0.9107,-0.1678,-0.3772),(0.3772,-0.1678,0.9107),(-0.3772,-0.1678,0.9107),(0.3772,-0.1678,-0.9107),(0.9107,-0.1678,0.3772),(-0.3772,-0.1678,-0.9107)]),
                  texCoord=TextureCoordinate(USE='Daybeacon_11')))])])])])),
    ProtoInstance(name='Daybeacon')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DaybeaconPrototype.py")
