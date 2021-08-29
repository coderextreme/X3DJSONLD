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
    meta(content='LightPostPrototype.x3d',name='title'),
    meta(content='Light Post Prototype, with options for Light On/Off and Light Glow Scale.',name='description'),
    meta(content='Planet 9 Studios, Inc., San Francisco, CA',name='creator'),
    meta(content='Christian Greuel, Director of Art and Production',name='producer'),
    meta(content='Danny Lee, Christian Greuel',name='modelers'),
    meta(content='http://www.planet9.com',name='reference'),
    meta(content='IHO S -57: http://www.caris.com/s -57',name='reference'),
    meta(content='Xj3D Format Converter',name='translator'),
    meta(content='17 August 2006',name='created'),
    meta(content='18 August 2006',name='translated'),
    meta(content='24 March 2012',name='modified'),
    meta(content='floating-point array error',name='error'),
    meta(content='../../license.html',name='license'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/LightPostPrototype.x3d',name='identifier')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='LightPost',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='LightType',type='SFInt32',value=1),
        field(accessType='inputOutput',name='LightGlow',type='SFVec3f',value=(1.0,1.0,1.0))]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='LightPostGeometry',
          children=[
          Group(DEF='LightPostPile',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='Post_1',ambientIntensity=0.0,diffuseColor=(0.588235,0.588235,0.588235),shininess=0.145),
                texture=ImageTexture(url=["Textures/BeaconStand06.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand06.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1],normalIndex=[9,9,9,-1,9,9,9,-1,11,11,11,-1,11,11,11,-1,18,18,18,-1,18,18,18,-1,16,16,16,-1,16,16,16,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,17,17,17,-1,17,17,17,-1,15,15,15,-1,15,15,15,-1],texCoordIndex=[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,16,11,17,-1,16,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1],
                coord=Coordinate(DEF='LightPostPile-COORD',point=[(0.0,0.0,0.0865),(0.061165,0.0,0.061165),(0.0865,0.0,0.0),(0.061165,0.0,-0.061165),(0.0,0.0,-0.0865),(-0.061165,0.0,-0.061165),(-0.0865,0.0,0.0),(-0.061165,0.0,0.061165),(0.0,8.77929,0.0865),(0.061165,8.77929,0.061165),(0.0865,8.77929,0.0),(0.061165,8.77929,-0.061165),(0.0,8.77929,-0.0865),(-0.061165,8.77929,-0.061165),(-0.0865,8.77929,0.0),(-0.061165,8.77929,0.061165),(0.028183,8.77929,0.05061),(0.057711,8.77929,-5.32E-4),(0.028183,8.77929,-0.051675),(-0.030871,8.77929,-0.051675),(-0.060398,8.77929,-5.32E-4),(-0.030871,8.77929,0.05061),(0.057711,8.96436,-5.32E-4),(0.028183,8.96436,-0.051675),(-0.030871,8.96436,-0.051675),(-0.060398,8.96436,-5.32E-4),(-0.030871,8.96436,0.05061),(0.028183,8.96436,0.05061),(0.09812,8.98243,-5.32E-4),(0.048388,8.98243,-0.086671),(-0.051075,8.98243,-0.086671),(-0.100808,8.98243,-5.32E-4),(-0.051075,8.98243,0.085605),(0.048388,8.98243,0.085605)]),
                normal=Normal(DEF='Post_2',vector=[(-0.3826,0.0,-0.9238),(0.5,0.0,0.866),(-0.9238,0.0,-0.3826),(1.0,0.0,0.0),(-0.4999,0.0,0.866),(0.4999,0.0,-0.866),(-1.0,0.0,0.0),(0.204,-0.9129,0.3534),(0.0,1.0,0.0),(0.3826,0.0,0.9238),(-0.5,0.0,-0.866),(0.9238,0.0,0.3826),(-0.204,-0.9129,0.3534),(0.204,-0.9129,-0.3534),(0.4081,-0.9129,0.0),(-0.3826,0.0,0.9238),(0.3826,0.0,-0.9238),(-0.9238,0.0,0.3826),(0.9238,0.0,-0.3826),(-0.204,-0.9129,-0.3534),(-0.4081,-0.9129,0.0)]),
                texCoord=TextureCoordinate(DEF='LightPostPile-TEXCOORD',point=[(2.25,0.235249),(2.625,0.235249),(3.0,0.235249),(0.375,0.235249),(0.75,0.235249),(1.125,0.235249),(1.5,0.235249),(1.875,0.235249),(2.25,0.963385),(2.625,0.963385),(3.0,0.963385),(0.375,0.963385),(0.75,0.963385),(1.125,0.963385),(1.5,0.963385),(1.875,0.963385),(0.0,0.235249),(0.0,0.963385),(3.0,4.99E-4),(1.4612,1.4612),(1.85934,0.5),(0.5,1.85934),(-0.461196,1.4612),(-0.859337,0.5),(-0.461196,-0.461196),(0.5,-0.859337),(1.4612,-0.461196),(2.37433,4.99E-4),(3.62567,4.99E-4),(0.374334,4.99E-4),(1.0,4.99E-4),(1.62567,4.99E-4),(3.0,0.428459),(3.62567,0.428459),(0.374334,0.428459),(1.0,0.428459),(1.62567,0.428459),(2.37433,0.428459),(3.0,0.485885),(3.62567,0.485885),(0.374334,0.485885),(1.0,0.485885),(1.62567,0.485885),(2.37433,0.485885),(-0.374334,4.99E-4),(-0.374334,0.428459),(-1.0,0.485885),(-0.374334,0.485885)]))),
            Shape(
              appearance=Appearance(
                material=Material(USE='Post_1'),
                texture=ImageTexture(url=["Textures/BeaconStand03.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand03.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[8,9,10,-1,8,10,11,-1,8,11,12,-1,8,12,13,-1,8,13,14,-1,8,14,15,-1],normalIndex=[8,8,8,-1,8,8,8,-1,8,8,8,-1,8,8,8,-1,8,8,8,-1,8,8,8,-1],texCoordIndex=[20,19,21,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,20,24,25,-1,20,25,26,-1],
                coord=Coordinate(USE='LightPostPile-COORD'),
                normal=Normal(USE='Post_2'),
                texCoord=TextureCoordinate(USE='LightPostPile-TEXCOORD'))),
            Shape(
              appearance=Appearance(
                material=Material(USE='Post_1'),
                texture=ImageTexture(url=["Textures/BuoyGreen07.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BuoyGreen07.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[17,23,22,-1,17,18,23,-1,18,24,23,-1,18,19,24,-1,19,25,24,-1,19,20,25,-1,20,26,25,-1,20,21,26,-1,21,27,26,-1,21,16,27,-1,16,22,27,-1,16,17,22,-1,28,29,30,-1,28,30,31,-1,28,31,32,-1,28,32,33,-1,22,23,29,-1,29,28,22,-1,23,24,30,-1,30,29,23,-1,24,25,31,-1,31,30,24,-1,25,26,32,-1,32,31,25,-1,26,27,33,-1,33,32,26,-1,27,22,28,-1,28,33,27,-1],normalIndex=[3,5,3,-1,3,5,5,-1,5,10,5,-1,5,10,10,-1,10,6,10,-1,10,6,6,-1,6,4,6,-1,6,4,4,-1,4,1,4,-1,4,1,1,-1,1,3,1,-1,1,3,3,-1,8,8,8,-1,8,8,8,-1,8,8,8,-1,8,8,8,-1,14,13,13,-1,13,14,14,-1,13,19,19,-1,19,13,13,-1,19,20,20,-1,20,19,19,-1,20,12,12,-1,12,20,20,-1,12,7,7,-1,7,12,12,-1,7,14,14,-1,14,7,7,-1],texCoordIndex=[18,33,32,-1,18,28,33,-1,44,34,45,-1,44,29,34,-1,29,35,34,-1,29,30,35,-1,30,36,35,-1,30,31,36,-1,31,37,36,-1,31,27,37,-1,27,32,37,-1,27,18,32,-1,46,47,40,-1,46,40,41,-1,38,41,42,-1,38,42,43,-1,32,33,39,-1,39,38,32,-1,45,34,40,-1,40,47,45,-1,34,35,41,-1,41,40,34,-1,35,36,42,-1,42,41,35,-1,36,37,43,-1,43,42,36,-1,37,32,38,-1,38,43,37,-1],
                coord=Coordinate(USE='LightPostPile-COORD'),
                normal=Normal(USE='Post_2'),
                texCoord=TextureCoordinate(USE='LightPostPile-TEXCOORD')))]),
          Transform(DEF='LightPostDayboard1',translation=(0.0,8.594,0.0),
            children=[
            Shape(
              appearance=Appearance(DEF='Post_3',
                material=Material(USE='Post_1'),
                texture=ImageTexture(DEF='Post_4',url=["Textures/DaybeaconWhite.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconWhite.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[8,12,13,-1,13,5,8,-1,15,9,12,-1,9,15,6,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[12,20,21,-1,21,11,12,-1,26,14,20,-1,14,26,8,-1],
                coord=Coordinate(DEF='LightPostDayboard1-COORD',point=[(2.75E-4,-0.340394,0.0962),(-0.339843,-2.75E-4,0.0962),(0.339843,2.75E-4,0.0962),(-2.75E-4,0.340394,0.0962),(-1.01E-4,-0.26277,0.0962),(-0.262972,1.01E-4,0.0962),(0.262609,2.62E-4,0.0962),(-2.61E-4,0.263134,0.0962),(-0.131435,-0.131435,0.0962),(0.131436,0.131436,0.0962),(0.170059,0.170059,0.0962),(-0.170059,-0.170059,0.0962),(0.0,0.0,0.0962),(-0.131617,0.131617,0.0962),(0.170059,-0.170059,0.0962),(0.131254,-0.131254,0.0962),(-0.170059,0.170059,0.0962),(0.0,0.0,0.0962)]),
                normal=Normal(DEF='Post_5',vector=[(0.0,0.0,1.0),(0.0,0.0,-1.0)]),
                texCoord=TextureCoordinate(DEF='LightPostDayboard1-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.997885,0.999501),(4.99E-4,0.9995),(0.948565,0.05045),(0.050918,0.050449),(0.948015,0.949551),(0.050368,0.949551),(0.999501,0.500153),(0.499847,0.999501),(0.500153,4.99E-4),(4.99E-4,0.499847),(0.250519,0.249981),(0.500088,0.05045),(0.750172,0.749329),(0.500087,0.949551),(0.5,0.9995),(0.499919,0.949551),(0.5,4.99E-4),(0.499015,0.05045),(0.500345,0.499654),(0.250173,0.749673),(0.050643,0.5),(0.998693,0.5),(0.94829,0.500001),(0.94829,0.5),(0.749826,0.250326),(0.001307,0.5),(0.499467,0.500001)]))),
            Shape(
              appearance=Appearance(DEF='Post_6',
                material=Material(ambientIntensity=0.0,diffuseColor=(0.752941,0.752941,0.752941),shininess=0.145),
                texture=ImageTexture(USE='Post_4')),
              geometry=IndexedFaceSet(coordIndex=[10,3,7,-1,7,9,10,-1,14,15,4,-1,4,0,14,-1,11,0,4,-1,4,8,11,-1,16,13,7,-1,7,3,16,-1,10,9,6,-1,6,2,10,-1,11,8,5,-1,5,1,11,-1,14,2,6,-1,6,15,14,-1,16,1,5,-1,5,13,16,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[16,3,7,-1,7,15,16,-1,23,25,4,-1,4,0,23,-1,18,0,4,-1,4,13,18,-1,27,22,7,-1,7,3,27,-1,16,15,6,-1,6,2,16,-1,18,13,5,-1,5,1,18,-1,23,2,6,-1,6,25,23,-1,27,1,5,-1,5,22,27,-1],
                coord=Coordinate(USE='LightPostDayboard1-COORD'),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(USE='LightPostDayboard1-TEXCOORD'))),
            Shape(
              appearance=Appearance(DEF='Post_7',
                material=Material(USE='Post_1'),
                texture=ImageTexture(url=["Textures/DaybeaconBack.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconBack.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[17,14,0,-1,0,11,17,-1,16,17,11,-1,11,1,16,-1,10,2,14,-1,14,17,10,-1,3,10,17,-1,17,16,3,-1],normalIndex=[1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1],texCoordIndex=[28,24,4,-1,4,19,28,-1,22,28,19,-1,19,5,22,-1,17,6,24,-1,24,28,17,-1,7,17,28,-1,28,22,7,-1],
                coord=Coordinate(USE='LightPostDayboard1-COORD'),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(USE='LightPostDayboard1-TEXCOORD'))),
            Shape(
              appearance=Appearance(DEF='Post_8',
                material=Material(USE='Post_1'),
                texture=ImageTexture(url=["Textures/DaybeaconBlack.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconBlack.jpg"])),
              geometry=IndexedFaceSet(coordIndex=[15,12,8,-1,8,4,15,-1,9,7,13,-1,13,12,9,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[26,20,12,-1,12,10,26,-1,14,9,21,-1,21,20,14,-1],
                coord=Coordinate(USE='LightPostDayboard1-COORD'),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(USE='LightPostDayboard1-TEXCOORD')))]),
          Transform(DEF='LightPostDayboard2',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,8.594,0.0),
            children=[
            Shape(
              appearance=Appearance(USE='Post_3'),
              geometry=IndexedFaceSet(coordIndex=[8,12,13,-1,13,5,8,-1,15,9,12,-1,9,15,6,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[12,20,21,-1,21,11,12,-1,26,14,20,-1,14,26,8,-1],
                coord=Coordinate(DEF='LightPostDayboard2-COORD',point=[(2.75E-4,-0.340394,0.0962),(-0.339843,-2.75E-4,0.0962),(0.339843,2.75E-4,0.0962),(-2.75E-4,0.340394,0.0962),(-1.01E-4,-0.26277,0.0962),(-0.262972,1.01E-4,0.0962),(0.262609,2.62E-4,0.0962),(-2.61E-4,0.263134,0.0962),(-0.131435,-0.131435,0.0962),(0.131436,0.131436,0.0962),(0.170059,0.170059,0.0962),(-0.170059,-0.170059,0.0962),(0.0,0.0,0.0962),(-0.131617,0.131617,0.0962),(0.170059,-0.170059,0.0962),(0.131254,-0.131254,0.0962),(-0.170059,0.170059,0.0962),(0.0,0.0,0.0962)]),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(DEF='LightPostDayboard2-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.997885,0.999501),(4.99E-4,0.9995),(0.948565,0.05045),(0.050918,0.050449),(0.948015,0.949551),(0.050368,0.949551),(0.999501,0.500153),(0.499847,0.999501),(0.500153,4.99E-4),(4.99E-4,0.499847),(0.250519,0.249981),(0.500088,0.05045),(0.750172,0.749329),(0.500087,0.949551),(0.5,0.9995),(0.499919,0.949551),(0.5,4.99E-4),(0.499015,0.05045),(0.500345,0.499654),(0.250173,0.749673),(0.050643,0.5),(0.998693,0.5),(0.94829,0.500001),(0.94829,0.5),(0.749826,0.250326),(0.001307,0.5),(0.499467,0.500001)]))),
            Shape(
              appearance=Appearance(USE='Post_6'),
              geometry=IndexedFaceSet(coordIndex=[10,3,7,-1,7,9,10,-1,14,15,4,-1,4,0,14,-1,11,0,4,-1,4,8,11,-1,16,13,7,-1,7,3,16,-1,10,9,6,-1,6,2,10,-1,11,8,5,-1,5,1,11,-1,14,2,6,-1,6,15,14,-1,16,1,5,-1,5,13,16,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[16,3,7,-1,7,15,16,-1,23,25,4,-1,4,0,23,-1,18,0,4,-1,4,13,18,-1,27,22,7,-1,7,3,27,-1,16,15,6,-1,6,2,16,-1,18,13,5,-1,5,1,18,-1,23,2,6,-1,6,25,23,-1,27,1,5,-1,5,22,27,-1],
                coord=Coordinate(USE='LightPostDayboard2-COORD'),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(USE='LightPostDayboard2-TEXCOORD'))),
            Shape(
              appearance=Appearance(USE='Post_7'),
              geometry=IndexedFaceSet(coordIndex=[17,14,0,-1,0,11,17,-1,16,17,11,-1,11,1,16,-1,10,2,14,-1,14,17,10,-1,3,10,17,-1,17,16,3,-1],normalIndex=[1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1],texCoordIndex=[28,24,4,-1,4,19,28,-1,22,28,19,-1,19,5,22,-1,17,6,24,-1,24,28,17,-1,7,17,28,-1,28,22,7,-1],
                coord=Coordinate(USE='LightPostDayboard2-COORD'),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(USE='LightPostDayboard2-TEXCOORD'))),
            Shape(
              appearance=Appearance(USE='Post_8'),
              geometry=IndexedFaceSet(coordIndex=[15,12,8,-1,8,4,15,-1,9,7,13,-1,13,12,9,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[26,20,12,-1,12,10,26,-1,14,9,21,-1,21,20,14,-1],
                coord=Coordinate(USE='LightPostDayboard2-COORD'),
                normal=Normal(USE='Post_5'),
                texCoord=TextureCoordinate(USE='LightPostDayboard2-TEXCOORD')))]),
          Switch(DEF='LightWhite',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='LightType')]),
            children=[
            Transform(DEF='LightOffWhite',translation=(-0.003122,6.56572,-0.00303),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='Post_1'),
                  texture=ImageTexture(url=["Textures/BuoyWhite07.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BuoyWhite07.jpg"])),
                geometry=IndexedFaceSet(coordIndex=[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,8,13,14,-1,8,14,15,-1,8,15,16,-1,8,16,17,-1,7,8,13,-1,14,13,8,-1,9,10,15,-1,15,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,7,8,-1,8,17,12,-1,1,18,7,-1,1,2,18,-1,2,9,18,-1,2,3,9,-1,7,18,13,-1,13,8,7,-1,18,9,14,-1,14,13,18,-1],normalIndex=[13,18,7,-1,13,2,18,-1,13,5,2,-1,13,17,5,-1,13,12,17,-1,13,7,12,-1,2,4,3,-1,2,5,4,-1,5,15,4,-1,5,17,15,-1,17,11,15,-1,17,12,11,-1,12,8,11,-1,12,7,8,-1,0,9,10,-1,0,10,16,-1,0,16,6,-1,0,6,1,-1,8,0,9,-1,10,9,0,-1,3,4,16,-1,16,10,3,-1,4,15,6,-1,6,16,4,-1,15,11,1,-1,1,6,15,-1,11,8,0,-1,0,1,11,-1,7,14,8,-1,7,18,14,-1,18,3,14,-1,18,2,3,-1,8,14,9,-1,9,0,8,-1,14,3,10,-1,10,9,14,-1],texCoordIndex=[0,2,1,-1,0,3,19,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,20,21,14,-1,20,14,15,-1,20,15,16,-1,8,16,17,-1,7,8,13,-1,14,21,20,-1,9,10,15,-1,15,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,7,8,-1,8,17,12,-1,1,18,7,-1,1,2,18,-1,19,9,22,-1,19,3,9,-1,7,18,13,-1,13,8,7,-1,22,9,14,-1,14,21,22,-1],
                  coord=Coordinate(DEF='Post_9',point=[(0.003149,2.41685,0.003059),(0.06215,2.41685,0.00303),(0.032623,2.41685,-0.048112),(-0.026431,2.41685,-0.048112),(-0.055905,2.41685,0.003059),(-0.026378,2.41685,0.054202),(0.032676,2.41685,0.054202),(0.06215,2.53089,0.00303),(0.03533,2.57828,0.00303),(-0.026431,2.53089,-0.048112),(-0.055905,2.53089,0.003059),(-0.026378,2.53089,0.054202),(0.032676,2.53089,0.054202),(0.019213,2.57828,-0.024885),(-0.013021,2.57828,-0.024885),(-0.029085,2.57828,0.003059),(-0.012968,2.57828,0.030975),(0.019266,2.57828,0.030975),(0.03257,2.53089,-0.048142)]),
                  normal=Normal(DEF='Post_10',vector=[(0.4913,0.8237,0.2827),(0.3046,0.7938,0.5262),(-0.3965,-0.6099,-0.686),(-0.4864,0.2367,-0.841),(-0.9715,0.2367,4.0E-4),(-0.7923,-0.61,4.0E-4),(-0.3039,0.7939,0.5264),(0.7923,-0.61,-4.0E-4),(0.9762,0.212,0.0453),(0.2976,0.4869,-0.8211),(-0.3336,0.7461,-0.5761),(0.4862,0.2367,0.8411),(0.3965,-0.6099,0.686),(0.0,-1.0,0.0),(0.4852,0.2366,-0.8417),(-0.4857,0.2366,0.8414),(-0.6078,0.794,5.0E-4),(-0.3962,-0.6099,0.6862),(0.3962,-0.6099,-0.6862)]),
                  texCoord=TextureCoordinate(point=[(2.0,0.486349),(3.00028,0.486349),(3.62636,0.486349),(0.374691,0.486349),(1.0,0.486349),(1.62567,0.486349),(2.37433,0.486349),(3.00028,0.84887),(3.0005,0.9995),(0.374691,0.84887),(1.0,0.84887),(1.62567,0.84887),(2.37433,0.84887),(3.62694,0.9995),(0.374988,0.9995),(1.0,0.9995),(1.62567,0.9995),(2.37433,0.9995),(3.62706,0.84887),(-0.373638,0.486349),(-0.999495,0.9995),(-0.373059,0.9995),(-0.372942,0.84887)])))]),
            Transform(DEF='LightOnWhite',translation=(0.0,9.09678,0.0),
              children=[
              Transform(DEF='LightOnWhiteBulb',translation=(-0.003122,-2.53106,-0.00303),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(ambientIntensity=0.0,diffuseColor=(0.752941,0.752941,0.752941),emissiveColor=(0.752941,0.752941,0.752941),shininess=0.145)),
                  geometry=IndexedFaceSet(coordIndex=[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,1,6,-1,3,10,9,-1,3,4,10,-1,4,11,10,-1,4,5,11,-1,5,12,11,-1,5,6,12,-1,6,7,12,-1,6,1,7,-1,8,13,14,-1,8,14,15,-1,8,15,16,-1,8,16,17,-1,7,8,13,-1,14,13,8,-1,9,10,15,-1,15,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,7,8,-1,8,17,12,-1,1,18,7,-1,1,2,18,-1,2,9,18,-1,2,3,9,-1,7,18,13,-1,13,8,7,-1,18,9,14,-1,14,13,18,-1],normalIndex=[13,18,7,-1,13,2,18,-1,13,5,2,-1,13,17,5,-1,13,12,17,-1,13,7,12,-1,2,4,3,-1,2,5,4,-1,5,15,4,-1,5,17,15,-1,17,11,15,-1,17,12,11,-1,12,8,11,-1,12,7,8,-1,0,9,10,-1,0,10,16,-1,0,16,6,-1,0,6,1,-1,8,0,9,-1,10,9,0,-1,3,4,16,-1,16,10,3,-1,4,15,6,-1,6,16,4,-1,15,11,1,-1,1,6,15,-1,11,8,0,-1,0,1,11,-1,7,14,8,-1,7,18,14,-1,18,3,14,-1,18,2,3,-1,8,14,9,-1,9,0,8,-1,14,3,10,-1,10,9,14,-1],
                    coord=Coordinate(USE='Post_9'),
                    normal=Normal(USE='Post_10')))]),
              Billboard(axisOfRotation=(0.0,0.0,0.0),
                children=[
                Transform(DEF='LightOnWhiteGlow',rotation=(-1.0,0.0,0.0,-1.57079),translation=(0.0,0.0,-5.0E-5),
                  IS=IS(
                    connect=[
                    connect(nodeField='scale',protoField='LightGlow')]),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(ambientIntensity=0.0,diffuseColor=(0.752941,0.752941,0.752941),emissiveColor=(0.752941,0.752941,0.752941),shininess=0.145,transparency=0.1),
                      texture=ImageTexture(url=["Textures/LightOnWhiteGlow.png","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/LightOnWhiteGlow.png"])),
                    geometry=IndexedFaceSet(coordIndex=[2,0,3,-1,1,3,0,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[2,0,3,-1,1,3,0,-1],
                      coord=Coordinate(point=[(-0.5,0.0,0.5),(0.5,0.0,0.5),(-0.5,0.0,-0.5),(0.5,0.0,-0.5)]),
                      normal=Normal(vector=[(0.0,1.0,0.0)]),
                      texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(0.0,1.0),(1.0,1.0)])))])])])])])])),
    ProtoInstance(name='LightPost')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LightPostPrototype.py")
