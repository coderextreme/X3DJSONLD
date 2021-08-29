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
    meta(content='AAAV.x3d',name='title'),
    meta(content='Advanced Amphibious Assault Vehicle',name='description'),
    meta(content='William Geissler',name='creator'),
    meta(content='9 February 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/AAAV.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/aaav.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/docs/aaav_WelcomeIntro-1_1/sld002.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Advanced Amphibious Assault Vehicle"],title='AAAV'),
    NavigationInfo(speed=50),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0,0),(0,0,0),(0,0,0)],skyAngle=[1.309,1.571],skyColor=[(0.5,0.5,0.5),(0.4,0.4,0.4),(0,0,0)]),
    Viewpoint(description='AAAV from behind',orientation=(0,1,0,-1.57),position=(-20,6,0)),
    #  Orient nose of vehicle to point along X axis. Center of vehicle is above ground so that 0 elevation puts tracks on the ground. A good depth while swimming (i.e. partially submerged) is -2m along Y axis. 
    Transform(scale=(0.875,0.875,0.875),translation=(0,3,0),
      children=[
      LOD(range=[200,2000,20000],
        #  Close range is high resolution. Need to check scale. 
        children=[
        Transform(rotation=(0,1,0,1.57),scale=(0.45,0.45,0.45),
          children=[
          Transform(DEF='Track',
            children=[
            Inline(url=["Track.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Track.x3d","Track.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Track.wrl"])]),
          Transform(DEF='Body',scale=(1.6,2,1.8),translation=(0,4,1),
            children=[
            Inline(url=["Body.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Body.x3d","Body.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Body.wrl"])]),
          Transform(DEF='Turret',rotation=(0,1,0,1.57),scale=(0.8,0.8,0.9),translation=(0,6.2,4),
            children=[
            Inline(url=["Turret.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Turret.x3d","Turret.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Turret.wrl"])])]),
        #  Medium range is low resolution 
        Transform(translation=(0,1.35,0),
          children=[
          Shape(
            geometry=Box(size=(8,3.7,4)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.02,0.26,0))))]),
        #  Long range is tactical symbol 
        Billboard(DEF='LongRangeSymbol',axisOfRotation=(0,0,0),
          children=[
          Transform(translation=(0,30,0),
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(60,60,0),(60,-60,0),(-60,-60,0),(-60,60,0),(60,60,0)])),
              appearance=Appearance(
                texture=ImageTexture(url=["AmphibiousTrackedArmorPlatoon.png","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/AmphibiousTrackedArmorPlatoon.png"])))])]),
        #  Extreme range is not rendered 
        WorldInfo(info=["null node"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AAAV.py")
