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
    meta(content='DangerDaybeacon.x3d',name='title'),
    meta(content='Danger Daybeacon, 4-feet tall',name='description'),
    meta(content='Planet 9 Studios, Inc., San Francisco, CA',name='creator'),
    meta(content='Christian Greuel, Director of Art and Production',name='producer'),
    meta(content='Danny Lee, Christian Greuel',name='modelers'),
    meta(content='http://www.planet9.com',name='reference'),
    meta(content='Xj3D Format Converter',name='translator'),
    meta(content='17 August 2006',name='created'),
    meta(content='18 August 2006',name='translated'),
    meta(content='24 March 2012',name='modified'),
    meta(content='../../license.html',name='license'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/DangerDaybeacon.x3d',name='identifier')]),
  Scene=Scene(
    children=[
    Group(DEF='DangerDaybeacon',
      children=[
      Group(DEF='DaybeaconDangerPile',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='Danger_1',ambientIntensity=0.0,diffuseColor=(0.588235,0.588235,0.588235),shininess=0.145),
            texture=ImageTexture(url=["Textures/BeaconStand06.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand06.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1],normalIndex=[3,3,3,-1,3,3,3,-1,4,4,4,-1,4,4,4,-1,8,8,8,-1,8,8,8,-1,6,6,6,-1,6,6,6,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,7,7,7,-1,7,7,7,-1,5,5,5,-1,5,5,5,-1],texCoordIndex=[0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,16,11,17,-1,16,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1],
            coord=Coordinate(DEF='DaybeaconDangerPile-COORD',point=[(0.0,0.0,0.0865),(0.061165,0.0,0.061165),(0.0865,0.0,0.0),(0.061165,0.0,-0.061165),(0.0,0.0,-0.0865),(-0.061165,0.0,-0.061165),(-0.0865,0.0,0.0),(-0.061165,0.0,0.061165),(0.0,0.879067,0.0865),(0.061165,0.879067,0.061165),(0.0865,0.879067,0.0),(0.061165,0.879067,-0.061165),(0.0,0.879067,-0.0865),(-0.061165,0.879067,-0.061165),(-0.0865,0.879067,0.0),(-0.061165,0.879067,0.061165)]),
            normal=Normal(DEF='Danger_2',vector=[(-0.3826,0.0,-0.9238),(-0.9238,0.0,-0.3826),(0.0,1.0,0.0),(0.3826,0.0,0.9238),(0.9238,0.0,0.3826),(-0.3826,0.0,0.9238),(0.3826,0.0,-0.9238),(-0.9238,0.0,0.3826),(0.9238,0.0,-0.3826)]),
            texCoord=TextureCoordinate(DEF='DaybeaconDangerPile-TEXCOORD',point=[(2.25,0.235249),(2.625,0.235249),(3.0,0.235249),(0.375,0.235249),(0.75,0.235249),(1.125,0.235249),(1.5,0.235249),(1.875,0.235249),(2.25,0.963385),(2.625,0.963385),(3.0,0.963385),(0.375,0.963385),(0.75,0.963385),(1.125,0.963385),(1.5,0.963385),(1.875,0.963385),(0.0,0.235249),(0.0,0.963385),(1.4612,1.4612),(1.85934,0.5),(0.5,1.85934),(-0.461196,1.4612),(-0.859337,0.5),(-0.461196,-0.461196),(0.5,-0.859337),(1.4612,-0.461196)]))),
        Shape(
          appearance=Appearance(
            material=Material(USE='Danger_1'),
            texture=ImageTexture(url=["Textures/BeaconStand03.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/BeaconStand03.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[8,9,10,-1,8,10,11,-1,8,11,12,-1,8,12,13,-1,8,13,14,-1,8,14,15,-1],normalIndex=[2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1],texCoordIndex=[19,18,20,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,24,-1,19,24,25,-1],
            coord=Coordinate(USE='DaybeaconDangerPile-COORD'),
            normal=Normal(USE='Danger_2'),
            texCoord=TextureCoordinate(USE='DaybeaconDangerPile-TEXCOORD')))]),
      Transform(DEF='DaybeaconDangerText1',translation=(0.0,0.878791,0.0),
        children=[
        Shape(
          appearance=Appearance(DEF='Danger_3',
            material=Material(USE='Danger_1'),
            texture=ImageTexture(url=["Textures/DaybeaconWarning.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconWarning.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[6,7,4,-1,5,4,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[8,9,10,-1,11,10,9,-1],
            coord=Coordinate(DEF='DaybeaconDangerText1-COORD',point=[(0.000275,-0.340394,0.0962),(-0.339843,-0.000275,0.0962),(0.339843,0.000275,0.0962),(-0.000275,0.340394,0.0962),(-0.000101,-0.26277,0.0962),(-0.262972,0.000101,0.0962),(0.262609,0.000262,0.0962),(-0.000261,0.263134,0.0962)]),
            normal=Normal(DEF='Danger_4',vector=[(0.0,0.0,1.0),(0.0,0.0,-1.0)]),
            texCoord=TextureCoordinate(DEF='DaybeaconDangerText1-TEXCOORD',point=[(0.999501,0.000499),(0.002115,0.000499),(0.997885,0.999501),(0.000499,0.9995),(0.948565,0.05045),(0.050918,0.050449),(0.948015,0.949551),(0.050368,0.949551),(0.999501,0.500153),(0.499847,0.999501),(0.500153,0.000499),(0.000499,0.499847)]))),
        Shape(
          appearance=Appearance(DEF='Danger_5',
            material=Material(ambientIntensity=0.0,diffuseColor=(0.752941,0.305882,0.066666),emissiveColor=(0.752941,0.305882,0.066666),shininess=0.145),
            texture=ImageTexture(url=["Textures/DaybeaconOrange.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconOrange.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],
            coord=Coordinate(USE='DaybeaconDangerText1-COORD'),
            normal=Normal(USE='Danger_4'),
            texCoord=TextureCoordinate(USE='DaybeaconDangerText1-TEXCOORD'))),
        Shape(
          appearance=Appearance(DEF='Danger_6',
            material=Material(USE='Danger_1'),
            texture=ImageTexture(url=["Textures/DaybeaconBack.jpg","https://savage.nps.edu/Savage/HarborEquipment/NavigationAids/Textures/DaybeaconBack.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[7,6,4,-1,4,5,7,-1],
            coord=Coordinate(USE='DaybeaconDangerText1-COORD'),
            normal=Normal(USE='Danger_4'),
            texCoord=TextureCoordinate(USE='DaybeaconDangerText1-TEXCOORD')))]),
      Transform(DEF='DaybeaconDangerText2',rotation=(0.0,-1.0,0.0,-3.14159),translation=(0.0,0.878791,0.0),
        children=[
        Shape(
          appearance=Appearance(USE='Danger_3'),
          geometry=IndexedFaceSet(coordIndex=[6,7,4,-1,5,4,7,-1],normalIndex=[0,0,0,-1,0,0,0,-1],texCoordIndex=[8,9,10,-1,11,10,9,-1],
            coord=Coordinate(DEF='DaybeaconDangerText2-COORD',point=[(2.75E-4,-0.340394,0.0962),(-0.339843,-2.75E-4,0.0962),(0.339843,2.75E-4,0.0962),(-2.75E-4,0.340394,0.0962),(-1.01E-4,-0.26277,0.0962),(-0.262972,1.01E-4,0.0962),(0.262609,2.62E-4,0.0962),(-2.61E-4,0.263134,0.0962)]),
            normal=Normal(USE='Danger_4'),
            texCoord=TextureCoordinate(DEF='DaybeaconDangerText2-TEXCOORD',point=[(0.999501,4.99E-4),(0.002115,4.99E-4),(0.997885,0.999501),(4.99E-4,0.9995),(0.948565,0.05045),(0.050918,0.050449),(0.948015,0.949551),(0.050368,0.949551),(0.999501,0.500153),(0.499847,0.999501),(0.500153,4.99E-4),(4.99E-4,0.499847)]))),
        Shape(
          appearance=Appearance(USE='Danger_5'),
          geometry=IndexedFaceSet(coordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],normalIndex=[0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1],texCoordIndex=[2,3,7,-1,7,6,2,-1,0,2,6,-1,6,4,0,-1,1,0,4,-1,4,5,1,-1,3,1,5,-1,5,7,3,-1],
            coord=Coordinate(USE='DaybeaconDangerText2-COORD'),
            normal=Normal(USE='Danger_4'),
            texCoord=TextureCoordinate(USE='DaybeaconDangerText2-TEXCOORD'))),
        Shape(
          appearance=Appearance(USE='Danger_6'),
          geometry=IndexedFaceSet(coordIndex=[3,2,0,-1,0,1,3,-1],normalIndex=[1,1,1,-1,1,1,1,-1],texCoordIndex=[7,6,4,-1,4,5,7,-1],
            coord=Coordinate(USE='DaybeaconDangerText2-COORD'),
            normal=Normal(USE='Danger_4'),
            texCoord=TextureCoordinate(USE='DaybeaconDangerText2-TEXCOORD')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DangerDaybeacon.py")
