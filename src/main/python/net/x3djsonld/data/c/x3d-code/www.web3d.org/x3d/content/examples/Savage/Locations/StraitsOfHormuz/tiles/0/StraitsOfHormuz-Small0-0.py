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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(26.3456597347756,56.33160427093061,233309.5324695896),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.3456597347756,56.33160427093061,0.0),range=279971.44,child1Url=['../../tiles/1/StraitsOfHormuz-Small0-0.x3d'],child2Url=['../../tiles/1/StraitsOfHormuz-Small0-1.x3d'],child3Url=['../../tiles/1/StraitsOfHormuz-Small1-0.x3d'],child4Url=['../../tiles/1/StraitsOfHormuz-Small1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/StraitsOfHormuz-Small0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.11477411,zDimension=22,zSpacing=0.08540567,height=[4,4,0,0,23,53,85,125,274,388,130,0,0,0,3,0,2,2,0,2,0,2,2,3,3,2,0,22,39,64,222,128,37,2,2,2,2,2,2,2,1,1,0,2,3,3,2,4,6,7,54,18,671,476,1,4,4,1,1,1,2,3,8,3,3,2,5,4,3,4,4,1,0,9,175,1250,2,2,0,2,0,2,0,-5,9,4,2,1,2,4,4,5,0,1,1,0,371,411,140,5,0,3,0,-1,0,8,0,12,27,102,6,1,3,1,2,0,1,3,531,843,435,0,-5,0,-5,1,-1,2,1,75,40,54,3,2,3,1,0,1,0,2,135,1145,941,-2,0,-3,2,0,-1,0,12,60,226,266,3,3,5,1,0,0,0,0,3,487,172,525,-3,3,0,1,2,3,27,79,211,195,4,-9,3,4,0,0,2,2,0,469,116,10,-4,0,2,1,3,2,119,142,411,325,13,-9,3,1,0,0,1,2,0,4,485,0,0,0,-3,2,1,5,67,159,628,624,7,2,0,-2,0,1,2,2,1,5,3,3,-1,0,7,1,2,7,34,148,999,1090,3,0,3,10,1,0,0,1,3,1,2,3,0,0,1,0,2,11,47,197,593,668,-2,0,-2,0,-3,1,1,2,0,3,1,2,0,0,5,1,1,105,113,361,421,451,0,0,16,139,-1,1,0,0,0,1,2,3,0,5,1,0,1,80,354,390,406,406,8,0,4,2,156,53,0,0,1,2,1,3,2,5,3,1,2,234,394,249,480,478,258,303,4,-2,-6,1,13,35,4,2,4,2,2,3,4,1,9,99,126,227,500,516,65,45,19,3,0,9,26,11,116,0,0,3,0,3,0,1,6,30,108,187,457,495,247,111,175,428,72,-12,19,4,7,8,5,7,0,3,3,5,25,24,131,299,480,475,438,393,1089,479,541,605,4,7,2,4,1,109,1,0,2,8,16,55,332,339,403,413,757,307,192,94,256,12,32,40,15,7,3,4,3,3,5,8,31,182,304,235,364,408,423,168,130,106,51,52,65,34,87,19,72,8,6,8,8,12,52,148,204,252,281,315,423,168,134,104,51,52,65,34,86,19,72,8,6,8,8,13,51,151,206,253,280,332],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
