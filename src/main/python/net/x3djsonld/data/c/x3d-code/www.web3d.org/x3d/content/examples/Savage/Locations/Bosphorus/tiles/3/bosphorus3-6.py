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
    GeoViewpoint(description='GeoViewpoint_3_36',geoSystem=['GDC'],position=(41.0075820664573,29.401860686199143,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,29.401860686199143,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-12.x3d'],child2Url=['../../tiles/4/bosphorus6-13.x3d'],child3Url=['../../tiles/4/bosphorus7-12.x3d'],child4Url=['../../tiles/4/bosphorus7-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[133,142,103,86,81,103,111,135,131,138,168,161,152,147,166,183,190,152,151,152,149,148,173,174,125,82,90,115,123,126,125,137,143,140,128,166,165,156,175,191,124,176,137,142,188,186,98,70,123,129,120,106,95,128,117,130,136,165,157,151,135,122,108,119,147,144,174,156,91,60,87,112,97,90,91,107,130,116,128,149,170,174,162,159,104,132,200,233,150,93,67,66,79,96,90,83,95,125,124,116,129,142,162,186,176,128,102,142,168,200,79,71,92,60,81,90,64,91,91,119,132,137,109,143,216,283,241,150,99,149,155,175,117,73,83,60,78,75,107,97,119,126,121,121,116,135,265,233,212,134,98,129,157,172,136,94,67,67,73,132,120,110,114,137,122,89,106,144,178,269,189,135,105,139,190,209,144,115,82,77,59,113,91,131,110,114,123,91,111,185,151,243,150,111,137,161,155,158,151,108,117,105,59,85,78,103,115,94,124,117,81,147,156,163,122,117,112,164,192,202,140,124,82,92,61,66,73,94,99,76,98,122,84,112,160,152,95,122,147,152,178,190,115,118,72,87,99,70,69,85,102,69,120,124,99,83,138,109,127,114,157,154,184,178,111,82,82,78,129,106,83,134,95,79,94,82,127,108,138,87,131,165,157,157,171,191,71,74,59,70,105,106,137,121,120,92,54,89,69,98,121,71,120,169,143,152,177,199,62,58,64,57,91,98,139,115,96,94,78,91,71,126,75,104,145,122,140,150,171,154,102,77,88,54,63,107,67,87,81,77,77,60,64,71,63,142,145,100,165,196,155,154,112,103,76,91,63,60,67,65,57,62,57,68,55,72,67,102,117,162,228,166,220,198,140,110,125,124,88,60,86,81,61,92,67,96,76,102,146,66,112,163,198,204,207,195,153,106,108,108,84,64,79,62,75,127,88,100,78,123,123,79,70,101,127,197,175,157,142,110,78,94,94,60,92,62,92,84,100,123,104,135,153,155,130,79,142,138,165,171,128,153,116,111,93,58,61,60,50,57,64,141,150,142,184,168,122,118,76,117,159,123,128,158,118,109,96,58,62,59,55,56,64,143,145,145,190,165,126,120,75,113,156,120],
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
